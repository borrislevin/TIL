#include <vector>
#include <list>
#include "show.h"

class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b)  {	std::cout << "Point()" << std::endl;	}
	~Point() { std::cout << "~Point()" << std::endl; }
	
	Point(const Point& p) 	{	std::cout << "Point(const Point&)" << std::endl;	}
};
int main()
{
	std::list<Point> v;

	// v 에 1,2로 초기화된 Point를 넣고 싶다. 
	// 아래 코드를 실행하면 Point 소멸자가 몇번 호출될까요 ?
	
//	Point pt(1, 2);
//	v.push_back(pt); // pt 자체가 보관되는 것이 아니라
					// 새로운 NODE를 만들고
					// pt를 복사

	// v에 넣기 위해서만 pt가 필요 했다면 
	// push_back() 하지말고 emplace_back()해라!!
	// "객체"를 보내지 말고 
	// "객체를 만들기 위한 생성자인자"를 보내라!
	v.emplace_back(1, 2); // new Point(1,2)

	// 결론. 컨테이너에
	
	// 1. int, double등의 primitive type을 넣을때는
	//		=> push_back()/push_front()/insert() 하세요

	// 2. 사용자 정의 타입을 넣을때는 되도록이면
	//		=> emplace_back()/emplace_front()/emplace()
	//			C++11부터
}

// C++ 중급서적의 "Bible" 
// => "Effective C++ 시리즈" 3권
// => effective C++, more effective-C++,
//    Effective Modern C++ => push_xx() 보다 emplace_xx()

