// 4_1_reverse_iterator.cpp
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	auto p1 = v.begin(); // '1'을 가리킴
	auto p2 = v.end();   // '10' 다음을 가리킴

	// 핵심을 아래 2줄
	auto p3 = v.rbegin(); // '10'을 가리킴
	auto p4 = v.rend();   // '1' 의 하나 앞

	std::cout << *p3 << std::endl; // 10
	++p3;
	std::cout << *p3 << std::endl; // 9
	//---------------------------------------

	std::vector<int> v2 = { 1,2,3,1,2,3,1,2,3,1 };

	// v2의 앞에서 부터 검색해서 "처음 나오는 3"을 찾아라
	auto ret = std::find(v2.begin(), v2.end(), 3);

	// v2 의 뒤에서 부터 검색해서 처음 나오는 3을 찾아라 
	auto ret2 = std::find(v2.rbegin(), v2.rend(), 3);

	// 핵심 : reverse 반복자 덕분에 모든 알고리즘 함수는
	//       "순방향" 뿐 아니라 "역방향"으로도 동작 합니다.
	//       => 아주 훌륭한 개념!!!
}









