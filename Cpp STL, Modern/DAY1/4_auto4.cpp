#include <iostream>

/*
int Mul(int a, int b)
{
	return a * b;
}
*/

// 1, 2번째 인자의 타입을 다를수 도 있어야 한다.
/*
template<typename T>
T Mul(T a, T b)
{
	return a * b;
}
*/
// decltype, 후위 반환 표기법 등은 "일반 개발자" 보다는 "라이브러리" 설계자가 많이 사용하는 문법입니다

// C++ : "라이브러리 설계에 최적화된 언어를 만들자"는 철학이 있습니다.

template<typename T1, typename T2>
//decltype( a * b ) Mul(T1 a, T2 b)	// 이런 경우들 때문 "decltype"을 만들었습니다.근데 왜 에러일까요?
								    // a, b 변수가 선언전에 사용되었다.

//auto Mul(T1 a, T2 b) -> decltype(a * b)	// ok.. C++11 스타일.
auto Mul(T1 a, T2 b) //-> decltype(a * b)	// ok.. C++14 스타일.
{
	return a * b;
}



int main()
{
	std::cout << Mul(3, 4)     << std::endl;
	std::cout << Mul(1.2, 4.3) << std::endl;
	std::cout << Mul<int, double>(2, 4.3) << std::endl; // 정확한 표기법
	std::cout << Mul(2, 4.3) << std::endl;              // 하지만, 타입 생략가능. 인자보고 타입결정


//	a = 30; // error. 변수를 선언전에 사용
//	int a = 10;
//	a = 20; // ok..
}





