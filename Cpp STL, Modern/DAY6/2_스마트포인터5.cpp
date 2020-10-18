#include <iostream>
#include <memory>

// �Ʒ� ó�� �Լ��� ����� ����ڰ� "new" ���� �Ʒ� �Լ��� ȣ��˴ϴ�.
void* operator new(size_t sz)
{
	std::cout << "new : " << sz << std::endl;
	return malloc(sz);
}

struct Point
{
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

int main()
{
	// �Ʒ� �ڵ�� ���� �޸� �Ҵ��� ����ϰ� �ɱ�� ?
	// 2��, new Point(1,2) �� new ��������� �޸�
	//std::shared_ptr<Point> sp(new Point(1, 2));

	// ��ü + ������ü�� ũ�⸦ �ѹ���(���ӵ� �޸�)��
	// �Ҵ��ϸ� ������ �������ϴ�.
	std::shared_ptr<Point> sp1 = std::make_shared<Point>(1, 2);
	


	// �� �ڵ�� �Ʒ� �ڵ�� ���� �ǹ�����, 
	// �޸� ������ �ణ �ٸ��ϴ�.
	std::shared_ptr<Point> sp2(new Point(1, 2));

	// ���� : shared_ptr�� ����ϱ�� �ߴٸ�
	//        �ǵ����̸� make_shared �� ���� �������..!
}






