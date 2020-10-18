#include <iostream>

void foo(int a) {}
void goo(int& a) { a = 100; }

void hoo(int&& a) {}

/*
template<typename F> void chronometry(F f, int& arg)
{
	//f(arg);

	f(static_cast<int&>(arg));  // arg는 이미 int& 타입이므로 "필요 없는 캐스팅" 입니다
								// 하지만 있어도 전혀 문제 되지 않습니다.
}
template<typename F> void chronometry(F f, int&& arg)
{

	f(static_cast<int&&>(arg));
}
*/
// forwarding reference 를 사용하면 위 2개의 함수가 자동생성 됩니다.
template<typename F, typename T> void chronometry(F f, T&& arg)
{
	// 아래 캐스팅은 main에서 어떤 인자를(n 또는 10) 보내는가에 따라 달라지는 캐스팅.
	f(static_cast<T&&>(arg));
}

int main()
{
//	hoo(10);
//	chronometry(hoo, 10);

	chronometry(foo, 10); // 10(rvalue) T: int   T&& :int&&  이므로 static_cast<int&&>(arg)
	chronometry(goo, n);  // n(lvalue), T: int&, T&& : int&  이므로 static_cast<int&>(arg)
}
