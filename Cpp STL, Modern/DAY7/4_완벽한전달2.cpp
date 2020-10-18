#include <iostream>

void foo(int a) {}				
void goo(int& a) { a = 100; }	

// �Ϻ��� ������ �Ϸ���
// 1. ���纻�� �����Ǹ� �ȵȴ�.
// 2. const ���� �Ӽ��� �߰��Ǿ �ȵȴ�.
// 3. �ذ�å�� ���� ������ "int&" ������ "int&&" ������
//    �Լ��� ���� �����ؾ� �Ѵ�.

template<typename F> void chronometry(F f,  int& arg)
{
	f(arg);		
}
template<typename F> void chronometry(F f, int&& arg)
{
	f(arg);
}
int main()
{
	int n = 10;

	chronometry(foo, 10); 
	chronometry(goo, n);   // goo(n) �� �����ϰ� �����ؾ� �Ѵ�.

	std::cout << n << std::endl; // 100 ���;� �մϴ�.
}
