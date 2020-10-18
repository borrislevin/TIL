#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <fstream>
#include "show.h"

// ���� - 

int main()
{
	std::vector<std::string> v;
	std::ifstream fin("5_���������̳�6.cpp");
	std::string s;

	while ( std::getline(fin, s) )
		v.push_back(s);
	//----------------------------

//	std::reverse(v.begin(), v.end()); // ���� "���Ϸ�"������

//	std::reverse(v[0].begin(), v[0].end()); // 1��° ���� �¿�ε�����
	for (auto e : v)	// �� ��Ҹ� ������ �����ϰ� �����Ƿ�, ���� �����ȵ�
//	for (auto& e : v)
	{
//		std::reverse(e.begin(), e.end());
//		std::replace(e.begin(), e.end(), 'i', ' ');

		// ��� ����(0~9)�� �������� ������ ������
		// 1. "replace"�� ���� "replace_if" �� �������̶�� ���� �����ؾ� �մϴ�.
		// 2. 3��° ���ڷ� �Ѿ�� �Լ��� ����� �����ؾ� �մϴ�.
		// 3. ����ǥ�������� ���ϴ� �ڵ� �ۼ�
		//std::replace_if(e.begin(), e.end(), �Լ�, ' '); // �Լ� ��� : bool �Լ�(char c)

		std::replace_if(e.begin(), e.end(),
						[](char c) { return  c >= '0' && c <= '9'; },
						' ');
	}


	//------------------------
	for (auto e : v)
		std::cout << e << std::endl;

}






