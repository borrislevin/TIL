
#include <vector>
#include <algorithm>
#include "show.h"
class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b)
	{
		std::cout << "Point()" << std::endl;
	}
	~Point() { std::cout << "~Point()" << std::endl; }

	Point(const Point& p)
	{
		std::cout << "Point(const Point&)" << std::endl;
	}
	void dump() const 
	{
		std::cout << x << ", " << y << std::endl;
	}
	bool operator<(const Point& pt) const {	return x < pt.x;	}
	//									return this->x < pt.x;
};
int main()
{
	std::vector<Point> v;

	v.emplace_back(1, 2); // Point p(1,2);  v.push_back(p) ó�� �ִ� �ǹ�..
							// ������ push_back ���ٴ� emplace_back �� �����ϴ�.
	v.emplace_back(2, 3);
	v.emplace_back(3, 2);
	v.emplace_back(0, 1);

	// v�� ��� ��Ҹ� ����(sort, ũ������� ����)�ϰ� �ʹ�.
	// ��� 1. ����� ���� Ÿ�Ծȿ� ũ�⸦ ���Ҽ� �ְ� "<" �����ڸ� �����Ѵ�.
	//         STL�� ũ�� �񱳽� �׻� "< (less)" �� ����մϴ�. 
	//         ����, ">" �� greater ��� �մϴ�.
	std::sort(v.begin(), v.end());

	// ��� 2. 2���� ��ü�� ���ϴ� �Լ� ����
	//		���� : �ʿ��Ҷ� ���� � ��Ģ���� ���������� �����Ҽ� �ִ�.
	std::sort(v.begin(), v.end(), [](const Point& p1, const Point& p2) { return p1.x < p2.x; });
	std::sort(v.begin(), v.end(), [](const Point& p1, const Point& p2) { return p1.y < p2.y; });


	Point p1(1, 2);
	Point p2(2, 1);
	bool b = (p1 < p2); // ���� p1.operator<(p2)
						// 
}
// ī�信 3���� �ǽ��ֽ��ϴ�.



