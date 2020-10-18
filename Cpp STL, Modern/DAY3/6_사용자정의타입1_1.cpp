// 6_사용자정의타입1_1.cpp 추가해 주세요.
#include <vector>
#include <algorithm>
#include "show.h"

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}

	// == 를 재정의 한 경우 관례적으로 != 도 재정의 하는 것이 좋습니다.
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

	// 1, 2 인 점을 찾고 싶다.
//	Point temp(1, 2);
//	auto p = std::find(v.begin(), v.end(), temp); // 될까요 ? error
												// 동일성을 체크하기 위해 "==" 연산자를 사용합니다.
//	if (p1 == temp) {} // error

	// STL 컨테이너에 사용자 정의 타입을 넣을수 있지만. 
	// 검색, 정렬등의 다양한 알고리즘을 적용하려면 해당 알고리즘이 요구하는 조건을 있습니다.

	// 검색(find) 하려면, 상등성(==)을 조사할수 있어야 합니다.
	// 방법 1. 타입안에 == 연산자를 재정의 한다.

	Point temp(1, 2);
	auto p = std::find(v.begin(), v.end(), temp); // ==

	// 방법 2. find를 사용하지 말고 find_if 를 사용하면된다.
	auto p2 = std::find_if(v.begin(), v.end(), 
						[](const Point& pt) { return pt.x == 1 && pt.y = 2; });
}




