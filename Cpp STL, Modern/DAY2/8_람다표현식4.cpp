#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// v �� ��� ��ҿ� 3�� ���� ������ => ���� ǥ���� ����ϼ���
	std::for_each(v.begin(), v.end(), ?);
	show(v);


	/*
	int n = 0;
	std::cin >> n;

	// v�� ��� ��ҿ� n�� ���� ������.
	
	show(v);
	*/
}



