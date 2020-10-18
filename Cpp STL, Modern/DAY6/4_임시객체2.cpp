
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

// 임시객체의 특징 - 79 page
int main()
{
	Point pt(1, 2);
	
	pt.x = 10;			// ok
//	Point(1, 2).x = 10;	// error. 임시객체는 등호의 
						// 왼쪽에 올수 없다.						
	Point* p1 = &pt;			// ok
//	Point* p2 = &Point(1, 2);	// error. 임시객체는 주소 연산자로 주소를 구할수 없다
							
	Point& r1 = pt;				// ok
//	Point& r2 = Point(1, 2);	// error. 임시객체는 참조로 가리킬수도 없다.


	// 핵심 : 임시객체는 "상수 참조"로 가리킬수는 있다.
	const Point& r3 = Point(1, 2);	// 이 순간 임시객체는 바로 파괴되지 않고
									// r3의 수명과 같아 진다.
}





