// 9_완벽한전달_주의사항
#include <iostream>

template<typename F, typename T>
void chronometry(F f, T&& arg)
{
	f(std::forward<T>(arg));
}

void foo() {}
void foo(int a) {}
void foo(int a, int b) {}

void goo() {}

int main()
{
	printf("%p\n", &goo); // 함수 주소.. ok
//	printf("%p\n", &foo); // error. 동일이름의 함수가 여러개 있다.
	// 캐스팅 등을 활용해서 어떤 함수인지 컴파일러에게 알려준다.
	printf("%p\n", static_cast<void(*)(int)>(&foo)); //ok
	//--------------------------------
	// foo를 직접호출하는 인자를 보고 해당 함수를 찾을수 있습니다
	foo();
	foo(3);
	foo(3, 4);

	//chronometry(foo, 3); //될까요 ?  의도는 foo(3) error
	chronometry(static_cast<void(*)(int)>(foo), 3); //ok

	// 응용질문.. 아래 코드는 될까요 ?
	void(*f)(int, int) = &foo; // ok..
	auto f2 = &foo; // error. 어떤 foo 인지 알수 없다.

}









