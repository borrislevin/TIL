#include <iostream>

void foo(int a) {}
void goo(int& a) { a = 100; }

void hoo(int&& a) {}


template<typename F> void chronometry(F f, int& arg)
{
	f(arg);
}

// main						chronometry								hoo(int&& a)
// hoo(10)  ===========================================================>  ok
// chronometry(10) =========> int&& arg로 받음
//							  hoo(arg)   ======> hoo(int&)찾음.. 없으므로 error

template<typename F> void chronometry(F f, int&& arg)
{
	// int&& r2 = 10;  // 10은 rvalue, r2 는  "lvalue"

	// 즉 main 에서 rvalue 인 10을 보냈는데, int&& arg 로 받았다.
	// 그런데, arg는 lvalue 이므로 
	//f(arg); // 이 코드는 hoo(int&) 함수를 찾게 된다.

	// 해결책 : 다시 원래 속성인 rvalue 로 변경해서 전달
	f( static_cast<int&&>(arg) );
}

int main()
{
	hoo(10); // ok
	chronometry(hoo, 10); // 왜 안될까요 ? 위 코드의 문제는 뭘까요 ?
						  // error.
}
