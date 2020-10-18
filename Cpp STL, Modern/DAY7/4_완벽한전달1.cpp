#include <iostream>

void foo(int a)  {}				// ������ �ڵ尡 �ִٰ� ����.
void goo(int& a) { a = 100; }	// ""

// "forwarding"         : ���� ���� ���ڸ� �ٸ� �Լ����� �ٽ� �����ϴ� ��
// "perfect forwarding" : "�Ϻ��ϰ� �����ϴ� ��"

// Ư�� �Լ��� ����(����ð�)�� �����ϴ� �Լ�
template<typename F> 
void chronometry(F f, int arg)
{
	// ���� �ð��� ����ϰ�

	f(arg);		// �ش� �Լ� ȣ��

	// �ɸ� �ð� ���
}

int main()
{
	int n = 10;

	chronometry(foo, 10); // "foo(10)" ����� �Լ� ȣ�⿡ ���� ������ �����ϰڴٴ� �ǹ�
	chronometry(goo, n);  // goo(n);

	std::cout << n << std::endl; // 100 ���;� �մϴ�.
}
