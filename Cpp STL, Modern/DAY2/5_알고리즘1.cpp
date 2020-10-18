#include <iostream>
#include <vector>
#include <list>

// STL 알고리즘 : 멤버함수가 아닌 일반 함수들.
//				  하나의 알고리즘은 다양한 컨테이너에 적용 가능

// 3개의 헤더
#include <algorithm>	// 대부분의 알고리즘
#include <numeric>	    // 수치관련 연산 알고리즘
#include <memory>       // 메모리 조작

// cppreference.com 에서 1번째 화면에서 "algorithm library" 선택

// 알고리즘 기본
int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };
	
	auto p = std::find( v.begin(), v.end(), 3);

	int sum = std::accumulate(v.begin(), v.end(), 0); // 구간에 있는 모든 요소의 합 구하기.
													// 초기값은 0부터 시작

	std::cout << sum << std::endl;

	return 0;
}



















//
