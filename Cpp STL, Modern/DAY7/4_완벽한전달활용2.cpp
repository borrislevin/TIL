#include <thread>
#include <memory>
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point()			{ std::cout << "~Point()" << std::endl; }
	Point(const Point&) { std::cout << "Point(const Point&)" << std::endl; }
};

int main()
{
	// make_shared

	int a = 1, b = 2;

	// �Ʒ� �ڵ�� ����ڰ� ���� Point�� �����մϴ�.
	std::shared_ptr<Point> sp1( new Point(a, b) );  // Point �����ڸ� ���� ȣ��

	// �Ʒ� �ڵ忡�� Point �� ����� �ڵ尡 ������ �ʽ��ϴ�.
	// make_shared �Լ� ���ο��� "new Point(a,b)" �ϰ� �ֽ��ϴ�.

	std::shared_ptr<Point> sp2 = std::make_shared<Point>(a, b); 
						// make_shared()�� �ڽ��� �޴� a,b �� �ٽ�
						// Point �����ڿ� �����ϰ� �ֽ��ϴ�. => �Ϻ��� ���� �ʿ�
}







