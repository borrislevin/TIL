#include <iostream>
#include <thread>
#include <algorithm>
#include <execution>
#include <chrono>
using namespace std::literals;

void foo(int n)
{
	std::cout << n << " : " << std::this_thread::get_id() << std::endl;
	std::this_thread::sleep_for( 1s ); // 작업 수행
}
int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 한개의 CPU가 모든 데이타 처리
	//std::for_each(x, x + 10, foo);

	// 현재 실행환경에서 CPU가 몇개인지 파악해서
	// 최상의 스레드 갯수를 결정해서 병렬로 데이타을 처리해 달라
	// "STL 병렬 알고리즘 라이브러리" - C++17 부터
	std::for_each(std::execution::par, x, x + 10, foo);
	
	
}

// 프로젝트메뉴 => 속성 메뉴 에서   "C/C++" "명령줄"에서

// /std:c++latest