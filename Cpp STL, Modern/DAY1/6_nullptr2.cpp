#include <iostream>

// �� nullptr�� ������� ?
void foo(int)   { std::cout << "int" << std::endl; }
void foo(void*) { std::cout << "void*" << std::endl; }
void goo(char*) { std::cout << "goo" << std::endl; }

int main()
{
	foo(0);  // int. 0�� ��Ȯ�� Ÿ���� "int" �Դϴ�.
	foo((void*)0);  // void*   �����ϰ� ��Ȯ������ �ʽ��ϴ�.
					// �� ������ "���� 0"�� �����Ͱ� ������ ����ϹǷ�..

	foo(nullptr); // ������ 0�� ������ ��Ȯ�մϴ�.
	goo(nullptr); // ok
}







