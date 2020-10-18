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
	// C����� �Լ� �����ʹ� �������� �����մϴ�.
//	void(*f)(int) = &f1;
//	f(10);	// ok. f1(10);
//	f = &f2; // error. f2�� ���ڰ� 2�� �Դϴ�.

	// C++11 ���� �߰��� function<> �� �Լ� ������ ������ ���� ��Ų ���� �Դϴ�.
	std::function<void(int)> f;

	f = &f1;
	f(10); // ok.  f1(10)

	// bind �� ����ϸ� ���ڰ� 1�� �̻��� ��� �Լ��� f�� ������ �ֽ��ϴ�.
	f = std::bind(&f2, 5, _1);

	f(10); // f2(5, 10);

	f = std::bind(&foo, 7, 6, _1, 8 );
	f(4); // 7, 6, 4, 8  ������ �� ������.

	// f�� ���� ǥ���ĵ� ������ �ֽ��ϴ�.
	f = [](int a) { std::cout << "����ǥ����" << std::endl; };
	f(3);

}







