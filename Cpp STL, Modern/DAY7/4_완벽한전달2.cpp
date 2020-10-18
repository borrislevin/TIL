#include <iostream>

void foo(int a) {}				
void goo(int& a) { a = 100; }	

// 완벽한 전달을 하려면
// 1. 복사본이 생성되면 안된다.
// 2. const 등의 속성이 추가되어도 안된다.
// 3. 해결책은 인자 받을때 "int&" 버전과 "int&&" 버전의
//    함수를 따로 제공해야 한다.

template<typename F> void chronometry(F f,  int& arg)
{
	f(arg);		
}
template<typename F> void chronometry(F f, int&& arg)
{
	f(arg);
}
int main()
{
	int n = 10;

	chronometry(foo, 10); 
	chronometry(goo, n);   // goo(n) 과 동일하게 동작해야 한다.

	std::cout << n << std::endl; // 100 나와야 합니다.
}
