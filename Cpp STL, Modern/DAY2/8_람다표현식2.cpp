#include <iostream>
#include <vector>
#include <algorithm>

void foo(int n) { std::cout << n << std::endl; }

int main()
{
	std::vector<int> v = { 1,2,6,5,4,3,7,8 };

	std::for_each(v.begin(), v.end(), foo); // �Ϲ� �Լ�

	// �� ������ ����ǥ�������� �ٽ� ����� ������.
	std::for_each(v.begin(), v.end(), ? );
}

