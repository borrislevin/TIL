#include "show.h"
#include <memory>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}
	~People() { std::cout << name << " 파괴" << std::endl; }

//	std::shared_ptr<People> bf; // 참조계수가 증가한다.
//	People* bf;	  // raw pointer. 참조계수와 상관 없다. 객체 파괴가 조사안됨. dangling pointer의 위험

	std::weak_ptr<People> bf; // 참조계수 증가 안함. 객체 파괴 조사 가능.
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));

//	{
		std::shared_ptr<People> sp2(new People("lee"));

		sp1->bf = sp2;
		sp2->bf = sp1;

//	}	// sp2 파괴. "lee" 객체 파괴.

	if (sp1->bf.expired() )
	{
		std::cout << "bf 가 가리키는 곳 파괴됨." << std::endl;
	}
	else
	{
		std::cout << "bf가 가리키는 곳 파괴 안됨" << std::endl;

		// 아직 객체가 살아 있으므로 이름을 꺼내고 싶다.
		// 현재 "sp1->bf" 의 정체는 weak_ptr 입니다

//		std::string s = sp1->bf->name; // error!! 왜 안될까 ???

		// wp 가 가리키는 곳이 지금 살아 있다해도..
		// 언제가는 파괴될수 있다.(wp는 소유권이 없으므로)

		// 그래서 wp는 파괴 되었는지 조사만 가능하고
		// 접근은 못한다.(-> 연산자가 재정의 안되어 있다)

		// 접근하려면 "참조계수를 늘려서 안전하게 해놓고 접근"해야 한다.

		// 결론, wp에 보관된 주소로 객체에 접근하려면
		// 다시 shared_ptr을 임시로 만들어서 사용
		// wp(sp1->bf)로 새로운 shared_ptr을 만들기.(만드는 동안 다른 shared_ptr은 파괴될수 없게
		//											한다는 의미로 "이름이 lock")
		std::shared_ptr<People> sp = sp1->bf.lock(); // 이순간 참조 계수 증가.!!

		// 이제 sp는 소유권이 있으므로 절대 안전하다.
		std::string n = sp->name;
		std::cout << "친구이름 : " << n << std::endl;

	}

}




