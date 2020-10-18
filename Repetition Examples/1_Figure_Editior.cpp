#include <iostream>
#include <vector>
using namespace std;

class Shape {
public:
	virtual ~Shape() {}
	virtual void draw() = 0;
};

class Rect : public Shape{
public:
	void draw() override { cout << "Rect draw" << endl; }

};

class Circle : public Shape{
public:
	void draw() override { cout << "Circle draw" << endl; }
};


int main() {
	vector<Shape*> v;

	cout << "[���� ������]" << endl;
	cout << "���ڸ� �Է��ϼ��� (���簢�� : 1, �� : 2, ��� : 9)" << endl;

	while (1)	{

		int cmd;
		cin >> cmd;
		switch (cmd) 
		{
		case 1:
			v.push_back(new Rect);
			break;
		case 2:
			v.push_back(new Circle);
			break;
		case 9:
			for (unsigned int i = 0; i < v.size(); i++) { //v.size()�� vector �����̳� ���� ������ �ݳ��Ѵ�!!
				v[i]->draw();
			}
		}
	}
}