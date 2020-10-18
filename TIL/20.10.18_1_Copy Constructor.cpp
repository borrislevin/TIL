/* 
복사 생성자 (Copy Constructor)
	정의: 자신과 동일한 타입의 객체 하나를 인자로 받는 생성자
	Point(const Point& p) <- 컴파일러 기본 생성자 형태
*/

#include <iostream>
using namespace std;

class Point {
public:
	int x, y;
	Point() : x(0), y(0) { cout << "Point()" << endl; }
	~Point() { cout << "~Point()" << endl; }
	Point(int a, int b) : x(a), y(b) {cout << "Point(const Point& p)"<< endl; }
};

int main() {
	Point p1;		// 디폴트 생성자
	Point p2(p1);	// 복사 생성자
	Point p3 = p1;
	Point p4{ p1 };
	Point p5 = { p1 };
}