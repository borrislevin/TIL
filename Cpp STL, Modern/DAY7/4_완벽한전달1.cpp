#include <iostream>

void foo(int a)  {}				// 복잡한 코드가 있다고 가정.
void goo(int& a) { a = 100; }	// ""

// "forwarding"         : 전달 받은 인자를 다른 함수에게 다시 전달하는 것
// "perfect forwarding" : "완벽하게 전달하는 것"

// 특정 함수의 성능(수행시간)을 측정하는 함수
template<typename F> 
void chronometry(F f, int arg)
{
	// 현재 시간을 기록하고

	f(arg);		// 해당 함수 호출

	// 걸린 시간 출력
}

int main()
{
	int n = 10;

	chronometry(foo, 10); // "foo(10)" 모양의 함수 호출에 대한 성능을 측정하겠다는 의미
	chronometry(goo, n);  // goo(n);

	std::cout << n << std::endl; // 100 나와야 합니다.
}
