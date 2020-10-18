#include <vector>
#include <algorithm>
#include <numeric>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 10, 21, 30, 23, 30, 40, 20, 30, 24, 10, 22, 32 };
	//						10, 31, 61, 84, ..... 
	//						10, 11, 9,  -7,...

	// 1. ���� ������ ������ ���϶�.
	// STL ö�� : � ���� �ؾ� �Ѵ�. ���� ����� ����.. ǥ�� �Լ��� ã�ƶ�!!
	std::vector<int> v2(12, 0); // 12�� ��Ҹ� 0����..
	std::partial_sum(v1.begin(), v1.end(), v2.begin());
	show(v2);

	// 2. ���� ������ ����
	std::vector<int>  v3(12, 0);
	std::adjacent_difference(v1.begin(), v1.end(), v3.begin());

	show(v3);
}






