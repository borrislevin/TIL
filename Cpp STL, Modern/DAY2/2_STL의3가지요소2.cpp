#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };	// 연속된 메모리 공간을 사용
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };	// 각 요소가 분리된 메모리 공간을 사용

	// v 와 s 의 모든 요소를 동일한 방법으로 접근하고 싶다.?

	// 반복자(iterator)
	// 컨테이너의 내부구조에 상관없이
	// "동일한 방식"으로 열거하는 도구

	auto p1 = v.begin();
	auto p2 = s.begin();

	// p1와 p2는 사용법이 동일합니다.(포인터처럼 사용합니다.)
	std::cout << *p1 << std::endl;
	std::cout << *p2 << std::endl;

	++p1;
	++p2;
	
}