#include <iostream>

void foo(int a) {}
void goo(int& a) { a = 100; }
void hoo(int&& a) {}

// 최종 결론. 전달 받은 인자를 다른 곳으로 완벽하게 전달하려면

// 1. 인자를 받을때 "forwarding reference" 로 받아라!
//		=> 복사본없이 lvalue 참조, rvalue 참조로 받는 함수가 자동 생성되므로

// 2. 받은 인자를 다른곳에 보낼때는 "std::forward<T>(arg)" 로 묶어서 보내야 한다.

template<typename F, typename T> void chronometry(F f, T&& arg)
{
//	f(static_cast<T&&>(arg));
	f( std::forward<T>(arg) ); // std::forward<> 함수가 위처럼 캐스팅하는 일을 합니다.
}

int main()
{
	chronometry(foo, 10); 
	chronometry(goo, n);  
}
