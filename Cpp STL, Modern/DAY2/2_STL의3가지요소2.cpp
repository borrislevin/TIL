#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };	// ���ӵ� �޸� ������ ���
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };	// �� ��Ұ� �и��� �޸� ������ ���

	// v �� s �� ��� ��Ҹ� ������ ������� �����ϰ� �ʹ�.?

	// �ݺ���(iterator)
	// �����̳��� ���α����� �������
	// "������ ���"���� �����ϴ� ����

	auto p1 = v.begin();
	auto p2 = s.begin();

	// p1�� p2�� ������ �����մϴ�.(������ó�� ����մϴ�.)
	std::cout << *p1 << std::endl;
	std::cout << *p2 << std::endl;

	++p1;
	++p2;
	
}