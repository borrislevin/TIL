#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2 = { 0,0,0,0,0,0,0,0,0,0 };

	// �� remove_copy �� ���������? �׳� �Ʒ� ó�� �ϸ� �Ǵµ�...
	// �Ʒ� ó�� �ϸ� ������ 2�� �ݺ��ؾ� �Ѵ�.
	std::copy  (v1.begin(), v1.end(), v2.begin());	
	std::remove(v2.begin(), v2.end(), 3);			

	// ������ 1ȸ�� �ݺ��ϸ�  �ȴ� => ��ó�� �ϴ� �ͺ��ٴ� 2���� �������
	std::remove_copy(v1.begin(), v1.end(), v2.begin(), 3);



	show(v1);
	show(v2);
}
