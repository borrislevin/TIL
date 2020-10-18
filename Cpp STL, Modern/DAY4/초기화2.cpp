#include <string>
#include <vector>

void foo(std::string s)      {}
void goo(std::vector<int> v) {}

int main()
{
	// 다음중 위험해 보이는 코드는 ?
	foo("hello");	// 1. 나쁘지 않다. 되게 하자.!
					// 이 코드가 되면 s2 가 ok
	goo(10);		// 2. 위험해 보인다. 안되게 하자.

	// string은 explicit 생성자가 아님.
	std::string s1("hello");	// ok	
	std::string s2 = "hello";	// ok

	// vector(int) 생성자는 explicit
	std::vector<int> v1(10);	// ok
	std::vector<int> v2 = 10;	// error
	std::vector<int> v3 = { 10 };// ok.. 이경우는 vector(int)가 아니라
								 //		 vector(initializer_list<int>) 라는 모양.

	// 목요일에 스마트 포인터 배웁니다
	std::shared_ptr<int> sp1(new int); // ok
	std::shared_ptr<int> sp2 = new int; // error. 결국 "explicit"생성자

	// 요즘 트렌드 : explicit 가 아주 널리 사용됩니다. 위험하지 않게 하자!!
}
