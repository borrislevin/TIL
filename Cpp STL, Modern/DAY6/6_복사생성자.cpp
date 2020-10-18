// 10_���������
class Point
{
	int x, y;
public:
	Point() {}				// 1
	Point(int a, int b) {}	// 2

	// ���� �����ڸ� ���� ����� ���ô�.
	// ��� 1. call by value
//	Point(Point pt) {}  // ���ڸ� �޴� ����� "Point pt = p2" �˴ϴ�. �ٽ� ���� ������ ȣ��
						// ���� �����ڰ� ������ ȣ��Ǵ� ǥ���
						// �׷��� , ������ ����!! ���� �� Ÿ���� �ɼ� ����.

	// ��� 2. call by reference
	// ������ ��������. �׷���...  "�ӽð�ü"�� ������ ����.
	//				���� �����ϴ� �Լ� ���ϰ��� ������ ���� �ȴ�.
	//				Point ret = foo(); // error
	// Point(Point& pt) {}

	// ��� 3. lvalue �� rvalue ��� �޴°��� ���� => "const lvalue reference"!!
	Point(const Point& pt)
		: x(pt.x), y(pt.y)
	{
	}
	// �̷� ���� ������ "���� �������� ���"�� ��ó�� ����� �˴ϴ�.
	//----------------------------------------------------------------
};

Point foo()
{
	Point pt(1, 2);
	return pt;	// �ӽð�ü ��ȯ
}
int main()
{
	Point p1;		// 1�� ������ ���	
	Point p2(1, 2); // 2�� ������ ���
	Point p3(p2);	// ���ڰ� �Ѱ��� ������ �ʿ�. 
					// Point(Point)����� �ʿ��ѵ�, ������ ������ �����Ϸ�����.

	Point ret = foo(); // Point ret( foo() );
					
}




