#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 6, 9, 3, 1, 2 };

	// v 의 구간에서 3의 배수가 아닌 1번째 요소를 찾아 보세요..
	// "람다 표현식을 사용하세요"
	auto ret1 = std::find_if(v.begin(), v.end(), ?);


}

