#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// v �� ��� ��ҿ� 3�� ���� ������ => ���� ǥ���� ����ϼ���
	
	// �ٽ� : 3��° ���ڷ� ���޵Ǵ� �Լ��� "����"�� �޾ƾ� ������ �����Ҽ� �ֽ��ϴ�.
//	std::for_each(v.begin(), v.end(), [](int& a) { a = a + 3; } ); 
//	show(v); // 4,5,6,7,8,9,10,11,12,13  ���;� �մϴ�
	

	int n = 0;
	std::cin >> n;

	// v�� ��� ��ҿ� "����ڰ� �Է��� n" �� ���� ������.
//	std::for_each(v.begin(), v.end(), [](int& a) { a = a + n; }); // error

	// �߿� ���� : �������� ĸ�� ����
	// ���� ǥ���ľȿ��� ���������� ����ϰ� ������ ����ϴ� ����
	std::for_each(v.begin(), v.end(), [n](int& a) { a = a + n; }); // ok

//	int n1 = 10, n2 = 20;
//	std::for_each(v.begin(), v.end(), [n1, n2](int& a) { a = a + n1 + n2; });    // 2���̻� ĸ��
//	std::for_each(v.begin(), v.end(), [=]     (int& a) { a = a + n + n1 + n2; });// ��� ��������ĸ��

	// ���� : �ǵ����̸� [=]�� ������� ����, "[�ʿ��Ѻ�����]" �� ĸ�� �ϼ���
	show(v);
}



