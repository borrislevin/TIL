#include <iostream>
#include <unordered_set>
#include "show.h"

struct People
{
	std::string name;
	int  age;
	People(std::string n, int a) : name(n), age(a) {}
};

int main()
{
	std::unordered_set<int> s1; // unordered_set<int, hash<int>, equal_to<int>, allocator<int>> ���
							    // ��, hash<int> �� �ؽ� �Լ��� ���

	std::unordered_set<double> s2;// unordered_set<int, hash<double>, equal_to<double>, allocator<double>> ���
								  // ��, hash<double> �� ���..

	// C++ ǥ�ؿ��� hash<int>, hash<double>, hash<string> ���� �Լ���ü�� �������ش�.
	// int, double, string �� C++ ǥ�ؿ��� �˰� �ִ� Ÿ���̹Ƿ�.

	// hash<People> �� ��� �ؽ� ��(��Ŷ��ȣ)�� ������ �˼� ������ ?  =>> �ȵȴ�.. error.

	std::unordered_set<People> s;  // ?

	s.emplace("kim", 20); // s.insert( People("kim",20))  error...
							// People �� ���ڷ� �޾Ƽ� �ؽ����� ���ϴ� �Լ��� �ʿ��ϴ�.
	s.emplace("lee", 25);
	s.emplace("park", 30);

	People peo("lee", 25);
	auto p = s.find( peo );

	std::cout << (*p).name << std::endl;
}

