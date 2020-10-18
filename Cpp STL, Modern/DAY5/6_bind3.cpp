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

// GUI ���̺귯�� �����ڸ� ������ ���ô�.
class Button
{
//	void(*handler)(); // C����� �Լ� ������ ���.

	std::function<void()> handler = 0;
public:
	void setHandler(std::function<void()> f) { handler = f; }

	void Click() 
	{
		// ���⼭ ���� ���� �ϸ�
		// ��� ��ư�� ������ ���� �ϰ� �˴ϴ�.
		// ��ϵ� �Լ����� ��ư�� ���ȴٴ� ����� �˷��� �մϴ�.
		// "��ư�� �ܺο� �̺�Ʈ�� �߻��Ѵ�" ��� ǥ��
		if (handler) handler();
	}
};
//------------ 
// ���ۿ��� "C++ nana" ��� �˻� �غ�����

// C++���� GUI ���α׷� ����(���̺귯��) : (MFC, QT), wxWidget, => 1990��� ��õ� �͵�.

void goo() { std::cout << "goo" << std::endl; }

int main()
{
	Button btn1;	// �̼��� ȭ�鿡 ��ư�� ����� ���ٰ� ������ ���ô�.
	Button btn2;

	// �� ��ư�� �ڵ鷯 �Լ� ���
	btn1.setHandler(&goo);				   // ���� ���� �Լ��� �ٷ� ���

	btn2.setHandler( std::bind(&f2, 1, 2) ); // ���ڰ� ������ bind ���

	btn2.setHandler( []() {std::cout << "��ư2 Ŭ��" << std::endl; } ); // ������ �۾��� ���� ǥ��������


	btn1.Click();
	btn2.Click();	// ����ڰ� ��ư�� ������ Click()�� �ڵ����� ȣ��ǵ��� ���� �Ǿ��ٰ� �����ϼ���.

}







