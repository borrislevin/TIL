#include <iostream>
#include <vector>
#include <algorithm>  
#include <numeric>    
#include <functional>
#include "show.h"

// �ٽ� : STL�� "��ǰ ����" �ϵ��� "������" �ְ� ���� �Ǿ� �ֽ��ϴ�.
// �߻���Ϸ��� "�˰��� ���޵Ǵ� �Լ��� ���"�� �� �ľ��ؾ� �մϴ�.

int Mul(int a, int b) { return a * b; }

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	
	// <numeric> ���
//	int n = std::accumulate(v1.begin(), v1.end(), 0); // 55 => ������ ��
											// int s = 0;
											// s = s + 1��° ���;
											// s = s + 2��° ���;

//	int n = std::accumulate(v1.begin(), v1.end(), 1, Mul); // ������� �������� �����Ҽ� �ֽ��ϴ�
											// int s = 1;
											// s = Mul( s * 1��°���) 
											// s = Mul( s * 2��°���) 
											// �ᱹ s = 1 �� �ʱ�ȭ �ϰ�
											// s = s * 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10

	// �� �ڵ� �ּ����� ����.. "���� ǥ����"�� ����� ������..
	int n = std::accumulate(v1.begin(), v1.end(), 1, [](int a, int b) { return a * b; } );

	std::cout << n << std::endl;
	//-----------------------
	std::vector<int> v2 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v3 = { 0,0,0,0,0,0,0,0,0,0 };
						//  1,3,6,10 	

	// ��� ���� �Ʒ� �Լ��� �ϴ� ���� ������ ������.
//	std::partial_sum(v2.begin(), v2.end(), v3.begin());  // ������ �⺻ ����

	std::partial_sum(v2.begin(), v2.end(), v3.begin(), [](int a, int b) { return a * b; }); // ������ �κ����� �ǵ��� �غ�����

	show(v3); 
}
