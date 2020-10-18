#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

// 알고리즘과 동일한 이름의 멤버 함수가 있다면 멤버 함수를 사용하라. - 84 page

int main()
{
//	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	std::list<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	// 정렬(sort) : 모든 요소를 크기 순서로 나열하는 것
//	std::sort( v.begin(), v.end() );  // "퀵 정렬 기술 사용"
									  // 퀵 정렬은 가장빠른 알고리즘이지만 "임의접근반복자"
									  // 가 필요 한다.

	// 하지만 다른 정렬 기법은 "양방향 반복자"로도 구현가능합니다.
	v.sort(); // 그래서 list 의 멤버로 sort() 멤버 함수가 있습니다.

	show(v);

	// 질문 
	std::vector<int> v2 = { 1,2,3,4 };
//	v2.sort(); // vector에는 이 멤버 함수가 있을까요 ? 없다..
				// 임의 접근 반복자이므로 "std::sort()"를 사용할수 있으므로..
}

// 정렬하는 기법(알고리즘)은 아주 다양합니다
// 퀵정렬 : 가장 빠른 기술
// 버블정렬, 선택정렬, 힙정렬 등...






