#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// v 의 모든 요소에 3을 더해 보세요 => 람다 표현식 사용하세요
	std::for_each(v.begin(), v.end(), ?);
	show(v);


	/*
	int n = 0;
	std::cin >> n;

	// v의 모든 요소에 n을 더해 보세요.
	
	show(v);
	*/
}



