// cafe.naver.com/cppmaster ���� 

// 4���� �����ҽ� �����ø� �˴ϴ�.
// Debug, x86 ���� ���� �ּ���
// ���忡 ������ �ִ� ����

// ������Ʈ/�Ӽ� �޴� ������ 

// "Windows SDK" ������ "�÷��� ���� ����" ���߾� �ּ���

// modern C++ �ٽ� : "move", "�Ϻ�������", "����ǥ����"


#include <iostream>

class Point
{
public:
	int x, y;
	Point(int a, int b)  : x(a), y(b) {}

	void set(int a, int b) { x = a; y = b; }

	void print() // const	// ��� ��� �Լ�(const member function ) - C++98 ������ �⺻����
	{					// ���Լ� �ȿ����� ��� ����� "��� ���" �Ѵٴ� �ǹ�.
//		x = 10;			// error. x�� ��� ��� �ϹǷ�.

		std::cout << x << ", " << y << std::endl;
	}
};
int main()
{
	const Point p(1, 2); // ��� ��ü 

	p.x = 10;		// error. public�� ������ �����ü�̹Ƿ�	
	p.set(10, 20);	// error.
	p.print();		// error. - �����Ϸ��� �� �Լ� �ȿ��� ��� ���� �����ϴ��� �ƴ��� �˼� ����
					// ȣ��ǰ� �Ϸ��� "print" ��� �Լ��� �ݵ�� "��� ��� �Լ�"�� �Ǿ�� �Ѵ�

	// �ٽ� : �����ü�� "��� ��� �Լ�"�� ȣ�Ⱑ���ϴ�.
	//		  ��� �Լ� ���鶧, ��� ��ü�� ��� �ؾ� �Ѵ�.
}