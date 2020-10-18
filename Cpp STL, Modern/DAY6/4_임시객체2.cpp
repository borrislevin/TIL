
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

// �ӽð�ü�� Ư¡ - 79 page
int main()
{
	Point pt(1, 2);
	
	pt.x = 10;			// ok
//	Point(1, 2).x = 10;	// error. �ӽð�ü�� ��ȣ�� 
						// ���ʿ� �ü� ����.						
	Point* p1 = &pt;			// ok
//	Point* p2 = &Point(1, 2);	// error. �ӽð�ü�� �ּ� �����ڷ� �ּҸ� ���Ҽ� ����
							
	Point& r1 = pt;				// ok
//	Point& r2 = Point(1, 2);	// error. �ӽð�ü�� ������ ����ų���� ����.


	// �ٽ� : �ӽð�ü�� "��� ����"�� ����ų���� �ִ�.
	const Point& r3 = Point(1, 2);	// �� ���� �ӽð�ü�� �ٷ� �ı����� �ʰ�
									// r3�� ����� ���� ����.
}





