#include <iostream>
#include <vector>

int main()
{
	int n1 = 10;

	// decltype( �ڵ� ) : �ڵ尡 ��Ÿ���� Ÿ���� ������ �޶�.
	decltype(n1) n2;  // int n2
	//<- int ->|

	decltype(n1 + n2)    s = n1 + n2; // int s = n1 + n2;
	//<-int+int��Ÿ��->|
}