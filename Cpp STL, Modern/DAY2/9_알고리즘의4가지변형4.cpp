#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

bool foo(int a) { return a > 2; };

int main()
{
	std::vector<int> v1 = { 1,2,3,1,2,3,1,2,3,1 };
	std::vector<int> v2 = { 0,0,0,0,0,0,0,0,0,0 };

	// v1의 모든 내용을 v2에 복사하고 싶다.

	// STL 초보자 - 주로 for문 사용
	for (int i = 0; i < v1.size(); i++)
		v2[i] = v1[i];


	// STL 능숙자 - copy 알고리즘
	std::copy(v1.begin(), v1.end(), v2.begin());

	// v1에서 2보다 큰 모든 요소만 v2에 담고 싶다.
	// find_if 등은 한개만 검색하지만, 모든 결과를 담아내려면 copy_if
	auto p = std::copy_if(v1.begin(), v1.end(), v2.begin(), foo);

	// 결국 p는 v2의 반복자인데, 필요 없는 부분을 지우려면
	v2.erase(p, v2.end());

	show(v1);
	show(v2);
}

// cafe.naver.com/cppmaster 에서 실습자료 받아보세요..

// 3:25 ~ 4:20 분 




