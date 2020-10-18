
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

	v.emplace_back(1, 2); // Point p(1,2);  v.push_back(p) 처럼 넣는 의미..
							// 하지만 push_back 보다는 emplace_back 이 빠릅니다.
	v.emplace_back(2, 3);
	v.emplace_back(3, 2);
	v.emplace_back(0, 1);

	// v의 모든 요소를 정렬(sort, 크기순서로 나열)하고 싶다.
	// 방법 1. 사용자 정의 타입안에 크기를 비교할수 있게 "<" 연산자를 제공한다.
	//         STL은 크기 비교시 항상 "< (less)" 를 사용합니다. 
	//         참고, ">" 는 greater 라고 합니다.
	std::sort(v.begin(), v.end());

	// 방법 2. 2개의 객체를 비교하는 함수 전달
	//		장점 : 필요할때 마다 어떤 규칙으로 정렬할지를 변경할수 있다.
	std::sort(v.begin(), v.end(), [](const Point& p1, const Point& p2) { return p1.x < p2.x; });
	std::sort(v.begin(), v.end(), [](const Point& p1, const Point& p2) { return p1.y < p2.y; });


	Point p1(1, 2);
	Point p2(2, 1);
	bool b = (p1 < p2); // 원리 p1.operator<(p2)
						// 
}
// 카페에 3일차 실습있습니다.



