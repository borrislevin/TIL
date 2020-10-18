#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

// �Լ� ���� ���� ���
void f1(Point  pt) {} // call by value     : "���纻 ����"
void f2(Point& pt) {} // call by reference : ���纻�� �������� �ʴ´�.


// �Լ� ���� ���
Point pt(1, 2);

Point foo()		// return by value
{
	return pt;  // pt�� ������ ����� ���纻(�ӽð�ü) ������ ����
}
Point& goo()	// return by reference	: ���Ͽ� �ӽð�ü(���纻)�� ������ ������ǵ�
{
	return pt;  
}

Point& hoo()
{
	Point p(1, 2); // ��������
	return p;		// bug... ���� ����������
					// ���� ��ȯ�ϸ� �ȵ˴ϴ�. 
					// �ݵ�� "�� ��ȯ"�� �ؾ� �մϴ�.
					// "������ ������ �ƴѵ�. �̷��� �ϸ� �ȵ˴ϴ�."
}



int main()
{
	goo().x = 10; // ok.. pt.x = 10 �� �ǹ�.
	foo().x = 10; // error. �ӽð�ü�� ���ʿ�
					// �ü� ����.!!


	Point p(0, 0);
	f1(p);
	f2(p);
}







