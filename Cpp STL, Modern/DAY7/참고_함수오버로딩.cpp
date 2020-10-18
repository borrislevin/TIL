// ����_�Լ������ε�
#include <iostream>

void foo(int& a)       { std::cout << "int&" << std::endl; }		// 1
void foo(const int& a) { std::cout << "const int&&" << std::endl; }	// 2
void foo(int&& a)      { std::cout << "int&&" << std::endl; }		// 3

int main()
{
	int n = 10;
	foo(n);		// 1�� ȣ��, ������ 2��
	foo(10);	// 3�� ȣ��, ������ 2��

	int& r1 = n; // r1�� �̸��� �ְ� "r1 = 20" �� �ȴ�. lvalue 
	foo(r1);	 // 1�� ȣ��

	int&& r2 = 10;	// "10" �̸��� ����  "��"�� �ִ� "��(10) = �ٸ���"�� �ɼ� ����. rvalue
					// "r2" �̸��� �ִ�,             "r2 = 20" �ȴ�.!!!    lvalue �̴�.

				// �ٽ� : 10�� rvalue ������, 10�� ����Ű�� ���� ������ r2�� lvalue �̴�.

		//			����Ÿ Ÿ��			value �Ӽ�
		// 10		int					rvalue
		// r2		int&&				lvalue

	foo(10); // 3��ȣ��
	foo(r2); // 1�� ȣ��
	foo(static_cast<int&&>(r2)); // 3�� ȣ��
}

void goo(int&& a) {}  // ���ڰ� "int&&" Ÿ���� �ްڴٴ� �ǹ̰� �ƴϰ�
					  // value �Ӽ��� "rvalue" �� �͸� �ްڴٴ��ǹ�.