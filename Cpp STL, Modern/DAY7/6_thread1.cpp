#include <iostream>
#include <thread>  // C++11 부터 지원하는 헤더
#include <chrono>
using namespace std::literals;  
// this_thread namespace 

int main()
{
	// std 안에 "this_thread" 이름 공간안에 4개의 "유틸리티성" 함수를 제공합니다.
	std::cout << std::this_thread::get_id() << std::endl; // 현재 스레드 ID


	std::this_thread::sleep_for( 3s ); // 시간 만큼 재우기

	std::cout << "AAA" << std::endl;

	std::this_thread::yield(); // 현재스레드 실행을 중지하고 대기중인 스레드 실행

}


