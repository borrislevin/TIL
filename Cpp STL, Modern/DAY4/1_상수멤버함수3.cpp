// 1_상수멤버함수3

// www.github.com/webkit   - 사파리, 크롬 등의 웹브라우져 엔진 소스
// webkit/source/wtf/wtf/seconds.h 열어 보세요

// C++ 학습하면서 가끔씩 "오픈소스" 코드를 열어서 "코딩 방식"등을 참고 하세요.

#include <iostream>

class Point
{
	int x = 0;
	int y = 0;
public:
	// const 는 반드시 선언과 구현에 모두 붙여야 합니다.
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