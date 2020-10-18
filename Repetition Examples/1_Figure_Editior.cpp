#include <iostream>
#include <vector>
using namespace std;

class Shape {
public:
	virtual ~Shape() {}
	virtual void draw() = 0;
	virtual Shape* Clone() = 0;
};

class Rect : public Shape{
public:
	void draw() override { cout << "Rect draw" << endl; }
	Shape* Clone() override { return new Rect(*this); }
};

class Circle : public Shape{
public:
	void draw() override { cout << "Circle draw" << endl; }
	Shape* Clone() override { return new Circle(*this); }
};


int main() {
	vector<Shape*> v; // 자식을 담기 위해 부모 vector로 만들어서 upcasting을 한다

	cout << "[도형 편집기]" << endl<< "(직사각형 : 1, 원 : 2, 복사 : 8, 출력 : 9, 초기화 : 0)" << endl;

	while (1) {
		cout << "숫자를 입력하세요: ";
		int cmd;
		cin >> cmd;
		if (!(cmd == 1 || cmd == 2 || cmd==8|| cmd == 9 || cmd == 0)){		
			cout << "잘못된 숫자 입력! 다시 입력하세요" << endl;
			continue;
			}
		switch (cmd) 
		{
		case 1:
			v.push_back(new Rect);			
			break;
		case 2:
			v.push_back(new Circle);
			break;
		case 8:
			if (v.empty() == 1) {
				cout << ">>저장된 것 없음<<" << endl;
			}
			cout << "몇 번째 도형을 복사할까요: ";
			int k;
			cin >> k;
			v.push_back(v[k-1]->Clone());
			break;
		case 9:
			if (v.empty() == 1) {
				cout << ">>저장된 것 없음<<" << endl;
			}
			for (unsigned int i = 0; i < v.size(); i++) { //v.size()는 vector 컨테이너 안의 갯수를 반납한다!!
				v[i]->draw();
			}		
			break;
		case 0:
			v.clear();
			break;
		}
	}
}