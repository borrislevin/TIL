#include <iostream>
#include <vector>

// cppinsights.io : 요즘 새롭게 등장해서 아주 인기가 좋은 사이트

template<typename T> void foo(T&& arg)
{
}
int main()
{
	int n = 10;

	foo(n);  // n(lvalue)   T : int&    T&& : int&    최종함수 : foo( int& arg)
	foo(10); // 10(rvalue)  T : int     T&& : int&&   최종함수 : foo( int&& arg)

	foo( [](int a) {return a; } ); // 람다의 원리를 알고 싶다면
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




