#include <iostream>
#include <string>
#include <vector>

// �� move�� �߿��Ѱ� ? 

// �Ʒ� �ڵ�� ���������, ���Կ����ڸ� �����
// swap �Դϴ�. �����ϴ�.
/*
template<typename T>
void Swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
*/
// move�� ����� swap - �� �ڵ庸�� �����ϴ�.
template<typename T>
void Swap(T& a, T& b)
{
	T tmp = std::move(a);
	a = std::move(b);
	b = std::move(tmp);
}
// move�� �߿��� ����
// �پ��� �˰��� �Լ��� ���鶧 
// "����"���� "move"�� ����ϴ� ���� ������.!

int main()
{
	std::string s1 = "hello";
	std::string s2 = "world";
	Swap(s1, s2);

	int n1 = 10;
	int n2 = n1;
	int n3 = std::move(n1); // primitive Ÿ���� �ڿ��� �����Ƿ�
							// �ǹ� �����ϴ�.
							// �ٷ� �� �ڵ�� ������ ����. ��������.
}
// std::move() �� ������ ����ϸ� �������ϴ�
// �׷���, ���� C++ �����ڰ� ���� move�� �� ���� ���ؼ� ����� �����ϴ� ��찡 �����ϴ�.



