#include <iostream>

// ���ܸ� ������ "1" ���� ������ ����. ���� ���� Ÿ���� ���� ����ض�!

class DisconnectWIFI {};

class NoMemory       
{
	int size; // ���� �ʿ��� �޸𸮵��� �پ��� ������ ����ָ� �� �����ϴ�.
public:
	int getSize() { return size; }
};

int ConnectServer()
{
	if (1)
	//		throw 1;  
		throw DisconnectWIFI();   // Ŭ�����̸��ڿ�()�� ��� ��ü�� �����˴ϴ�. - ���� �ڼ��� �����մϴ�.

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
		std::cout << "���� �߻�" << std::endl;
	}
	std::cout << "���ܸ� ó���ϸ� ��� ���డ��" << std::endl;
}





