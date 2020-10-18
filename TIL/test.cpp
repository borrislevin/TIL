#include <iostream>
#include <string>
using namespace std;


class Shape {
public:
	virtual ~Shape() {}
	virtual void draw() = 0;
	virtual Shape* Clone() = 0;
};

class Rect : public Shape {
public:
	void draw() override { cout << "Rect draw" << endl; }
	Shape* Clone() override { return new Rect(*this); }
};

int main() {

	Shape* v1;
	Rect* v2=new Rect;
	Shape* v3 = new Rect(*v2);
	Shape* v4 = new Rect(*v2);
	cout << v3 << endl;
	cout << v4 << endl;
}