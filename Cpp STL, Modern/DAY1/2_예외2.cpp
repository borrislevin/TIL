// 예외 1번 복사해오세요
#include <iostream>

// C언어에서 함수의 실패 : 반환값으로 알려 준다
// 단점 1. 약속된 "-1" 이 실패의 의미 인지, 연산의 결과 인지 명확하지 않을수 있다.

//      2. 호출자가 오류를 반드시 처리할 필요가 없다. 즉, 무시할수 있다

int ConnectServer()
{
	if (1) // "실패 했다면" 의 의미 
		return -1;

	return 0;
}

int main()
{
	//ConnectServer();

	if (ConnectServer() == -1)
	{
		// 실패 처리..
		// 심각한 오류면.. 그냥 프로세스 종료
		exit(-1);
		// 아니면 오류 수정후 계속 실행
	}
}