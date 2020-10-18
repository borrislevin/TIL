#include <iostream>

void foo(int& a)       { std::cout << "int&" << std::endl; }
void foo(const int& a) { std::cout << "const int&" << std::endl; }
void foo(int&& a)      { std::cout << "int&&" << std::endl; }

int main()
{
	int n = 10;

	foo(n); // 1번호출, 없으면 2번 사용
	
	foo(10);// 3번호출, 없으면 2번 사용

	// 결론 : 모두 받으려면 const int& 로
	// 구별하려면 : int&, int&& 를 따로 제작!
}







