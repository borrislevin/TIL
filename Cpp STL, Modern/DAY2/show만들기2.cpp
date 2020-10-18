#include <iostream>
#include <vector>
#include <list>

// "show.h" 파일 추가 해서.. 아래 함수 복사해 놓으세요
template<typename T>
void show(const T& v)
{
	for (auto e : v)
		std::cout << e << ", ";

	std::cout << std::endl; // 개행
}

int main()
{
//	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<int>   v = { 1,2,3,4,5,6,7,8,9,10 };

	show(v); // 이 함수를 만들어 봅시다.
}

