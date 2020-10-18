#include <iostream>
#include <vector>

// cppinsights.io : ���� ���Ӱ� �����ؼ� ���� �αⰡ ���� ����Ʈ

template<typename T> void foo(T&& arg)
{
}
int main()
{
	int n = 10;

	foo(n);  // n(lvalue)   T : int&    T&& : int&    �����Լ� : foo( int& arg)
	foo(10); // 10(rvalue)  T : int     T&& : int&&   �����Լ� : foo( int&& arg)

	foo( [](int a) {return a; } ); // ������ ������ �˰� �ʹٸ�
	// class ClosureType 
	// {
	//		inline int operator()(int a) const {}
	// }

	//int x[4] = { 1,2,3,4 };

	std::vector<int> x = { 1,2,3,4 };

	for (int n : x)
	{

	}
}




