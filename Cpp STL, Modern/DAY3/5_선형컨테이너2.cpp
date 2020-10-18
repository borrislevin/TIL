#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	// 1. 생성
	// C++98 시절
	std::vector<int> v1;		// 비어 있는 vector
	std::vector<int> v2(10);	// 10개의 요소가 0으로 초기화
	std::vector<int> v3(10, 1);	// 10개의 요소가 1로 초기화
	
	// C++11(modern C++) 부터 - 배열 처럼 초기화 가능.
	std::vector<int> v4 = { 1,2,3,4,5,6,7,8,9 }; 
	std::vector<int> v5 { 1,2,3,4,5,6,7,8,9 };   // =이 없어도 됩니다.

	// 아래 2줄의 차이점은 ? 중요합니다.
	std::vector<int> v6(10,2); // 10개의 요소를 2로 초기화
	std::vector<int> v7{10,2}; // 2개가 10, 2 로 초기화.

	std::vector<int> v8(v7); // v7 과 동일한 내용으로 만들기
	std::vector<int> v9(v7.begin(), v7.end());

	// 2. 삽입, 
	//v1.push_front(10); // 단, vector는 에러
	v1.push_back(10);

	// 중간 삽입 => 어디에 넣을지 위치(반복자)와 값 전달
	auto p = std::find(v4.begin(), v4.end(), 5);
	v4.insert(p, 20);

	// 3. 제거
	//v4.pop_front(); // 단, vector 는 에러
	v4.pop_back();

	// 중간 요소 제거.
	v4.erase(p);			// 한개 제거
	v4.erase(p, v.end());	// 구간 제거

	// 3. 접근
	// A. 모든 요소 접근 - range-for 가 제일 편리
	for (auto& e : v4)
	{
		e = 0;
	}

	// B. 일부 요소 접근 - 반복자 사용
	auto p2 = v4.begin();
	*p2 = 100;

	// C. 배열 연산 또는 at() 함수 사용 => 임의접근 반복자를 가진 것만 가능
	// vector, deque, array
	v4[10] = 0;		// 잘못된 인덱스 사용해도 예외 없음 - 그냥 프로세스 종료
	v4.at(10) = 0;	// 잘못된 인덱스 사용시 예외 발생

	// 4. 요소 변경
	int x[] = { 1,2,3,4,5 };

	v4.assign(x, x + 5); // v4의 내용을 x~x+5로 변경

	// 5. 기타.
	int n1 = v4.size();
	bool b = v4.empty();

	// "컨테이너 사용시 핵심"
	// 어떤일을 하고 싶다면 "1. 멤버함수를 먼저 찾고", "2. 없으면 알고리즘에서 찾아라"
	std::vector<int> v10 = { 1,3,5,7,9,2,4,6,8,10 };

	// 정렬(sort) 해 보세요
	// v10.sort(); // error. list에는 있지만 vector는 없다.
	std::sort(v10.begin(), v10.end());

}