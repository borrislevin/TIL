#include <iostream>

void foo() {}
void goo(int& a, int& b, int c) { a = 100; b = 100; }

// C++11 ���� "���� ���� ���ø�" ������ ���� �˴ϴ�.
template<typename F, typename ... T> void chronometry(F f, T&& ... arg)
{
	f(std::forward<T>(arg)... ); 
}
int main()
{
	int n1 = 0, n2 = 0;

	chronometry(foo);  // �Լ��� ����
	chronometry(goo, n1, n2, 10); // �Լ� + ���� 3�� ����

	std::cout << n1 << std::endl; // 100
	std::cout << n2 << std::endl; // 100

}
