#include <iostream>
#include <vector>

class Point
{
	int x, y;
public:
	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point()            { std::cout << "~Point()" << std::endl; }
	Point(const Point&) { std::cout << "Point(const Point&)" << std::endl; }
};
//---------------------------------------
template<typename T> class vector
{
	T* buff;
public:
	void push_back(const T& obj)
	{
		// 사용자가 보내준 객체와 동일한 객체를 힙에 추가합니다.
		// 아래 코드는 편의상 그냥 한개만 생성
		buff = new T(obj);
	}

	// vector에 추가하기 위해..
	// 객체를 받지 말고.. 생성자에 전달할 인자를 받자
	// 아래 "emplace" 는 전달 받은 인자를 "다른곳(T의 생성자)" 로 전달한다.
	// "완벽한 전달" 기술이 필요 하다.
	// 복사본도없어야 하고, 인자 갯수 제한도 없어야 하다.
	/*
	void emplace_back(int x, int y)
	{
		buff = new T(x, y);
	}
	*/
	// 아래 코드는 실제 STL vector의 emplace 모양입니다.
	template<typename ... U> void emplace_back(U&& ... args)
	{
		buff = new T(std::forward<U>(args)...);
	}	   	 

	~vector() { delete buff; }
};
int main()
{
	std::vector<Point> v;
//	vector<Point> v;
	
	// vector에 요소 넣기. 
	// 1. 
//	Point pt(1, 2);
//	v.push_back(pt);

	//---------------
	// vector에 넣기 위해 "Point"를 만들어서 전달하지 말고,
	// Point를 만들기 위한 "생성자 인자" 를 보내자.!
	int a = 1, b = 2;
	v.emplace_back(a, b);

	// 결론 vector에 사용자 정의 타입을 넣을때
	// 1. push_back 대신 emplace 사용하세요

	// 2. "완벽한 전달" 기술이 없으면 emplace 는 만들수 없습니다
	
	//     emplace 는 "C++11" 부터 나온 멤버 함수 입니다


	std::cout << "-----" << std::endl;
}




