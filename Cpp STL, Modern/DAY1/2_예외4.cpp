#include <iostream>

// 예외를 던질때 "1" 등을 던지지 말고. 예외 전용 타입을 만들어서 사용해라!

class DisconnectWIFI {};

class NoMemory       
{
	int size; // 현재 필요한 메모리등의 다양한 정보를 담아주면 더 좋습니다.
public:
	int getSize() { return size; }
};

int ConnectServer()
{
	if (1)
	//		throw 1;  
		throw DisconnectWIFI();   // 클래스이름뒤에()만 적어도 객체가 생성됩니다. - 내일 자세히 등장합니다.

	if (2)
		throw NoMemory();
	return 0;
}
int main()
{
	try
	{
		ConnectServer();
	}
	//catch (int n)
	catch (NoMemory e)
	{
	}
	catch (DisconnectWIFI e)
	{
//		if ( n == 1 )
		std::cout << "예외 발생" << std::endl;
	}
	std::cout << "예외를 처리하면 계속 실행가능" << std::endl;
}





