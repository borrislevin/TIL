#include <iostream>

// 함수객체는 "상태"를 가질수 있다.
// => "멤버 데이타"가 있다는 의미.. 

class URandom
{
	int history[10];
public:
	int operator()() 
	{
		int v = rand() % 10;

		return v;
	}
};

int main()
{
	URandom f;
	URandom urand; // urand는 함수와 동일하게 사용가능

	for (int i = 0; i < 10; i++)
		std::cout << urand() << std::endl;
}





