#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// 컨테이너의 모든 요소를 열거하는 방법 정리.

	// 방법 1. range-for 가 가장 편리  => 모든 컨테이너에 적용가능
	//  "모든 요소만 열거"
	for (auto e : v)
		std::cout << e << ", ";

	std::cout << std::endl; // 개행

	// 방법 2. 반복자 사용 => 모든 컨테이너에 적용가능
	// "모든 요소와 일부 구간도 가능"
	auto p = v.begin();
//	p = p+2;

	while ( p != v.end() )
	{
		std::cout << *p << ", ";
		++p;
	}
	std::cout << std::endl;

	// 방법 3. [] 연산자로 요소 접근 => vector, deque, array 가능. list 안됨
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << ", ";
	}
	std::cout << std::endl;
}

