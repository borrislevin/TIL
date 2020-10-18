#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

bool foo(int a) { return (a % 3) == 0; }

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2 = { 0,0,0,0,0,0,0,0,0,0 };

	// 1. 기본 형
//	auto ret1 = std::remove(v1.begin(), v1.end(), 3);  // 메모리 제거가 아니고 당기는것
	
	// 2. 조건자형
//	auto ret2 = std::remove_if(v1.begin(), v1.end(), foo );

	// 3. 복사형
	// 실행후 "v1"은 변화 없고 결과는 "v2"에 있습니다.
	// 반환값 ret3는 누구의 반복자 일까요 ?( v2의 반복자 )
//	auto ret3 = std::remove_copy(v1.begin(), v1.end(), v2.begin(), 3);

	// 4. 복사 조건자 버전
	// ret4는 역시 v2의 반복자
	auto ret4 = std::remove_copy_if(v1.begin(), v1.end(), v2.begin(), foo);
	show(v1);
	show(v2);

	v2.erase(ret4, v2.end());
	show(v2);

	//-------------------------------------------------------
	auto p1 = std::find_if(v1.begin(), v1.end(), foo); // 조건을 만족하는 "1번째 요소만" 검색

	while (p1 != v1.end())
	{
		// 2번째 요소도 검색하려면 다시 find_if 수행
		p1 = std::find_if(++p1, v1.end(), foo);
	}

	// 아니면 아래 처럼 하면 한번에 결과를 v2에 담을수 있습니다.
	// "조건을 만족하는 모든 것을 제거하고 v2에 담기"
	std::remove_copy_if(v1.begin(), v1.end(), v2.begin(), foo);

	std::copy_if(v1.begin(), v1.end(), v2.begin(), foo);  // 조건을 만족하는 것만 복사
}

// cppreference.com    "Algorithm" 라이브러리 선택

// 카페에 "실습자료" 있습니다. 받아 두세요.