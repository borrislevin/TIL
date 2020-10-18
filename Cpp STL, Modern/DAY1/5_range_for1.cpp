// 5_range_for1.cpp   21 page
#include <iostream>

int main()
{
	int v[10] = { 1,2,3,4,5 };

/*	// 전통적인 for 문
	for (int i = 0; i < 5; i++)  
	{
		std::cout << v[i] << std::endl;
	}
*/
	// C++11 의 새로운 for문
	// java, C# : foreach() 라고 부릅니다.
	// => 모든요소 열거만 가능. 갯수 제한이나, 2칸씩 하려면 전통적인 for문사용

	// "range for" 문
	for (auto n : v)			// v의 모든 요소를 차례대로 n에 넣어 달라.
	{
		std::cout << n << std::endl;
	}
}















