// 9_�Ϻ�������_���ǻ���
#include <iostream>

template<typename F, typename T>
void chronometry(F f, T&& arg)
{
	f(std::forward<T>(arg));
}

void foo(int* p) {}

int main()
{
	int n = 0;

	foo(0); // ok...   "literal 0" �� �����ͷ� �Ͻ��� ��ȯ������
	foo(n); // error.  0�� ���� int �� ������ "�����ͷ� ��ȯ�ɼ� ����"

//	chronometry(foo, 0); // error
	chronometry(foo, nullptr); // ok..  ������ �ʱ�ȭ�� 0�� ������� ����, nullptr�� ����ض�
}
// main				        chronometry	                        	foo(int*)
// foo(0)==============================================================> ok
// chronometry(0)===> chronometry(int&& arg), foo(arg) ================> error
//												int �� �����ͷ� ��ȯ�ɼ� ����.








