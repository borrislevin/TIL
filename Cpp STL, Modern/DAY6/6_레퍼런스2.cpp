#include <iostream>

void foo(int& a)       { std::cout << "int&" << std::endl; }
void foo(const int& a) { std::cout << "const int&" << std::endl; }
void foo(int&& a)      { std::cout << "int&&" << std::endl; }

int main()
{
	int n = 10;

	foo(n); // 1��ȣ��, ������ 2�� ���
	
	foo(10);// 3��ȣ��, ������ 2�� ���

	// ��� : ��� �������� const int& ��
	// �����Ϸ��� : int&, int&& �� ���� ����!
}







