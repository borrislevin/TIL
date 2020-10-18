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
	std::unordered_set<int> s1; // unordered_set<int, hash<int>, equal_to<int>, allocator<int>> 모양
							    // 즉, hash<int> 를 해쉬 함수로 사용

	std::unordered_set<double> s2;// unordered_set<int, hash<double>, equal_to<double>, allocator<double>> 모양
								  // 즉, hash<double> 을 사용..

	// C++ 표준에서 hash<int>, hash<double>, hash<string> 등의 함수객체는 제공해준다.
	// int, double, string 은 C++ 표준에서 알고 있는 타입이므로.

	// hash<People> 은 어떻게 해쉬 값(버킷번호)을 구할지 알수 있을까 ?  =>> 안된다.. error.

	std::unordered_set<People> s;  // ?

	s.emplace("kim", 20); // s.insert( People("kim",20))  error...
							// People 을 인자로 받아서 해쉬값을 구하는 함수가 필요하다.
	s.emplace("lee", 25);
	s.emplace("park", 30);

	People peo("lee", 25);
	auto p = s.find( peo );

	std::cout << (*p).name << std::endl;
}

