#include "show.h"
#include <memory>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}
	~People() { std::cout << name << " 파괴" << std::endl; }

//	std::shared_ptr<People> bf; // 참조계수가 증가한다.

	People* bf;	  // raw pointer. 참조계수와 상관 없다.
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	{
		std::shared_ptr<People> sp2(new People("lee"));

		// 이제 bf는 raw pointer 이므로 sp1.get()으로 실제 주소를 꺼내야 합니다.
		sp1->bf = sp2.get();
		sp2->bf = sp1.get();
	
	} // 이순간 sp2 파괴, lee 객체는 delete 된다.

	if (sp1->bf != nullptr)  // 0은 아니지만 이미 객체는 파괴 되었다.
	{
		std::string	s = sp1->bf->name; // runtime error, 즉, dangling pointer
									// 등장!!!!! => 나쁜 코드!
	}

	// 진짜 포인터(raw pointer)의 근본적 문제점
	// => 자신이 가리키는 곳의 객체가 파괴 되었는지 조사할수 없다.
}




