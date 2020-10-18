#include <iostream>

void foo(int a) {}
void goo(int& a) { a = 100; }

void hoo(int&& a) {}

// 핵심. 완벽한 전달을하려면
// 1. 함수를 2개 ( int&, int&& ) 만들어라
// 2. int&& 버전의 함수에서는 "다른곳에 보낼때 static_cast<int&&>" 해서 보내라.

template<typename F> void chronometry(F f, int& arg)
{
	f(arg);
}
template<typename F> void chronometry(F f, int&& arg)
{

	f(static_cast<int&&>(arg));
}

int main()
{
	hoo(10); 
	chronometry(hoo, 10); 
}
