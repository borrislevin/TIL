#include <iostream>

void foo(int a) {}
void goo(int& a) { a = 100; }

void hoo(int&& a) {}

// 아래 구현은 "한가지의 문제가 있습니다." main 참고
template<typename F> void chronometry(F f, int& arg)
{
	f(arg);
}
template<typename F> void chronometry(F f, int&& arg)
{
	f(arg);
}

int main()
{
	hoo(10); // ok
	chronometry(hoo, 10); // 왜 안될까요 ? 위 코드의 문제는 뭘까요 ?
						  // error.
}
