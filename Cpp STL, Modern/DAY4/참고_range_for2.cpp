// ����_range_for2
#include <iostream>

struct Point3D
{
	int x = 1;
	int y = 2;
	int z = 3;
};
// ����� ���� Ÿ���� range_for �� ��������
// begin()/end()�� �����ϸ� �˴ϴ�.
int* begin(Point3D& p) { return &(p.x); }
int* end(Point3D& p)   { return &(p.z) + 1; } // ������ ����� ������ �ּ�

// ���� : �Ʒ� �ڵ忡�� "���հ�ü" �ڸ�����
// 1. STL �� ��� �����̳�
// 2. ũ�Ⱑ ������ �迭 ( ���� !, ���� �Ҵ�� �迭�� �ȵ�. ex) int* p = new int[10] )
// 3. ����� ���� Ÿ���� �������� begin()/end() �Լ��� ���� �ϸ� �ȴ�.
for (auto n : "���հ�ü")
{
}



int main()
{
	Point3D pd;

	// �Ʒ� �ڵ尡 �ɱ�� ? �� �ȵɱ�� ? �ǰ� �Ϸ��� ?
	// �������� ���� �޼��� Ȯ���� ������
	for (auto n : pd)
	{
		std::cout << n << std::endl;
	}

	//-----------------------
	/*
	for (auto p = std::begin(pd); p != std::end(pd); ++p)
	{
		auto n = *p;
		//-------------------------------
		std::cout << n << std::endl;
	}
	*/
}



