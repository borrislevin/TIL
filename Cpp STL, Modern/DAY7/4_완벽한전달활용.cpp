#include <iostream>
#include <vector>

class Point
{
	int x, y;
public:
	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point()            { std::cout << "~Point()" << std::endl; }
	Point(const Point&) { std::cout << "Point(const Point&)" << std::endl; }
};
//---------------------------------------
template<typename T> class vector
{
	T* buff;
public:
	void push_back(const T& obj)
	{
		// ����ڰ� ������ ��ü�� ������ ��ü�� ���� �߰��մϴ�.
		// �Ʒ� �ڵ�� ���ǻ� �׳� �Ѱ��� ����
		buff = new T(obj);
	}

	// vector�� �߰��ϱ� ����..
	// ��ü�� ���� ����.. �����ڿ� ������ ���ڸ� ����
	// �Ʒ� "emplace" �� ���� ���� ���ڸ� "�ٸ���(T�� ������)" �� �����Ѵ�.
	// "�Ϻ��� ����" ����� �ʿ� �ϴ�.
	// ���纻������� �ϰ�, ���� ���� ���ѵ� ����� �ϴ�.
	/*
	void emplace_back(int x, int y)
	{
		buff = new T(x, y);
	}
	*/
	// �Ʒ� �ڵ�� ���� STL vector�� emplace ����Դϴ�.
	template<typename ... U> void emplace_back(U&& ... args)
	{
		buff = new T(std::forward<U>(args)...);
	}	   	 

	~vector() { delete buff; }
};
int main()
{
	std::vector<Point> v;
//	vector<Point> v;
	
	// vector�� ��� �ֱ�. 
	// 1. 
//	Point pt(1, 2);
//	v.push_back(pt);

	//---------------
	// vector�� �ֱ� ���� "Point"�� ���� �������� ����,
	// Point�� ����� ���� "������ ����" �� ������.!
	int a = 1, b = 2;
	v.emplace_back(a, b);

	// ��� vector�� ����� ���� Ÿ���� ������
	// 1. push_back ��� emplace ����ϼ���

	// 2. "�Ϻ��� ����" ����� ������ emplace �� ����� �����ϴ�
	
	//     emplace �� "C++11" ���� ���� ��� �Լ� �Դϴ�


	std::cout << "-----" << std::endl;
}




