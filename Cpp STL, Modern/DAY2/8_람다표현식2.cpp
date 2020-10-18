#include <iostream>
#include <vector>
#include <algorithm>

void foo(int n) { std::cout << n << std::endl; }

int main()
{
	std::vector<int> v = { 1,2,6,5,4,3,7,8 };

	std::for_each(v.begin(), v.end(), foo); // 일반 함수

	// 위 한줄을 람다표현식으로 다시 만들어 보세요.
	std::for_each(v.begin(), v.end(), ? );
}

