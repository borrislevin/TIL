#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 13,5,1,4,2,9 };

	// v 안에서 최대값과 최소값 구하기
	// 아래 처럼 따로 구하면 "전체구간 순회를 2번해야 합니다."
	auto p1 = std::max_element(v.begin(), v.end());
	auto p2 = std::min_element(v.begin(), v.end());

	// 아래 처럼 하면 "한번 순회"로 "최대, 최소"를 모두 구할수 있습니다
//	std::pair< std::vector<int>::iterator, std::vector<int>::iterator > ret 
//												= std::minmax_element(v.begin(), v.end());
	auto ret = std::minmax_element(v.begin(), v.end());


	std::cout << "최소값 : " << *(ret.first)  << std::endl;
	std::cout << "최대값 : " << *(ret.second) << std::endl;
	
	
}