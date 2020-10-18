/* 
���� ������ (Copy Constructor)
	����: �ڽŰ� ������ Ÿ���� ��ü �ϳ��� ���ڷ� �޴� ������
	Point(const Point& p) <- �����Ϸ� �⺻ ������ ����
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
	Point p1;		// ����Ʈ ������
	Point p2(p1);	// ���� ������
	Point p3 = p1;
	Point p4{ p1 };
	Point p5 = { p1 };
}