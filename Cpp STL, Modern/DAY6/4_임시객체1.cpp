#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b)	{ std::cout << "Point()" << std::endl;	}
	~Point()            { std::cout << "~Point()" << std::endl;	}
};
// 1. �ӽð�ü�� ����, ����� ��(Ŭ�����̸�())
// 2. �ӽð�ü�� ����.
int main()
{
//	Point pt(1, 2);	// �̸��� �ִ� ��ü, ����:"��"�� ���� ����

//	Point(1, 2);	// �̸����� ��ü(unnamed object), �ӽð�ü(temporary)
					// ���� : ������ ��

	Point(1, 2), std::cout << "X" << std::endl;

	std::cout << "-------" << std::endl;
}





