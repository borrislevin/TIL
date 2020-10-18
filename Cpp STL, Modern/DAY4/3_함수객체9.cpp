// 3_함수객체8
#include <iostream>
#include <vector>
#include <numeric>
#include <functional>   // plus<>, minus<>, multiplies<> 등의 다양한 함수객체가 제공됩니다.
						// C++98 부터 제공되던 도구.

inline int Mul(int a, int b) { return a * b; }

template<typename T> struct multiplies
{
	inline T operator()(T a, T b) const { return a * b; }
};

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	std::multiplies<int> m; 
	int n = std::accumulate(v.begin(), v.end(), 1, m);

	std::cout << n << std::endl;


	// C++98 : 인라인 치환성을 고려 한다면 함수 보다 "함수객체"가 좋다.

	// C++11 : 람다 표현식을 사용해라. - 정체가 뭘까 ?
	//		=> "함수 객체"를 컴파일러에게 만들어 달라는 표현식

	int n2 = std::accumulate(v.begin(), v.end(), 1, [](int a, int b) { return a * b; });
/*
	// 위 한줄을 보고 컴파일러는 아래 코드를 생성합니다.
	class ClosureType
	{
	public:
		inline int operator()(int a, int b) const
		{
			return a * b;
		}
	};
	ClosureType f;
	int n2 = std::accumulate(v.begin(), v.end(), 1, f);

	// 결론 : 람다표현식이 최종 결과는 "컴파일러가 만든 클래스(()연산자를 재정의한)의 객체"
	//			입니다.
*/
}
// 더하기, 곱하기, 나누기 등을 수행하는 함수 객체가 필요 하다.
// 1. <functional> 헤더에 있는 plus<>, minus<>, multiplies<> 를 사용해도 "좋고" - C++98도 지원
// 2. 람다 표현식을 사용해도 좋다. 단, C++11 부터


// <functional> 헤더에 없는 기능을 수행하는 함수객체가 필요 하다.
// 1. 직접 클래스를 만들어서 ()연산자를 재정의 해도 되지만
// 2. 람다 표현식이 간결합니다. - 권장






