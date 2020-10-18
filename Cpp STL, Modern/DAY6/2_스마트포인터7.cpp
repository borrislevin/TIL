#include "show.h"
#include <memory>

// 스마트 포인터에서 가장 "중요한주제"
// 반드시 이해해 두세요!!

struct People
{
	std::string name;

	People(std::string n) : name(n) {}
	~People()  { std::cout << name << " 파괴" << std::endl; }

	std::shared_ptr<People> bf; // best friend
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	std::shared_ptr<People> sp2(new People("lee"));

	// 아래 코드가 있으면 "메모리 누수" 발생.
	// "상호참조", "cycle reference" 등의 이름으로 부르는 현상
	sp1->bf = sp2;
	sp2->bf = sp1;
}


