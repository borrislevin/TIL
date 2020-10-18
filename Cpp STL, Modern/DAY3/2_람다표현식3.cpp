#include <iostream>
#include <vector>
#include <algorithm>

bool isDivide3(int n) { return n % 3 == 0; }

int main()
{
	std::vector<int> v = { 6, 9, 3, 1, 2 };

	// STL �˰��� ���
	// 1. �� �˻�   
	auto ret1 = std::find(v.begin(), v.end(), 3);

	// 2. ���� �˻� : ó�� ������ 3�� ����� ã�ƶ�
	//				  xxx_if() �˰���
	auto ret2 = std::find_if(v.begin(), v.end(), isDivide3);

	// ���� ������ �ǹ��� �ڵ带 "���� ǥ����" ���� ����� ������
	auto ret3 = std::find_if(v.begin(), v.end(), [](int a) { return a % 3 == 0; });

	std::cout << *ret3 << std::endl; // 6


}

