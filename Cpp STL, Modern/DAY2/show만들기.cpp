#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// �����̳��� ��� ��Ҹ� �����ϴ� ��� ����.

	// ��� 1. range-for �� ���� ��  => ��� �����̳ʿ� ���밡��
	//  "��� ��Ҹ� ����"
	for (auto e : v)
		std::cout << e << ", ";

	std::cout << std::endl; // ����

	// ��� 2. �ݺ��� ��� => ��� �����̳ʿ� ���밡��
	// "��� ��ҿ� �Ϻ� ������ ����"
	auto p = v.begin();
//	p = p+2;

	while ( p != v.end() )
	{
		std::cout << *p << ", ";
		++p;
	}
	std::cout << std::endl;

	// ��� 3. [] �����ڷ� ��� ���� => vector, deque, array ����. list �ȵ�
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << ", ";
	}
	std::cout << std::endl;
}

