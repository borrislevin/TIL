#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	
	// �����̳ʿ��� ������ �ݺ��ڴ� 4���� ���� �Դϴ�.
	// ��κ� .begin() ���
	// ���� �Ųٷ� ����ϰ� ������ .rbegin() ���
	auto p1 = v.begin();
	auto p2 = v.rbegin();  // reverse �ݺ���
	auto p3 = v.cbegin();  // ��� �ݺ���
	auto p4 = v.crbegin(); // ��� reverse �ݺ���

	*p1 = 20; // ok.. 
	*p2 = 20; // ok
	*p3 = 20; // error. ��� �ݺ��� �Դϴ�.
	*p4 = 20; // error
}









