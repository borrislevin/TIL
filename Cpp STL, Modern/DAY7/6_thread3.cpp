#include <iostream>
#include <thread>
#include <mutex> // 공유자원 보호

// 지역변수는 스레드당 한개씩 별도로 만들어진다
// => "스레드에 안전하다"
// => 여러 스레드가 함수를 동시에 실행해도 안전하다는 것.

/*
void foo()
{
	int x = 0;
	x = 100;
}
*/

// C++11 부터는 다양한 동기화 도구도 제공합니다.
std::mutex m;

int x = 0;

void foo()
{
	m.lock();

	x = 100;   // 파일 열기 라고가정
	x = x + 1; // 파일 쓰기
	printf("%d\n", x); // 파일 닫기.

	m.unlock();
}

int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);

	t1.join();
	t2.join();
}

