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
	vector<Shape*> v; // �ڽ��� ��� ���� �θ� vector�� ���� upcasting�� �Ѵ�

	cout << "[���� ������]" << endl<< "(���簢�� : 1, �� : 2, ���� : 8, ��� : 9, �ʱ�ȭ : 0)" << endl;

	while (1) {
		cout << "���ڸ� �Է��ϼ���: ";
		int cmd;
		cin >> cmd;
		if (!(cmd == 1 || cmd == 2 || cmd==8|| cmd == 9 || cmd == 0)){		
			cout << "�߸��� ���� �Է�! �ٽ� �Է��ϼ���" << endl;
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
				cout << ">>����� �� ����<<" << endl;
			}
			cout << "�� ��° ������ �����ұ��: ";
			int k;
			cin >> k;
			v.push_back(v[k-1]->Clone());
			break;
		case 9:
			if (v.empty() == 1) {
				cout << ">>����� �� ����<<" << endl;
			}
			for (unsigned int i = 0; i < v.size(); i++) { //v.size()�� vector �����̳� ���� ������ �ݳ��Ѵ�!!
				v[i]->draw();
			}		
			break;
		case 0:
			v.clear();
			break;
		}
	}
}