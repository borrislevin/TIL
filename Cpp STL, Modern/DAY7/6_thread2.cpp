#include <iostream>
#include <thread> 
#include <chrono>
using namespace std::literals;

// C++ STL 스레드 사용이 장점
// 1. 모든 OS 에서 공통적으로 실행될수 있다.
//    리눅스 프로그램 : pthread_create( , 스레드 함수 ) 함수
//    윈도우 프로그램 : CreateThread() 함수   
//    OS마다 코드가 달라진다.

// 2. C로 만드는 스레드 함수는 모양에 제약이 있다.
//   윈도우/리눅스 모두 : 스레드 함수는 반드시 인자가 void* 한개 이어야 한다.

void foo(int n, double d, int c)
{
	std::cout << std::this_thread::get_id() << std::endl;

	std::this_thread::sleep_for(10s);

	std::cout << "foo finish" << std::endl;
}




int main()
{
	// C++로 스레드 생성하는 방법
	std::thread t1(&foo, 3, 4.2, 10);    // 이순간 스레드가 생성되고 foo 실행
									// 객체생성만 하면 스레드가 실행됨		
									// t1.start() 라는 코드는 필요 없다.

	std::cout << "main : " << std::this_thread::get_id() << std::endl;

//	t1.join(); // 리눅스 : pthread_join()
			   // 윈도우 : WaitForSingleObject()
			   // 스레드가 종료 될때까지 대기
	t1.detach(); // 기다리지 않겠다..
				// 주스레드 종료시,, 실행중인 모든스레드는 강제 종료
}


