// 3_함수객체7 - 136 page소스
#include <iostream>
#include <algorithm>

// 5번에서 foo, goo 복사 해 오세요
// 6번에서 Show, Show2 복사해 오세요
inline void foo(int n) { std::cout << n << std::endl; }
inline void goo(int n) { std::cout << n << std::endl; }
struct Show { inline void operator()(int n) { std::cout << n << std::endl; }};
struct Show2{ inline void operator()(int n) { std::cout << n << std::endl; }};

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// C++ 표준 for_each()이 모든 인자는 템플릿 입니다.

	// 1. 3번째 인자로 일반 함수를 보내는 경우

	// 장점 : 3번째 인자로 전달하는 함수를 변경해도, for_each() 함수는 "한개" 이다. 
	//				실행파일 크기 증가 안함(코드 메모리 증가 안함)

	// 단점 : 3번째 인자로 전달한 함수가 인라인 치환 안됨. 느리다.

	std::for_each(x, x + 10, foo); // for_each(int*, int*, void(*)(int)) 모양의 함수를 생성
	std::for_each(x, x + 10, goo); // for_each(int*, int*, void(*)(int)) 모양의 함수를 생성


	// 2. 3번째 인자로 함수객체를 보낼때

	// 장점 : 3번째 인자로 전달한 함수객체의 () 연산자 부분이
	//			인라인 치환된다. 빨라진다.

	// 단점 : 3번째 인자로 전달하는 함수객체에 따라, 다른 for_each()함수 생성
	//			for_each()는 여러개의 함수가 생성됨. 실행파일 증가(코드 메모리 증가)
	Show  s1;
	Show2 s2;

	std::for_each(x, x + 10, s1); // for_each(int*, int*, Show) 모양의 함수를 생성
	std::for_each(x, x + 10, s2); // for_each(int*, int*, Show2) 모양의 함수를 생성
}









