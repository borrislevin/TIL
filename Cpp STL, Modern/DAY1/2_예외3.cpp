#include <iostream>

// 예외(exception)
// 1. 반환값과 실패의 전달을 분리하자
// 2. 호출자는 실패의 전달을 무시할수 없다.

// 문법
// 1. 실패시 "throw" 를 사용해서 던진다.
// 2. 호출자는 던져진 예외를 처리하지 않으면 프로세스가 종료 된다.
// 3. "try ~ catch" 구문으로 예외를 잡아서 처리한다.

int ConnectServer()
{
	if (1)
		throw 1;    // 실패시 예외를 "던진다"

	return 0;
}
int main()
{
	// 예외 가능성이 있는 함수 호출시 try{} 블럭을 설치 하고, catch 로 받게 됩니다.
	try
	{
		ConnectServer();
	}
	catch (int n)
	{
		std::cout << "예외 발생" << std::endl;
		// 여기서 문제점 파악후, "메세지 띄우고 종료시키던지(exit() 호출)" 
		// 아니면 문제점 해결
	}
	std::cout << "예외를 처리하면 계속 실행가능" << std::endl;
}





