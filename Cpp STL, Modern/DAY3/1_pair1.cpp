#include <iostream>

// pair : 2���� ������ Ÿ���� �����ϴ� �ڷᱸ��(����ü)
// �Ʒ� �ڵ尡 �̹� C++ ǥ�ؿ� �ֽ��ϴ�.
template<typename T, typename U>
struct pair
{
	T first;
	U second;
	pair(const T& a, const U& b) : first(a), second(b) {}
};

int main()
{
//	pair<int, double> p(1, 2.1);
	std::pair<int, double> p(1, 2.1); // C++ ǥ���� pair, ���� ������ ���� ����

	std::cout << p.first  << std::endl; // 1
	std::cout << p.second << std::endl; // 2.1
}
// pair �� ��ǥ�� Ȱ�� - �Լ� ��ȯ���� 2���� �ϰ� ������
std::pair<int, double> foo()
{
	// �Լ��� 2���� ���� ��ȯ�ϰ� �ʹ�
	std::pair<int, double> ret(1, 3.4);
	return ret;
}


