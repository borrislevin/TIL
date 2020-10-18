// 참고_range_for1.cpp
#include <vector>
#include <list>
#include <iostream>

int main()
{
//	std::vector<int> v = { 1,2,3,4,5 };
//	std::list<int>   v = { 1,2,3,4,5 };
	int  v[5] = { 1,2,3,4,5 };

	// 반복자 꺼내기
//	auto p1 = v.begin();	// C++98 스타일. 단, auto 는 C++11
//	auto p2 = v.end();		// 단, v가 배열인 경우 에러

	auto p1 = std::begin(v); // C++11 부터 권장.  배열도 가능
	auto p2 = std::end(v);   // int* p2  가 됩니다.

	//--------------------
	// C++11 의 range - for 구문
	for (auto n : v)
	{
		std::cout << n << std::endl;
	}

	// 위 코드를 "컴파일러가 아래 처럼 변경" 합니다.
	for (auto p = std::begin(v) ;  p != std::end(v);  ++p)
	{
		auto n = *p;
		//-------------------------------
		std::cout << n << std::endl;
	}
} 








