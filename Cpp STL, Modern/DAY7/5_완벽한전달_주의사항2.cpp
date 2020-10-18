// 9_�Ϻ�������_���ǻ���
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
	printf("%p\n", &goo); // �Լ� �ּ�.. ok
//	printf("%p\n", &foo); // error. �����̸��� �Լ��� ������ �ִ�.
	// ĳ���� ���� Ȱ���ؼ� � �Լ����� �����Ϸ����� �˷��ش�.
	printf("%p\n", static_cast<void(*)(int)>(&foo)); //ok
	//--------------------------------
	// foo�� ����ȣ���ϴ� ���ڸ� ���� �ش� �Լ��� ã���� �ֽ��ϴ�
	foo();
	foo(3);
	foo(3, 4);

	//chronometry(foo, 3); //�ɱ�� ?  �ǵ��� foo(3) error
	chronometry(static_cast<void(*)(int)>(foo), 3); //ok

	// ��������.. �Ʒ� �ڵ�� �ɱ�� ?
	void(*f)(int, int) = &foo; // ok..
	auto f2 = &foo; // error. � foo ���� �˼� ����.

}









