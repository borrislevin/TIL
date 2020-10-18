#include <iostream>
#include <vector>
#include <list>

// "show.h" ���� �߰� �ؼ�.. �Ʒ� �Լ� ������ ��������
template<typename T>
void show(const T& v)
{
	for (auto e : v)
		std::cout << e << ", ";

	std::cout << std::endl; // ����
}

int main()
{
//	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<int>   v = { 1,2,3,4,5,6,7,8,9,10 };

	show(v); // �� �Լ��� ����� ���ô�.
}

