// 5_range_for1.cpp   21 page
#include <iostream>

int main()
{
	int v[10] = { 1,2,3,4,5 };

/*	// �������� for ��
	for (int i = 0; i < 5; i++)  
	{
		std::cout << v[i] << std::endl;
	}
*/
	// C++11 �� ���ο� for��
	// java, C# : foreach() ��� �θ��ϴ�.
	// => ����� ���Ÿ� ����. ���� �����̳�, 2ĭ�� �Ϸ��� �������� for�����

	// "range for" ��
	for (auto n : v)			// v�� ��� ��Ҹ� ���ʴ�� n�� �־� �޶�.
	{
		std::cout << n << std::endl;
	}
}















