#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	
	// 컨테이너에서 꺼내는 반복자는 4가지 형태 입니다.
	// 대부분 .begin() 사용
	// 가끔 거꾸로 사용하고 싶을때 .rbegin() 사용
	auto p1 = v.begin();
	auto p2 = v.rbegin();  // reverse 반복자
	auto p3 = v.cbegin();  // 상수 반복자
	auto p4 = v.crbegin(); // 상수 reverse 반복자

	*p1 = 20; // ok.. 
	*p2 = 20; // ok
	*p3 = 20; // error. 상수 반복자 입니다.
	*p4 = 20; // error
}









