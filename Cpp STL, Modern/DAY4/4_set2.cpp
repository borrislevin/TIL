#include <iostream>
#include "show.h"
#include <set> 

int main()
{
	std::set<int> s;

	s.insert(20);	
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);
	s.insert(25);

	// 핵심 1. set 은 루트 부터 비교로만 넣을수 있습니다
	// s.insert() 또는 s.emplace()만 가능.
//	s.push_front(300);	// error
//	s.push_back(20);	// error


	auto p = s.begin();

	// 핵심 2. 반복자는 읽기 전용입니다.
	//*p = 300; // error.
	int n = *p; // ok


	// 핵심 3. 아래 코드를 평가해 보세요
	auto ret = std::find(s.begin(), s.end(), 30);	// 에러는 없지만!!!
					// s.begin() 부터 ++로 이동하면서 검색 - 선형 검색

	// STL 핵심 - 원하는 기능이 있으면
	// A. 멤버함수가 있는지 먼저 찾아라!
	// B. 멤버가 없을때 일반 함수(알고리즘)에서 찾아라
	auto ret2 = s.find(30);  // 이진 검색(루트 요소 부터 비교해 가면서 검색)

	// 항상 "STL" 컨테이너 사용시 - 자료구조(메모리 모양)을 잘 생각하면서 사용하세요..


	while (p != s.end())
	{
		std::cout << *p << std::endl;
		++p;
	}

}







