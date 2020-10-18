#include <iostream>
#include <vector>
#include <algorithm>

bool isDivide3(int n) { return n % 3 == 0; }

int main()
{
	std::vector<int> v = { 6, 9, 3, 1, 2 };

	// STL 알고리즘 사용
	// 1. 값 검색   
	auto ret1 = std::find(v.begin(), v.end(), 3);

	// 2. 조건 검색 : 처음 나오는 3의 배수를 찾아라
	//				  xxx_if() 알고리즘
	auto ret2 = std::find_if(v.begin(), v.end(), isDivide3);

	// 위와 동일한 의미의 코드를 "람다 표현식" 으로 만들어 보세요
	auto ret3 = std::find_if(v.begin(), v.end(), [](int a) { return a % 3 == 0; });

	std::cout << *ret3 << std::endl; // 6


}

