#include <iostream>
#include <vector>

int main()
{
	int n1 = 10;

	// decltype( 코드 ) : 코드가 나타내는 타입을 조사해 달라.
	decltype(n1) n2;  // int n2
	//<- int ->|

	decltype(n1 + n2)    s = n1 + n2; // int s = n1 + n2;
	//<-int+int의타입->|
}