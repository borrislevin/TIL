#include <iostream>

void foo() {}
void goo(int& a, int& b, int c) { a = 100; b = 100; }

// C++11 부터 "가변 인자 템플릿" 문법이 지원 됩니다.
template<typename F, typename ... T> void chronometry(F f, T&& ... arg)
{
	f(std::forward<T>(arg)... ); 
}
int main()
{
	int n1 = 0, n2 = 0;

	chronometry(foo);  // 함수만 전달
	chronometry(goo, n1, n2, 10); // 함수 + 인자 3개 전달

	std::cout << n1 << std::endl; // 100
	std::cout << n2 << std::endl; // 100

}
