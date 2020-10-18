#include <iostream>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
	~Car()    { std::cout << "~Car" << std::endl; }
};

// 아래 클래스가 핵심 입니다.
// 개념 : 임의의 객체가 다른 타입의 포인터 역활을 하는 것.
// 원리 : -> 와 * 연산자를 재정의해서 "포인터 처럼 동작하도록" 만든것
// 장점 : 포인터 처럼 보이지만, 객체이므로 "생성/복사/대입/소멸" 의 과정에서 사용자가 기능을 추가할수있다
//	      대표적 활용기술은 "소멸자에서 자원 삭제" 기능.
class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}

	Car* operator->() { return obj; }
	Car& operator*()  { return *obj; } // 왜 참조리턴인지는
									// 오늘 4교시쯤 등장

	~Ptr() { delete obj; }
};
int main()
{
//	Car* p1 = new Car; // p1은 포인터.  p1 파괴시 아무일도 일어나지 않는다.
					   // 사용자는 언제가는 반드시 delete p1 해야 한다.

//	Ptr  p2 = new Car; // p2는 포인터처럼 사용할수 있지만, 정체는 객체. 
						// 생성/복사/대입/파괴 시에 약속된 함수가 호출.. 사용자가 특정 기능추가 가능.
						// Ptr 의 소멸자에서 delete 코드가 있으면 자동삭제 가능.


	Ptr p = new Car; // Ptr p( new Car ) 로 생각하는게 이해 하기 쉽습니다.

	p->Go(); // ( p.operator->()) Go() 의 모양인데.. 컴파일러는
			 // ( p.operator->())->Go() 처럼 해석해 줍니다.
			 // ( 1000번지 )->Go()

	(*p).Go(); // 이 표기법도 지원해야 합니다.
				// ( p.operator*()).Go() 
}



