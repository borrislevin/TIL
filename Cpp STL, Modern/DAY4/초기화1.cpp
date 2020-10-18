// �ʱ�ȭ1
class Vector
{
public:
	// explicit ������ : ���� �ʱ�ȭ�� �����ϰ�, ���� �ʱ�ȭ�� ����Ҽ� ����.
	explicit Vector(int n) {}
};

// �ٽ� : �Լ��� ���� ������ �ᱹ "���� �ʱ�ȭ" ������� ���� �ް� �˴ϴ�.
void foo(Vector v) {} // Vector v = �Լ�����, ��, "Vector v = 10"

int main()
{
	// C++98 ���� ���� ����ϴ� �ʱ�ȭ ���
	Vector v1(10);		// �����ʱ�ȭ(direct initialization) : = �� ���� �ʱ�ȭ
//	Vector v2 = 10;		// �����ʱ�ȭ(copy initialization)   : = �� ����� �ʱ�ȭ
//	Vector v3 = (10);

	// C++11 ���� {} �ʱ�ȭ ����.
	Vector v4{ 10 };	// ���� �ʱ�ȭ
//	Vector v5 = { 10 };	// ���� �ʱ�ȭ

	foo(v1); // �翬�� �ڵ�
	foo(10); // 
}