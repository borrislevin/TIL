#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// C ������ ����� ���� �Լ� 
void foo(int* arr, int sz) 
{
	// �߿��� �۾� ����.
}
int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	foo(x, 10); // foo �� �迭�� ������ �̷��� �մϴ�.


	// �迭 ���ٴ� vector �� ���ϴ�.(ũ�⺯�氡��, ��� �߰� ����)
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// vector�� v�� ������ ������� foo �� ������ �ʹ�.
//	foo(v, v.size());  // error
//	foo(&v, v.size()); // error.

	foo(&v[0], v.size());    // �������� ����ߴ� ���
	foo(v.data(), v.size()); // C++11 ����

	std::vector<int> v1 = { 1,2,3 };
	std::vector<int> v2 = { 10,20 };

	v1.swap(v2); // v1�� ����Ÿ�� v2�� ����Ÿ ��ȯ
}


