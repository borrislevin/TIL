#include <vector>
#include <algorithm>
#include <numeric>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 10, 21, 30, 23, 30, 40, 20, 30, 24, 10, 22, 32 };
	//						10, 31, 61, 84, ..... 
	//						10, 11, 9,  -7,...

	// 1. 월별 매출의 누적을 구하라.
	// STL 철학 : 어떤 일을 해야 한다. 직접 만들기 전에.. 표준 함수를 찾아라!!
	std::vector<int> v2(12, 0); // 12개 요소를 0으로..
	std::partial_sum(v1.begin(), v1.end(), v2.begin());
	show(v2);

	// 2. 월별 매출의 증감
	std::vector<int>  v3(12, 0);
	std::adjacent_difference(v1.begin(), v1.end(), v3.begin());

	show(v3);
}






