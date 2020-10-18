#include <iostream>
#include <string>
// 규칙 1.
// 복사 생성자와 move 생성자를 모두 만들지 않으면
// "컴파일러가 모두 만들어 준다."
// 컴파일러 구현 : 복사 생성자에서는 모든 멤버 복사
//                 move 생성자에서는 모든 멤버 move - 너무좋은 기능

// 규칙 2.
// 사용자가 복사 생성자만 만들면 => move 생성자가 없어도 컴파일러는 만들어 주지 않는다.
// std::move() 사용시 "사용자가 만든 복사 생성자" 사용.!

struct People
{
	std::string name = "AAA";
	People() = default;

	People(const People& p) : name(p.name)
	{
		std::cout << "사용자가 만든 복사 생성자 사용" << std::endl;
	}
};

int main()
{
	People p1;
	People p2 = p1; // 복사

	std::cout << p1.name << std::endl; // "AA"

	People p3;
	People p4 = std::move(p3); // 이동

	std::cout << p3.name << std::endl; // ""

	// 위 코드에서 ? 가 어떻게 나오길 원하는지 생각해 보세요.
}