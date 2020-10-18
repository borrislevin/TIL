#include <vector>
#include <list>
#include "show.h"

class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b)  {	std::cout << "Point()" << std::endl;	}
	~Point() { std::cout << "~Point()" << std::endl; }
	
	Point(const Point& p) 	{	std::cout << "Point(const Point&)" << std::endl;	}
};
int main()
{
	std::list<Point> v;

	// v �� 1,2�� �ʱ�ȭ�� Point�� �ְ� �ʹ�. 
	// �Ʒ� �ڵ带 �����ϸ� Point �Ҹ��ڰ� ��� ȣ��ɱ�� ?
	
//	Point pt(1, 2);
//	v.push_back(pt); // pt ��ü�� �����Ǵ� ���� �ƴ϶�
					// ���ο� NODE�� �����
					// pt�� ����

	// v�� �ֱ� ���ؼ��� pt�� �ʿ� �ߴٸ� 
	// push_back() �������� emplace_back()�ض�!!
	// "��ü"�� ������ ���� 
	// "��ü�� ����� ���� ����������"�� ������!
	v.emplace_back(1, 2); // new Point(1,2)

	// ���. �����̳ʿ�
	
	// 1. int, double���� primitive type�� ��������
	//		=> push_back()/push_front()/insert() �ϼ���

	// 2. ����� ���� Ÿ���� �������� �ǵ����̸�
	//		=> emplace_back()/emplace_front()/emplace()
	//			C++11����
}

// C++ �߱޼����� "Bible" 
// => "Effective C++ �ø���" 3��
// => effective C++, more effective-C++,
//    Effective Modern C++ => push_xx() ���� emplace_xx()

