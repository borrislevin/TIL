// 3_�Լ���ü7 - 136 page�ҽ�
#include <iostream>
#include <algorithm>

// 5������ foo, goo ���� �� ������
// 6������ Show, Show2 ������ ������
inline void foo(int n) { std::cout << n << std::endl; }
inline void goo(int n) { std::cout << n << std::endl; }
struct Show { inline void operator()(int n) { std::cout << n << std::endl; }};
struct Show2{ inline void operator()(int n) { std::cout << n << std::endl; }};

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// C++ ǥ�� for_each()�� ��� ���ڴ� ���ø� �Դϴ�.

	// 1. 3��° ���ڷ� �Ϲ� �Լ��� ������ ���

	// ���� : 3��° ���ڷ� �����ϴ� �Լ��� �����ص�, for_each() �Լ��� "�Ѱ�" �̴�. 
	//				�������� ũ�� ���� ����(�ڵ� �޸� ���� ����)

	// ���� : 3��° ���ڷ� ������ �Լ��� �ζ��� ġȯ �ȵ�. ������.

	std::for_each(x, x + 10, foo); // for_each(int*, int*, void(*)(int)) ����� �Լ��� ����
	std::for_each(x, x + 10, goo); // for_each(int*, int*, void(*)(int)) ����� �Լ��� ����


	// 2. 3��° ���ڷ� �Լ���ü�� ������

	// ���� : 3��° ���ڷ� ������ �Լ���ü�� () ������ �κ���
	//			�ζ��� ġȯ�ȴ�. ��������.

	// ���� : 3��° ���ڷ� �����ϴ� �Լ���ü�� ����, �ٸ� for_each()�Լ� ����
	//			for_each()�� �������� �Լ��� ������. �������� ����(�ڵ� �޸� ����)
	Show  s1;
	Show2 s2;

	std::for_each(x, x + 10, s1); // for_each(int*, int*, Show) ����� �Լ��� ����
	std::for_each(x, x + 10, s2); // for_each(int*, int*, Show2) ����� �Լ��� ����
}









