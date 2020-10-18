#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	// 1. ����
	// C++98 ����
	std::vector<int> v1;		// ��� �ִ� vector
	std::vector<int> v2(10);	// 10���� ��Ұ� 0���� �ʱ�ȭ
	std::vector<int> v3(10, 1);	// 10���� ��Ұ� 1�� �ʱ�ȭ
	
	// C++11(modern C++) ���� - �迭 ó�� �ʱ�ȭ ����.
	std::vector<int> v4 = { 1,2,3,4,5,6,7,8,9 }; 
	std::vector<int> v5 { 1,2,3,4,5,6,7,8,9 };   // =�� ��� �˴ϴ�.

	// �Ʒ� 2���� �������� ? �߿��մϴ�.
	std::vector<int> v6(10,2); // 10���� ��Ҹ� 2�� �ʱ�ȭ
	std::vector<int> v7{10,2}; // 2���� 10, 2 �� �ʱ�ȭ.

	std::vector<int> v8(v7); // v7 �� ������ �������� �����
	std::vector<int> v9(v7.begin(), v7.end());

	// 2. ����, 
	//v1.push_front(10); // ��, vector�� ����
	v1.push_back(10);

	// �߰� ���� => ��� ������ ��ġ(�ݺ���)�� �� ����
	auto p = std::find(v4.begin(), v4.end(), 5);
	v4.insert(p, 20);

	// 3. ����
	//v4.pop_front(); // ��, vector �� ����
	v4.pop_back();

	// �߰� ��� ����.
	v4.erase(p);			// �Ѱ� ����
	v4.erase(p, v.end());	// ���� ����

	// 3. ����
	// A. ��� ��� ���� - range-for �� ���� ��
	for (auto& e : v4)
	{
		e = 0;
	}

	// B. �Ϻ� ��� ���� - �ݺ��� ���
	auto p2 = v4.begin();
	*p2 = 100;

	// C. �迭 ���� �Ǵ� at() �Լ� ��� => �������� �ݺ��ڸ� ���� �͸� ����
	// vector, deque, array
	v4[10] = 0;		// �߸��� �ε��� ����ص� ���� ���� - �׳� ���μ��� ����
	v4.at(10) = 0;	// �߸��� �ε��� ���� ���� �߻�

	// 4. ��� ����
	int x[] = { 1,2,3,4,5 };

	v4.assign(x, x + 5); // v4�� ������ x~x+5�� ����

	// 5. ��Ÿ.
	int n1 = v4.size();
	bool b = v4.empty();

	// "�����̳� ���� �ٽ�"
	// ����� �ϰ� �ʹٸ� "1. ����Լ��� ���� ã��", "2. ������ �˰��򿡼� ã�ƶ�"
	std::vector<int> v10 = { 1,3,5,7,9,2,4,6,8,10 };

	// ����(sort) �� ������
	// v10.sort(); // error. list���� ������ vector�� ����.
	std::sort(v10.begin(), v10.end());

}