#include <iostream>
#include <list>
#include <algorithm>
#include "show.h"

// ���� �Լ� : ���ڰ� �Ѱ��� �Լ�
// ���� �Լ� : ���ڰ� 2���� �Լ�
int foo(int a, int b) { return a + b; }
int main()
{
    std::list<int> s1 = { 1,2,3,4,5};
    std::list<int> s2 = { 6,7,8,9,10 };
	std::list<int> s3 = { 0,0,0,0,0 };

    // transform �˰���

	std::transform(s1.begin(), s1.end(), // �� ������ ��Ҹ� �Ѱ���
		           s2.begin(),			 // �� ������ ��ҿ� �Բ� ������ ������ �Լ��� ������
		           //s3.begin(),			 // �Լ��� ����� ���⿡ ��ƶ�.
				   s3.rbegin(),			
				   foo);

	show(s3);

	return 0;
}



















//
