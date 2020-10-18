#include <iostream>

// 스마트포인터 개념 : 1990년대 말에 등장
// C++98 에는 제공하지 않음.
// "boost" 라는 라이브러리에서 2000년대 초반 부터"shared_ptr" 제공. => C++11 에서 공식 표준으로 채택!
// 참고 : boost.org

// C++11의 스마트포인터를 사용하려면 필요한 헤더
#include <memory>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
};

int main()
{
	// 핵심 1. 생성자가 explicit 이다.
	std::shared_ptr<int> p1(new int);   // ok
//	std::shared_ptr<int> p2 = new int;	// error 


	
	// 핵심 2. 스마트 포인터의 크기
	std::cout << sizeof(p1)   << std::endl; // 일반적으로 "진짜 포인터(raw pointer) 의 2배" 크기
											// 32비트 환경 "8byte"
	std::cout << sizeof(int*) << std::endl; // 32비트 환경 "4byte"


	// 핵심 3. -> 와 . 연산자
	std::shared_ptr<Car> sp1(new Car);
	std::shared_ptr<Car> sp2 = sp1;

	// 스마트 포인터는 사실은 "포인터가 아닌 객체", 하지만 -> 연산자 재정의.
	// -> : 대상체(Car)의 멤버 함수에 접근
	sp1->Go();

	// . : shared_ptr 의 멤버 함수
	int n = sp1.use_count(); // 참조계수값, 2
	Car* p = sp1.get();      // 자신이 가리키는 객체의 실제 주소
	sp1.reset();			 // sp1 = nullptr 의 의미.

	std::cout << n << std::endl; // 2
}



