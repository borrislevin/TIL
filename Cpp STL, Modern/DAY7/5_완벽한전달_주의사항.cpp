// 9_완벽한전달_주의사항
#include <iostream>

template<typename F, typename T>
void chronometry(F f, T&& arg)
{
	f(std::forward<T>(arg));
}

void foo(int* p) {}

int main()
{
	int n = 0;

	foo(0); // ok...   "literal 0" 은 포인터로 암시적 변환되지만
	foo(n); // error.  0을 담은 int 형 변수는 "포인터로 변환될수 없다"

//	chronometry(foo, 0); // error
	chronometry(foo, nullptr); // ok..  포인터 초기화시 0을 사용하지 말고, nullptr을 사용해라
}
// main				        chronometry	                        	foo(int*)
// foo(0)==============================================================> ok
// chronometry(0)===> chronometry(int&& arg), foo(arg) ================> error
//												int 는 포인터로 변환될수 없다.








