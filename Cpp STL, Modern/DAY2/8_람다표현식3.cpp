#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 6, 9, 3, 1, 2 };

	// v �� �������� 3�� ����� �ƴ� 1��° ��Ҹ� ã�� ������..
	// "���� ǥ������ ����ϼ���"
	auto ret1 = std::find_if(v.begin(), v.end(), ?);


}

