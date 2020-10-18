#include <iostream>
#include <vector>
#include <list>
#include <iterator>

int main()
{
//	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = s.begin();

	// 반복자 p를 5칸 전진하고 싶다.
//	p = p + 5;  // vector만 가능.. list 안됨.

//	++p; ++p; ++p; ++p; ++p;// 모든 컨테이너 반복자 가능. 
							// 하지만, vector 반복자일때 느리다.

	// 결론
	// 1. 반드시 임의접근 반복자(vector)만 사용할 것이다. : "p = p + 5" 처럼 사용하세요

	// 2. 컨테이너가 바뀔수도 있다면 아래 처럼 하세요
	
	std::advance(p, 5);  // p가 임의접근이면 + 사용
						 // 임의접근 아니면 ++ 로 이동

	// 한칸이동은 무조건 ++ 하세요.
	++p; // 모든 종류 반복자가 지원!
	
	std::cout << *p << std::endl; // 6
}


