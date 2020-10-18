// ����_range_for1.cpp
#include <vector>
#include <list>
#include <iostream>

int main()
{
//	std::vector<int> v = { 1,2,3,4,5 };
//	std::list<int>   v = { 1,2,3,4,5 };
	int  v[5] = { 1,2,3,4,5 };

	// �ݺ��� ������
//	auto p1 = v.begin();	// C++98 ��Ÿ��. ��, auto �� C++11
//	auto p2 = v.end();		// ��, v�� �迭�� ��� ����

	auto p1 = std::begin(v); // C++11 ���� ����.  �迭�� ����
	auto p2 = std::end(v);   // int* p2  �� �˴ϴ�.

	//--------------------
	// C++11 �� range - for ����
	for (auto n : v)
	{
		std::cout << n << std::endl;
	}

	// �� �ڵ带 "�����Ϸ��� �Ʒ� ó�� ����" �մϴ�.
	for (auto p = std::begin(v) ;  p != std::end(v);  ++p)
	{
		auto n = *p;
		//-------------------------------
		std::cout << n << std::endl;
	}
} 








