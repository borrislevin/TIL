// 2���� �ǽ� ( 3:25 ~ 4:20 ) ���ø鼭 ���ϰ� �غ����� 
#include <vector>
#include <algorithm>
#include <numeric>
#include "show.h"
bool foo(int n) { return n >= 60; }

int main()
{
	// 1~2�� 
	/*
	std::vector<int> v;
	int n;
	
	while (1)
	{
		std::cin >> n;
		if (n == -1) break;
		v.push_back(n);
	}
	*/	
	std::vector<int> v = { 10,50,30,20,70,90,80, 100 };


	//---------------------------------------
	// 6. �ְ����� �������� ã�Ƽ� ������ �Ѵ�.  
	// �ٽ� : �Ʒ� �Լ��� ��ȯ���� ���� �ƴ� "�ݺ���" �Դϴ�.
	auto p1 = std::max_element(v.begin(), v.end()); // ����� max �� ã�ƴ޶�.

	std::cout << *p1 << std::endl; // 
	// �ٽ� : �����̳��� �޸𸮸� ������ �����ϴ� ���� ��� �Լ��ۿ� �Ҽ� ����
	//v.erase(p1, v.end()); // ���� ����
	v.erase(p1); // �Ѱ� ����

	auto p2 = std::min_element(v.begin(), v.end());
	v.erase(p2);

	// 6�� ������ ������� ?
	// �ִ�/�ּҸ� �ѹ��� ���ϴ� �Լ��� �ִٸ� ���� ������ ������� ? => ���� ����..
	//------------------------------



	// 3��, copy_if �Ǵ� remove_copy_if ���
	std::vector<int> v2;
//	std::copy_if(v.begin(), v.end(), v2.begin(), foo); // �������� �ذ�å�� ?
													// v2�� ��� �ִ�, ����� runtime error
	std::copy_if(v.begin(), v.end(), std::back_inserter(v2), foo);


	// 4��. v, v2�� ����� ����(accumulate), ��� ���ϱ�
	int s1 = std::accumulate(v.begin(), v.end(), 0);
	int av1 = s1 / v.size();

	int s2 = std::accumulate(v2.begin(), v2.end(), 0);
	int av2 = s2 / v2.size();

	std::cout << "��ü �ο��� : " << v.size() << std::endl;
	std::cout << "��ü ����   : " << s1       << std::endl;
	std::cout << "��ü ���   : " << av1      << std::endl;

	std::cout << "�հ��� �ο��� : " << v2.size() << std::endl;
	std::cout << "�հ��� ����   : " << s2 << std::endl;
	std::cout << "�հ��� ���   : " << av2 << std::endl;

	// 5. ������ ��� ���� ���
	std::sort(v.begin(), v.end());

	show(v);




	// (A). ��� �Լ����� ã�ƶ�!
	// (B). �˰��򿡼� ã�ƶ�
	// (C). ������ ���� �����ϰų�, �Ҽ� ���� �۾�.
	// �Լ��� ã�Ҵٸ� ������ ��� �Ǵ°� ?
	// cppreference.com ���� "����"�� Ȯ���ϴ°��� ���� ���ϴ�.
}

