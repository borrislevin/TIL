// 6_map1
#include "show.h"
#include <map>  

// map : Tree. pair �� �����ϴ� set,   key ������ value �� ����
int main()
{
//	std::set<std::string> s; // string �Ѱ��� ����

	std::map<std::string, std::string> m;
					// pair<string, string> �� ����

	// ��� �ֱ�
	// 1. pair ���� �ֱ�
	std::pair<std::string, std::string> p("mon", "������");
	m.insert(p);

	// 2. make_pair
	m.insert( make_pair("tue", "ȭ����") );

	// 3. emplace
	m.emplace("wed", "������");


	// 4. [] ������ ��� - ���� �θ� ���
	//    �迭 ó�� ����ϴµ�, ������ �ƴ� index �� ���.
	m["thu"] = "�����";

	// 3, 4���� ���� �θ� ���˴ϴ�.

	std::cout << m["mon"] << std::endl;
	
	// ���̸�["Ű��"] �� ������ second ��, data�� ���ɴϴ�



	//------------------------
	
	// �ݺ��ڿ� ���ؼ�
	auto p = m.find("wed"); // find(Ű��)

	// p�� ����ؼ� "wed : ������" �̶�� ����غ�����

	// [] ������
	std::cout << m["sun"] << std::endl; 
}




