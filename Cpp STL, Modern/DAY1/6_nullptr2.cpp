#include <iostream>

// 왜 nullptr을 만들었나 ?
void foo(int)   { std::cout << "int" << std::endl; }
void foo(void*) { std::cout << "void*" << std::endl; }
void goo(char*) { std::cout << "goo" << std::endl; }

int main()
{
	foo(0);  // int. 0의 정확한 타입은 "int" 입니다.
	foo((void*)0);  // void*   불편하고 명확하지가 않습니다.
					// 그 이유는 "정수 0"을 포인터가 빌려다 사용하므로..

	foo(nullptr); // 포인터 0이 있으면 명확합니다.
	goo(nullptr); // ok
}







