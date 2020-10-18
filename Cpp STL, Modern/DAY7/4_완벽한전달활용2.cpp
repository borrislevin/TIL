#include <thread>
#include <memory>
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point()			{ std::cout << "~Point()" << std::endl; }
	Point(const Point&) { std::cout << "Point(const Point&)" << std::endl; }
};

int main()
{
	// make_shared

	int a = 1, b = 2;

	// 아래 코드는 사용자가 직접 Point를 생성합니다.
	std::shared_ptr<Point> sp1( new Point(a, b) );  // Point 생성자를 직접 호출

	// 아래 코드에는 Point 를 만드는 코드가 보이지 않습니다.
	// make_shared 함수 내부에서 "new Point(a,b)" 하고 있습니다.

	std::shared_ptr<Point> sp2 = std::make_shared<Point>(a, b); 
						// make_shared()는 자신이 받는 a,b 를 다시
						// Point 생성자에 전달하고 있습니다. => 완벽한 전달 필요
}







