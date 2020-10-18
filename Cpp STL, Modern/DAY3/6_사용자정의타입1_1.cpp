// 6_���������Ÿ��1_1.cpp �߰��� �ּ���.
#include <vector>
#include <algorithm>
#include "show.h"

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}

	// == �� ������ �� ��� ���������� != �� ������ �ϴ� ���� �����ϴ�.
	bool operator==(const Point& pt) const { return x == pt.x && y == pt.y; }
	bool operator!=(const Point& pt) const { return !(*this == pt); }
};
int main()
{
	std::vector<Point> v;

	Point p1(1, 2);
	Point p2(2, 1);
	Point p3(2, 2);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);

	// 1, 2 �� ���� ã�� �ʹ�.
//	Point temp(1, 2);
//	auto p = std::find(v.begin(), v.end(), temp); // �ɱ�� ? error
												// ���ϼ��� üũ�ϱ� ���� "==" �����ڸ� ����մϴ�.
//	if (p1 == temp) {} // error

	// STL �����̳ʿ� ����� ���� Ÿ���� ������ ������. 
	// �˻�, ���ĵ��� �پ��� �˰����� �����Ϸ��� �ش� �˰����� �䱸�ϴ� ������ �ֽ��ϴ�.

	// �˻�(find) �Ϸ���, ��(==)�� �����Ҽ� �־�� �մϴ�.
	// ��� 1. Ÿ�Ծȿ� == �����ڸ� ������ �Ѵ�.

	Point temp(1, 2);
	auto p = std::find(v.begin(), v.end(), temp); // ==

	// ��� 2. find�� ������� ���� find_if �� ����ϸ�ȴ�.
	auto p2 = std::find_if(v.begin(), v.end(), 
						[](const Point& pt) { return pt.x == 1 && pt.y = 2; });
}




