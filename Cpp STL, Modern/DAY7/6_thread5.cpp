#include <iostream>
#include <thread> 
#include <chrono>
#include <future>
using namespace std::literals;

// C++ STL  로 스레드 만드는 방법
// 1. std::thread 클래스 사용 - 가장 기본적인 방법
//	  단점 : 스레드 함수의 반환값을 얻기가 쉽지 않다.

// 2. std::async() 함수 사용 

int foo()
{
	std::cout << "foo : " << std::this_thread::get_id() << std::endl;
	std::this_thread::sleep_for(10s);
	return 100;
}
int main()
{
//	std::thread t(&foo);
	std::future<int> ret = std::async(std::launch::async, foo); // foo를 비동기(스레드)로 실행해 달라

	std::cout << "main 은 계속실행됩니다." << std::endl;

	// 계속 실행하다가, 결과가 필요 하면 "미래 객체" 에서 꺼내면 됩니다

	int n = ret.get(); // 이순간 "foo" 가 아직 종료되지 않았으면 대기하게 됩니다.
	std::cout << "결과 : " << n << std::endl;
}
// www.isocpp.org  접속해 보세요.. 왼쪽 "Current ISO C++ Status"


// extern "C"







