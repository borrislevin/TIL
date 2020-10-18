#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 13,5,1,4,2,9 };

	// v �ȿ��� �ִ밪�� �ּҰ� ���ϱ�
	// �Ʒ� ó�� ���� ���ϸ� "��ü���� ��ȸ�� 2���ؾ� �մϴ�."
	auto p1 = std::max_element(v.begin(), v.end());
	auto p2 = std::min_element(v.begin(), v.end());

	// �Ʒ� ó�� �ϸ� "�ѹ� ��ȸ"�� "�ִ�, �ּ�"�� ��� ���Ҽ� �ֽ��ϴ�
//	std::pair< std::vector<int>::iterator, std::vector<int>::iterator > ret 
//												= std::minmax_element(v.begin(), v.end());
	auto ret = std::minmax_element(v.begin(), v.end());


	std::cout << "�ּҰ� : " << *(ret.first)  << std::endl;
	std::cout << "�ִ밪 : " << *(ret.second) << std::endl;
	
	
}