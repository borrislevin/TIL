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
//	int n = std::accumulate(v.begin(), v.end(), 0); // 기본 버전 "+ 연산" 수행
//	int n = std::accumulate(v.begin(), v.end(), 1, Mul); // 연산자 전달 버전 - 일반 함수
												// 현재 코드에서 Mul()은 총 10번 호출됩니다
												// 인라인 치환 안됨.
//	multiplies<int> m;
	std::multiplies<int> m; // C++ 표준의 multiplies<>
	int n = std::accumulate(v.begin(), v.end(), 1, m); // 함수 객체 전달
													   // m의 () 연산자구현부가 인라인 치환됨

	std::cout << n << std::endl;
}

// cpprefernce.com 의 첫화면에서
// General utilities library -> function object




