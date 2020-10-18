#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

// 임시객체와 함수 인자 - 81 page

//void foo(Point& pt) {}       // 임시객체를 받을수 없습니다.
void foo(const Point& pt) {}   // 임시객체를 받을수 있다.

int main()
{
//	Point pt(1, 2);
//	foo(pt);
	// pt가 더이상 필요 없어도, 블럭 벗어날때 까지 메모리에 남아 있게 된다.

	// 핵심 ) 인자로만 사용할 객체가 필요 하면, 임시객체로 전달하자.
	foo( Point(1, 2) );

//	std::plus<int> p;
//	int n = std::accumulate(x, x + 10, 0, p);
//	int n = std::accumulate(x, x + 10, 0, std::plus<int>() );

	std::cout << "-----" << std::endl;
}





