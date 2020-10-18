// 3_함수객체1
// modern C++ 교재 129 page 정도에 있습니다.
#include <iostream>
// 함수객체(function object)
// 함수 처럼 사용가능한 객체
// 1. 원리 : 클래스(구조체) 안에 () 연산자 함수를 재정의 해서 함수 처럼 사용가능하게 한것

// 2. 일반 함수를 사용하면 되는데 "왜 함수객체"를 사용하는 가?
// A. 상태를 가지는 함수
// B. 빠르다. => 핵심.

struct Plus
{
	int operator()(int a, int b) const
	{
		return a + b;
	}
};

int main()
{
	Plus p; // p 는 함수가 아닌 객체 입니다.(Plus 라는 구조체의 변수)

	int n = p(1, 2); // 객체 p를 함수 처럼 사용하고 있습니다.
					 // p.operator()(1,2)  로 해석됩니다.

	// 아래 코드에서 a가 "사용자 정의 타입의 객체"라면
	// a + b; // a.operator+(b)
	// a - b; // a.operator-(b)
	// a();   // a.operator()()
	// a(1,2);// a.operator()(1,2) 로 해석됩니다.
}
