#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include "show.h"

// 컨테이너를 보관하는 컨테이너

int main()
{
	std::vector<int> v1(10, 0);
	v1[0] = 10;

	std::vector<double> v2(10, 0);
	v2[0] = 3.4;

	std::vector<std::list<int>> v3(10);

	v3[0].push_back(10);
	v3[0].push_back(20);
	v3[1].push_back(100);
	v3[1].push_back(200);
	
}