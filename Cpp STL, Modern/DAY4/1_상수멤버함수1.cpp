// cafe.naver.com/cppmaster 에서 

// 4일차 사전소스 받으시면 됩니다.
// Debug, x86 으로 맞춰 주세요
// 빌드에 문제가 있는 분은

// 프로젝트/속성 메뉴 선택후 

// "Windows SDK" 버전과 "플랫폼 도구 집합" 맞추어 주세요

// modern C++ 핵심 : "move", "완벽한전달", "람다표현식"


#include <iostream>

class Point
{
public:
	int x, y;
	Point(int a, int b)  : x(a), y(b) {}

	void set(int a, int b) { x = a; y = b; }

	void print() // const	// 상수 멤버 함수(const member function ) - C++98 시절의 기본문법
	{					// 이함수 안에서는 모든 멤버를 "상수 취급" 한다는 의미.
//		x = 10;			// error. x를 상수 취급 하므로.

		std::cout << x << ", " << y << std::endl;
	}
};
int main()
{
	const Point p(1, 2); // 상수 객체 

	p.x = 10;		// error. public에 있지만 상수객체이므로	
	p.set(10, 20);	// error.
	p.print();		// error. - 컴파일러는 이 함수 안에서 멤버 값을 변경하는지 아닌지 알수 없다
					// 호출되게 하려면 "print" 멤버 함수는 반드시 "상수 멤버 함수"가 되어야 한다

	// 핵심 : 상수객체는 "상수 멤버 함수"만 호출가능하다.
	//		  멤버 함수 만들때, 상수 객체를 고려 해야 한다.
}