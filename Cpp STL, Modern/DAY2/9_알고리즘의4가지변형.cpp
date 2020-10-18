#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

bool foo(int a) { return (a % 3) == 0; }

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2 = { 0,0,0,0,0,0,0,0,0,0 };

	// 1. �⺻ ��
//	auto ret1 = std::remove(v1.begin(), v1.end(), 3);  // �޸� ���Ű� �ƴϰ� ���°�
	
	// 2. ��������
//	auto ret2 = std::remove_if(v1.begin(), v1.end(), foo );

	// 3. ������
	// ������ "v1"�� ��ȭ ���� ����� "v2"�� �ֽ��ϴ�.
	// ��ȯ�� ret3�� ������ �ݺ��� �ϱ�� ?( v2�� �ݺ��� )
//	auto ret3 = std::remove_copy(v1.begin(), v1.end(), v2.begin(), 3);

	// 4. ���� ������ ����
	// ret4�� ���� v2�� �ݺ���
	auto ret4 = std::remove_copy_if(v1.begin(), v1.end(), v2.begin(), foo);
	show(v1);
	show(v2);

	v2.erase(ret4, v2.end());
	show(v2);

	//-------------------------------------------------------
	auto p1 = std::find_if(v1.begin(), v1.end(), foo); // ������ �����ϴ� "1��° ��Ҹ�" �˻�

	while (p1 != v1.end())
	{
		// 2��° ��ҵ� �˻��Ϸ��� �ٽ� find_if ����
		p1 = std::find_if(++p1, v1.end(), foo);
	}

	// �ƴϸ� �Ʒ� ó�� �ϸ� �ѹ��� ����� v2�� ������ �ֽ��ϴ�.
	// "������ �����ϴ� ��� ���� �����ϰ� v2�� ���"
	std::remove_copy_if(v1.begin(), v1.end(), v2.begin(), foo);

	std::copy_if(v1.begin(), v1.end(), v2.begin(), foo);  // ������ �����ϴ� �͸� ����
}

// cppreference.com    "Algorithm" ���̺귯�� ����

// ī�信 "�ǽ��ڷ�" �ֽ��ϴ�. �޾� �μ���.