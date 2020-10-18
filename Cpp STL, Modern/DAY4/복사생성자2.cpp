#include <iostream>

struct Point
{
	int x, y;

	// 인자 없는 생성자를 만들때
	// 1. 해야할 일이 있다 : 생성자를 만들어서 작업을 수행하세요..
	// 2. 해야할 일은 없지만, "객체 생성이 되게 하기위해" 필요하다.
	//                        직접 구현하지 말고 "= default" 로 요청하세요.

	// 인자없는 생성자를 만드는 2가지 방법
	Point() {}			// 1. 사용자가 제공
//	Point() = default;	// 2. 컴파일러에게 요청, C++11에서 추가

	Point(int a, int b) : x(a), y(b) {}	// 2
};
int main()
{
	Point p1;
	Point p2(1, 2);

	// C++11에서 나온 새로운 초기화 기술
	Point p3{}; // 모든 멤버 데이타를 0으로 초기화 해달라.
				// 1. Point 에 사용자가 만든 생성자가 있으면 생성자만 호출.
				// 2. 사용자가 만든 "인자 없는 생성자가 없다면" 이때만 모든 멤버를 0으로 초기화.

	std::cout << p3.x << std::endl;
	std::cout << p3.y << std::endl;
}