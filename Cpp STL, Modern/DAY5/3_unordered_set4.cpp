#include <iostream>
#include <unordered_set>
#include "show.h"

struct People
{
	std::string name;
	int  age;
	People(std::string n, int a) : name(n), age(a) {}
};

// ��������� Ÿ���� �ؽ��� ��������
// ��Ģ 1. ����� Ÿ�� ��ü �ϳ��� �޾Ƽ� �ؽ���(bucket)��ȣ�� ��ȯ�ϴ� �Լ���ü�� ������
struct PeopleHash
{
	inline int operator()(const People& p) const 
	{
		//return ��Ŷ ��ȣ;
//		return 0;		// ������ 0��° bucket ��� => ����, ���������δ� ���� ����.
						// ������, �־��� ����.

		// C++ ǥ�ؿ��� int, string �� �ؽ����� ���Ҽ� �����Ƿ� �Ʒ�ó�� �Ҽ��ִ�.
//		std::hash<int> hi;
//		int idx = hi(p.age);		
//		return idx;			// ������ �����ϴ� ���, ������ ���ڴ�.

		std::hash<int> hi;
		std::hash<std::string> hs;
		return hs(p.name) + hi(p.age);

		// �׷�, hash<int>, hash<string>�� ��� ��������� �ñ��Ͻø�.."�ڷᱸ���� �˰���"���� 
		// ������ ������
	}
};
// ��Ģ 2. ����� �� �Ҽ� �־�� �ϹǷ�
//  ��� 1. People �ȿ� == �����ڸ� �����Ѵ�.
//  ��� 2. People ��ü 2���� ���ڷ� �޾Ƽ� �� �ϴ� �Լ� ��ü ����

struct PeopleEqual
{
	inline bool operator()(const People& p1, const People& p2) const
	{
		return p1.name == p2.name && p1.age == p2.age;
	}
};

int main()
{
	// int, double, string ���� �����Ϸ��� �׳� �Ʒ� ó�� ����ϼ���!!!!
	std::unordered_set<int> s1;

	// ����� ���� Ÿ���� �����Ҷ��� �����մϴ�. �Ʒ�ó�� �ؾ� �մϴ�.
	std::unordered_set<People, PeopleHash , PeopleEqual > s;

	s.emplace("kim", 20);	// People("kim", 20)  ����� ����� �ؽ��� �ֱ� ����
							// PeopleHash �� () �����ڿ� ������ bucket ��ȣ �����Ŀ�		
							// ����.
	s.emplace("lee", 25);
	s.emplace("park", 30);

	People peo("lee", 25);

	auto p = s.find(peo); // �˻��Ϸ��� 2���� people
						// ������ ���� �Ҽ� �־�� �Ѵ�.
						// int n1, n2 �� == ���� ����
						// People p1, p2 �� "p1 == p2" �� �Ƿ��� ������ ������ �ʿ�

	std::cout << (*p).name << std::endl;
}

