// 6_bind2
#include <iostream>
#include <functional> 
using namespace std::placeholders;

void foo(int a, int b, int c, int d)
{
	printf("%d, %d, %d, %d\n", a, b, c, d);
}
void f1(int a) { printf("%d\n", a); }
void f2(int a, int b) { printf("%d, %d\n", a, b); }

// GUI 라이브러리 설계자를 생각해 봅시다.
class Button
{
//	void(*handler)(); // C언어라면 함수 포인터 사용.

	std::function<void()> handler = 0;
public:
	void setHandler(std::function<void()> f) { handler = f; }

	void Click() 
	{
		// 여기서 직접 일을 하면
		// 모든 버튼이 동일한 일을 하게 됩니다.
		// 등록된 함수에게 버튼이 눌렸다는 사실을 알려야 합니다.
		// "버튼이 외부에 이벤트를 발생한다" 라고 표현
		if (handler) handler();
	}
};
//------------ 
// 구글에서 "C++ nana" 라고 검색 해보세요

// C++에서 GUI 프로그램 도구(라이브러리) : (MFC, QT), wxWidget, => 1990년대 출시된 것들.

void goo() { std::cout << "goo" << std::endl; }

int main()
{
	Button btn1;	// 이순간 화면에 버튼이 만들어 진다고 생각해 봅시다.
	Button btn2;

	// 각 버튼에 핸들러 함수 등록
	btn1.setHandler(&goo);				   // 인자 없는 함수는 바로 등록

	btn2.setHandler( std::bind(&f2, 1, 2) ); // 인자가 있으면 bind 사용

	btn2.setHandler( []() {std::cout << "버튼2 클릭" << std::endl; } ); // 간단한 작업은 람다 표현식으로


	btn1.Click();
	btn2.Click();	// 사용자가 버튼을 누르면 Click()이 자동으로 호출되도록 설계 되었다고 생각하세요.

}







