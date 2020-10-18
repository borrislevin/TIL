#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

// 함수 인자 전달 방식
void f1(Point  pt) {} // call by value     : "복사본 생성"
void f2(Point& pt) {} // call by reference : 복사본이 생성되지 않는다.


// 함수 리턴 방식
Point pt(1, 2);

Point foo()		// return by value
{
	return pt;  // pt와 동일한 모양의 복사본(임시객체) 생성후 리턴
}
Point& goo()	// return by reference	: 리턴용 임시객체(복사본)을 만들지 말라는의도
{
	return pt;  
}

Point& hoo()
{
	Point p(1, 2); // 지역변수
	return p;		// bug... 절대 지역변수는
					// 참조 반환하면 안됩니다. 
					// 반드시 "값 반환"만 해야 합니다.
					// "컴파일 에러는 아닌데. 이렇게 하면 안됩니다."
}



int main()
{
	goo().x = 10; // ok.. pt.x = 10 의 의미.
	foo().x = 10; // error. 임시객체는 왼쪽에
					// 올수 없다.!!


	Point p(0, 0);
	f1(p);
	f2(p);
}







