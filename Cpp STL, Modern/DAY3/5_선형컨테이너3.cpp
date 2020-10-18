#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// capacity 개념

int main()
{
	std::vector<int> v(10, 0);

	v.resize(7);  // 이순간의 원리를 생각해 봅시다.

	std::cout << v.size()     << std::endl; // 7
	std::cout << v.capacity() << std::endl; // 10

	v.push_back(10); // 끝에 한개(10) 추가.
					 // 이 연산은 "비싸다 ?","싸다 ?" => cheap!!!
					// 하지만 앞에 추가는 항상 "비싸다"

	std::cout << v.size()     << std::endl; // 8
	std::cout << v.capacity() << std::endl; // 10

	v.shrink_to_fit(); // 여유공간을 제거해달라.
					   // 이순간 8개짜리 메모리 새로 할당후
					   // 기존 요소 복사, 기존 버퍼는 제거.

	std::cout << v.size()     << std::endl; // 8
	std::cout << v.capacity() << std::endl; // 8

	v.push_back(20); // expensive operation!!!

	std::cout << v.size()     << std::endl; // 9
	std::cout << v.capacity() << std::endl; // VC는 기존 크기의 1.5배

	// STL의 vector는 캐패시터가 커지는 비율을 변경할수 없습니다
	// MFC등의 다른 C++ 라이브러리는 설정 가능한 경우도 있습니다.

	v.reserve(100);	// size는 변경하지 말고, capacity(메모리)만 확보..
					// 메모리 낭비는 있지만, 성능을 빨라진다.
					//						 반복자 무효화 현상(invalidate)도 줄어 든다.

	std::cout << v.size()     << std::endl; // 9
	std::cout << v.capacity() << std::endl; // 100

	// capacity 개념은 vector에만 있고 list, deque 등에는 없습니다.

	
}








