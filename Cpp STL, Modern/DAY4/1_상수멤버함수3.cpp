// 1_�������Լ�3

// www.github.com/webkit   - ���ĸ�, ũ�� ���� �������� ���� �ҽ�
// webkit/source/wtf/wtf/seconds.h ���� ������

// C++ �н��ϸ鼭 ������ "���¼ҽ�" �ڵ带 ��� "�ڵ� ���"���� ���� �ϼ���.

#include <iostream>

class Point
{
	int x = 0;
	int y = 0;
public:
	// const �� �ݵ�� ����� ������ ��� �ٿ��� �մϴ�.
	void print() const;
};

// Point.cpp
void Point::print() const
{
	std::cout << x << ", " << y << std::endl;
}
int main()
{
	const Point p(1, 2);
	p.print();
}