#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b)	{ std::cout << "Point()" << std::endl;	}
	~Point()            { std::cout << "~Point()" << std::endl;	}
};
// 1. 임시객체의 개념, 만드는 법(클래스이름())
// 2. 임시객체의 수명.
int main()
{
//	Point pt(1, 2);	// 이름이 있는 객체, 수명:"블럭"을 벗어 날때

//	Point(1, 2);	// 이름없는 객체(unnamed object), 임시객체(temporary)
					// 수명 : 문장의 끝

	Point(1, 2), std::cout << "X" << std::endl;

	std::cout << "-------" << std::endl;
}





