#include <iostream>
#include <list>   
#include <vector>

// �ݺ��� ��ȿȭ
int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	
	auto p = std::begin(v);

	std::cout << *p << std::endl;
}



