// 2일차 실습 ( 3:25 ~ 4:20 ) 쉬시면서 편하게 해보세요 
#include <vector>
#include <algorithm>
#include <numeric>
#include "show.h"
bool foo(int n) { return n >= 60; }

int main()
{
	// 1~2번 
	/*
	std::vector<int> v;
	int n;
	
	while (1)
	{
		std::cin >> n;
		if (n == -1) break;
		v.push_back(n);
	}
	*/	
	std::vector<int> v = { 10,50,30,20,70,90,80, 100 };


	//---------------------------------------
	// 6. 최고점과 최저점을 찾아서 지워야 한다.  
	// 핵심 : 아래 함수는 반환값은 값이 아닌 "반복자" 입니다.
	auto p1 = std::max_element(v.begin(), v.end()); // 요소중 max 값 찾아달라.

	std::cout << *p1 << std::endl; // 
	// 핵심 : 컨테이너의 메모리를 실제로 제거하는 것은 멤버 함수밖에 할수 없다
	//v.erase(p1, v.end()); // 구간 제거
	v.erase(p1); // 한개 제거

	auto p2 = std::min_element(v.begin(), v.end());
	v.erase(p2);

	// 6번 개선점 없을까요 ?
	// 최대/최소를 한번에 구하는 함수가 있다면 좀더 빠르지 않을까요 ? => 연휴 과제..
	//------------------------------



	// 3번, copy_if 또는 remove_copy_if 사용
	std::vector<int> v2;
//	std::copy_if(v.begin(), v.end(), v2.begin(), foo); // 문제점과 해결책은 ?
													// v2는 비어 있다, 덮어쓰면 runtime error
	std::copy_if(v.begin(), v.end(), std::back_inserter(v2), foo);


	// 4번. v, v2의 요소의 총합(accumulate), 평균 구하기
	int s1 = std::accumulate(v.begin(), v.end(), 0);
	int av1 = s1 / v.size();

	int s2 = std::accumulate(v2.begin(), v2.end(), 0);
	int av2 = s2 / v2.size();

	std::cout << "전체 인원수 : " << v.size() << std::endl;
	std::cout << "전체 총점   : " << s1       << std::endl;
	std::cout << "전체 평균   : " << av1      << std::endl;

	std::cout << "합격자 인원수 : " << v2.size() << std::endl;
	std::cout << "합격자 총점   : " << s2 << std::endl;
	std::cout << "합격자 평균   : " << av2 << std::endl;

	// 5. 정렬후 모든 점수 출력
	std::sort(v.begin(), v.end());

	show(v);




	// (A). 멤버 함수에서 찾아라!
	// (B). 알고리즘에서 찾아라
	// (C). 없으면 직접 구현하거나, 할수 없는 작업.
	// 함수를 찾았다면 사용법은 어떻게 되는가 ?
	// cppreference.com 에서 "예제"를 확인하는것이 제일 편하다.
}

