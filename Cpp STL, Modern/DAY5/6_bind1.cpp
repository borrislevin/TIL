// 6_bind1
#include <iostream>
#include <functional> 
using namespace std::placeholders; // _1, _2, _3... 등을 사용하기 위한 도구

void foo(int a, int b, int c, int d)
{
	printf("%d, %d, %d, %d\n", a, b, c, d);
}
int main()
{
	// bind : 함수의 특정 인자를 고정한 새로운 함수를 만드는 도구 - C++11에서 추가된 라이브러리

	foo(1, 2, 3, 4);

	// 사용법 : bind(N항 함수주소, N개의 인자)
	std::bind(&foo, 1, 2, 3, 4) ();  // 4항함수 => 0항 함수
	//<<-----새로운 함수 ----->|()

	std::bind(&foo, 3, _1, 8, _2)(10, 9); // 4항 함수 => 2항 함수
	   									  // 3, 10, 8, 9

	std::bind(&foo, _3, _1, 7 , _2 )(8, 9, 3); // 3, 8, 7, 9 나오게 ? 채우세요.
						// 4항 함수 => 3항함수로 변경한것.
}