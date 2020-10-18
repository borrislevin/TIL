#include <iostream>
#include "show.h"
#include <set> 

int main()
{
	std::set<int> s;	// �ߺ��� ������ �ʽ��ϴ�.

	s.insert(20);	
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);
	
	// insert�� ���� ���� ��ƽ��ϴ�.
	//std::pair<std::set<int>::iterator, bool> ret = s.insert(30);	// ����

	auto ret = s.insert(30);

	// ret.first  : ���н� ���� ��Ҹ� ����Ű�� �ݺ���
	// ret.second : ��������(true, fale)
	
	if (ret.second == false)
	{
		std::cout << "insert ����" << std::endl;
		std::cout << "������� : " << *(ret.first) << std::endl;
	}



	auto p = s.begin(); 

	while (p != s.end())
	{
		std::cout << *p << std::endl;
		++p;
	}

}







