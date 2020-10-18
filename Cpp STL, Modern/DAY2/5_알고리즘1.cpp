#include <iostream>
#include <vector>
#include <list>

// STL �˰��� : ����Լ��� �ƴ� �Ϲ� �Լ���.
//				  �ϳ��� �˰����� �پ��� �����̳ʿ� ���� ����

// 3���� ���
#include <algorithm>	// ��κ��� �˰���
#include <numeric>	    // ��ġ���� ���� �˰���
#include <memory>       // �޸� ����

// cppreference.com ���� 1��° ȭ�鿡�� "algorithm library" ����

// �˰��� �⺻
int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };
	
	auto p = std::find( v.begin(), v.end(), 3);

	int sum = std::accumulate(v.begin(), v.end(), 0); // ������ �ִ� ��� ����� �� ���ϱ�.
													// �ʱⰪ�� 0���� ����

	std::cout << sum << std::endl;

	return 0;
}



















//
