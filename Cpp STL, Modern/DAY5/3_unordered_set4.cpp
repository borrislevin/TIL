#include <iostream>
#include <unordered_set>
#include "show.h"

struct People
{
	std::string name;
	int  age;
	People(std::string n, int a) : name(n), age(a) {}
};

// 사용자정의 타입을 해쉬에 넣으려면
// 규칙 1. 사용자 타입 객체 하나를 받아서 해쉬값(bucket)번호를 반환하는 함수객체를 만들어라
struct PeopleHash
{
	inline int operator()(const People& p) const 
	{
		//return 버킷 번호;
//		return 0;		// 무조건 0번째 bucket 사용 => 문법, 개념적으로는 문제 없다.
						// 하지만, 최악의 성능.

		// C++ 표준에서 int, string 의 해쉬값은 구할수 있으므로 아래처럼 할수있다.
//		std::hash<int> hi;
//		int idx = hi(p.age);		
//		return idx;			// 동기을 관리하는 경우, 성능이 나쁘다.

		std::hash<int> hi;
		std::hash<std::string> hs;
		return hs(p.name) + hi(p.age);

		// 그럼, hash<int>, hash<string>은 어떻게 만들었을까 궁금하시면.."자료구조와 알고리즘"등을 
		// 공부해 보세요
	}
};
// 규칙 2. 상등을 비교 할수 있어야 하므로
//  방법 1. People 안에 == 연산자를 제공한다.
//  방법 2. People 객체 2개를 인자로 받아서 비교 하는 함수 객체 제공

struct PeopleEqual
{
	inline bool operator()(const People& p1, const People& p2) const
	{
		return p1.name == p2.name && p1.age == p2.age;
	}
};

int main()
{
	// int, double, string 등을 보관하려면 그냥 아래 처럼 사용하세요!!!!
	std::unordered_set<int> s1;

	// 사용자 정의 타입을 보관할때는 복잡합니다. 아래처럼 해야 합니다.
	std::unordered_set<People, PeopleHash , PeopleEqual > s;

	s.emplace("kim", 20);	// People("kim", 20)  모양의 사람을 해쉬에 넣기 위해
							// PeopleHash 의 () 연산자에 보내서 bucket 번호 얻은후에		
							// 저장.
	s.emplace("lee", 25);
	s.emplace("park", 30);

	People peo("lee", 25);

	auto p = s.find(peo); // 검색하려면 2개의 people
						// 같은지 조사 할수 있어야 한다.
						// int n1, n2 는 == 연산 가능
						// People p1, p2 는 "p1 == p2" 가 되려면 연산자 재정의 필요

	std::cout << (*p).name << std::endl;
}

