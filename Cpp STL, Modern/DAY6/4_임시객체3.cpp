#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

// �ӽð�ü�� �Լ� ���� - 81 page

//void foo(Point& pt) {}       // �ӽð�ü�� ������ �����ϴ�.
void foo(const Point& pt) {}   // �ӽð�ü�� ������ �ִ�.

int main()
{
//	Point pt(1, 2);
//	foo(pt);
	// pt�� ���̻� �ʿ� ���, �� ����� ���� �޸𸮿� ���� �ְ� �ȴ�.

	// �ٽ� ) ���ڷθ� ����� ��ü�� �ʿ� �ϸ�, �ӽð�ü�� ��������.
	foo( Point(1, 2) );

//	std::plus<int> p;
//	int n = std::accumulate(x, x + 10, 0, p);
//	int n = std::accumulate(x, x + 10, 0, std::plus<int>() );

	std::cout << "-----" << std::endl;
}





