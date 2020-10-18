#include <iostream>

void foo(int a) {}
void goo(int& a) { a = 100; }

void hoo(int&& a) {}

// �ٽ�. �Ϻ��� �������Ϸ���
// 1. �Լ��� 2�� ( int&, int&& ) ������
// 2. int&& ������ �Լ������� "�ٸ����� ������ static_cast<int&&>" �ؼ� ������.

template<typename F> void chronometry(F f, int& arg)
{
	f(arg);
}
template<typename F> void chronometry(F f, int&& arg)
{

	f(static_cast<int&&>(arg));
}

int main()
{
	hoo(10); 
	chronometry(hoo, 10); 
}
