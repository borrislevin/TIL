
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

// 알고리즘과 동일한 이름의 멤버 함수가 있다면 멤버 함수를 사용하라. - 84 page
// "알고리즘보다 멤버함수가 좋다" => 84 page

int main()
{
//	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };
	std::list<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	// list 에 대해서도 아래 코드는 잘 동작합니다. 
	/*
	auto p = std::remove(v.begin(), v.end(), 3);
	show(v); 
	v.erase(p, v.end());
	show(v);
	*/

	// list 에는 멤버 함수 remove가 있습니다. 
	// 3을 만나면 "앞으로 당기는 것이 아니라" 바로 메모리 제거 합니다
	v.remove(3);

	show(v);

	return 0;
}







