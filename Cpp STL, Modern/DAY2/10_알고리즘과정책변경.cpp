#include <iostream>
#include <vector>
#include <algorithm>  
#include <numeric>    
#include <functional>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };

	// <numeric> 헤더
	int n = std::accumulate(v1.begin(), v1.end(), 0); 

	std::cout << n << std::endl;

	//-----------------------
	std::vector<int> v2 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v3 = { 0,0,0,0,0,0,0,0,0,0 };

	// 결과 보고 아래 함수가 하는 일을 예측해 보세요.
	std::partial_sum(v2.begin(), v2.end(), v3.begin());

	show(v3); 
}
