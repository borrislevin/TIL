#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,1,2,3,1,2,3,1 };
	std::vector<int> v2 = { 0,0,0,0,0,0,0,0,0,0 };

	// copy �˰���
//	std::copy( v1.begin(), v1.end(), v2.begin() ); // ������� ���� ����

//	std::back_inserter(v2) : v2 ���� �߰��ϴ� �ݺ��� ��ȯ
//	std::copy(v1.begin(), v1.end(), std::back_inserter(v2) );  // v2�� ���� �߰��ض�!


	std::vector<int> v3; // ��Ұ� �����ϴ�. ��, ũ�Ⱑ 0

//	std::copy(v1.begin(), v1.end(), v3.begin() ); // runtime error. 
												  // v1�� ��� ��Ҹ� ���� ������ ����.
												  // v2�� �̸� ������ ����ų�, ���� �����ض�

	std::copy(v1.begin(), v1.end(), std::back_inserter(v3) ); // ok..

	show(v3);



	show(v1);
	show(v2);
}



