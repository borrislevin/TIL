#include <iostream>
#include <vector>
#include <algorithm>  
#include <numeric>    
#include <functional>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };

	// <numeric> ���
	int n = std::accumulate(v1.begin(), v1.end(), 0); 

	std::cout << n << std::endl;

	//-----------------------
	std::vector<int> v2 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v3 = { 0,0,0,0,0,0,0,0,0,0 };

	// ��� ���� �Ʒ� �Լ��� �ϴ� ���� ������ ������.
	std::partial_sum(v2.begin(), v2.end(), v3.begin());

	show(v3); 
}
