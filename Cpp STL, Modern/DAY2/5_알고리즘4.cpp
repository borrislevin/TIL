#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

// 알고리즘과 동일한 이름의 멤버 함수가 있다면 멤버 함수를 사용하라. - 84 page

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// v의 모든 요소를 뒤집어 보세요
	std::reverse(v.begin(), v.end());
	
	show(v);
	//-----------------------------------------
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	// s의 모든 요소를 뒤집어 보세요
	// std::reverse(s.begin(), s.end()); // 이렇게 하지 말고
	s.reverse();	// 동일이름의 멤버가 있는지 먼저 조사하세요

	show(s); // 10, 9,8,7,6,5,4,3,2,1
}







