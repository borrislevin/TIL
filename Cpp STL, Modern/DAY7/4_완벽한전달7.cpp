#include <iostream>

void foo(int a) {}
void goo(int& a) { a = 100; }
void hoo(int&& a) {}

// ���� ���. ���� ���� ���ڸ� �ٸ� ������ �Ϻ��ϰ� �����Ϸ���

// 1. ���ڸ� ������ "forwarding reference" �� �޾ƶ�!
//		=> ���纻���� lvalue ����, rvalue ������ �޴� �Լ��� �ڵ� �����ǹǷ�

// 2. ���� ���ڸ� �ٸ����� �������� "std::forward<T>(arg)" �� ��� ������ �Ѵ�.

template<typename F, typename T> void chronometry(F f, T&& arg)
{
//	f(static_cast<T&&>(arg));
	f( std::forward<T>(arg) ); // std::forward<> �Լ��� ��ó�� ĳ�����ϴ� ���� �մϴ�.
}

int main()
{
	chronometry(foo, 10); 
	chronometry(goo, n);  
}
