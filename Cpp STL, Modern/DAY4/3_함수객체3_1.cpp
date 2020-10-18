#include <iostream>
#include <bitset> // STL 이 가진 "비트"를 관리하는 클래스

class URandom
{
	std::bitset<10> bs;   // bs는 10비트를 관리
public:
	URandom()
	{
//		bs.set(3); // 3번째 비트만 1로
//		bs.reset(2);// 2번째 비트만 0으로

		bs.set();	// 모든 비트를 1로
	}
	int operator()()
	{
		if (bs.none()) // 모두 0이면
			return -1;

		int v = -1;
		while ( ! bs.test( v = rand() % 10 ) );  // 핵심
		bs.reset(v);

		return v;
	}
	bool has_valid_number() const { return !bs.none(); } // 유효한 난수가 있는지 조사
	
	void reset() { bs.set(); } // 다시 모두 1로!!
};

int main()
{
	URandom f;
	URandom urand; 

	for (int i = 0; i < 15; i++)
		std::cout << urand() << std::endl;

	if (!urand.has_valid_number())
		urand.reset();
}





