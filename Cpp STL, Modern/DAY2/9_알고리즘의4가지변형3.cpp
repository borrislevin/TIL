#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,1,2,3,1,2,3,1 };
	std::vector<int> v2 = { 0,0,0,0,0,0,0,0,0,0 };

	// copy 알고리즘
//	std::copy( v1.begin(), v1.end(), v2.begin() ); // 기존요소 덮어 쓰기

//	std::back_inserter(v2) : v2 끝에 추가하는 반복자 반환
//	std::copy(v1.begin(), v1.end(), std::back_inserter(v2) );  // v2의 끝에 추가해라!


	std::vector<int> v3; // 요소가 없습니다. 즉, 크기가 0

//	std::copy(v1.begin(), v1.end(), v3.begin() ); // runtime error. 
												  // v1의 모든 요소를 담을 공간이 없다.
												  // v2에 미리 공간을 만들거나, 끝에 삽입해라

	std::copy(v1.begin(), v1.end(), std::back_inserter(v3) ); // ok..

	show(v3);



	show(v1);
	show(v2);
}



