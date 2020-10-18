#include <iostream>
#include "show.h"
#include <set> 

int main()
{
	std::set<int> s;	// 중복이 허용되지 않습니다.

	s.insert(20);	
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);
	
	// insert의 리턴 값이 어렵습니다.
	//std::pair<std::set<int>::iterator, bool> ret = s.insert(30);	// 실패

	auto ret = s.insert(30);

	// ret.first  : 실패시 기존 요소를 가리키는 반복자
	// ret.second : 성공여부(true, fale)
	
	if (ret.second == false)
	{
		std::cout << "insert 실패" << std::endl;
		std::cout << "기존요소 : " << *(ret.first) << std::endl;
	}



	auto p = s.begin(); 

	while (p != s.end())
	{
		std::cout << *p << std::endl;
		++p;
	}

}







