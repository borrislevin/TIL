// 참고_함수오버로딩
#include <iostream>

void foo(int& a)       { std::cout << "int&" << std::endl; }		// 1
void foo(const int& a) { std::cout << "const int&&" << std::endl; }	// 2
void foo(int&& a)      { std::cout << "int&&" << std::endl; }		// 3

int main()
{
	int n = 10;
	foo(n);		// 1번 호출, 없으면 2번
	foo(10);	// 3번 호출, 없으면 2번

	int& r1 = n; // r1은 이름이 있고 "r1 = 20" 도 된다. lvalue 
	foo(r1);	 // 1번 호출

	int&& r2 = 10;	// "10" 이름이 없고  "값"만 있다 "값(10) = 다른값"은 될수 없다. rvalue
					// "r2" 이름이 있다,             "r2 = 20" 된다.!!!    lvalue 이다.

				// 핵심 : 10은 rvalue 이지만, 10을 가리키는 참조 변수인 r2는 lvalue 이다.

		//			데이타 타입			value 속성
		// 10		int					rvalue
		// r2		int&&				lvalue

	foo(10); // 3번호출
	foo(r2); // 1번 호출
	foo(static_cast<int&&>(r2)); // 3번 호출
}

void goo(int&& a) {}  // 인자가 "int&&" 타입을 받겠다는 의미가 아니고
					  // value 속성이 "rvalue" 이 것만 받겠다는의미.