// 6_bind2
#include <iostream>
#include <functional> 
using namespace std::placeholders; 

void foo(int a, int b, int c, int d)
{
	printf("%d, %d, %d, %d\n", a, b, c, d);
}
void f1(int a)        { printf("%d\n", a); }
void f2(int a, int b) { printf("%d, %d\n", a, b); }

int main()
{
	// C언어의 함수 포인터는 유연성이 부족합니다.
//	void(*f)(int) = &f1;
//	f(10);	// ok. f1(10);
//	f = &f2; // error. f2는 인자가 2개 입니다.

	// C++11 에서 추가된 function<> 은 함수 포인터 개념을 발전 시킨 도구 입니다.
	std::function<void(int)> f;

	f = &f1;
	f(10); // ok.  f1(10)

	// bind 만 사용하면 인자가 1개 이상이 모든 함수는 f에 담을수 있습니다.
	f = std::bind(&f2, 5, _1);

	f(10); // f2(5, 10);

	f = std::bind(&foo, 7, 6, _1, 8 );
	f(4); // 7, 6, 4, 8  나오게 해 보세요.

	// f는 람다 표현식도 담을수 있습니다.
	f = [](int a) { std::cout << "람다표현식" << std::endl; };
	f(3);

}







