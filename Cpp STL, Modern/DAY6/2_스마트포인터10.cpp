// 스마트포인터 2번 복사하세요
#include <iostream>

template<typename T>
class Ptr
{
	T* obj;
public:
	Ptr(T* p = 0) : obj(p) {}
	T* operator->() { return obj; }
	T& operator*() { return *obj; }
	~Ptr() { delete obj; }

	// 복사 생성자/대입연산자를 사용할수 없게 하자.
	Ptr(const Ptr& p) = delete;
	Ptr& operator=(const Ptr&) = delete;
};

int main()
{
	Ptr<int> p1(new int);
	*p1 = 10;
	std::cout << *p1 << std::endl;

//	Ptr<int> p2 = p1; // 절대 이렇게 사용하지 않겠다면!!
					 // 참조계수가 필요 없다.(오버헤드가 없어진다)

	// 복사가 안되므로 불편하다. 하지만 (참조계수등의 )오버헤드가 전혀 없다.
	// 복사가 필요하면 "shared_ptr" 을 사용하면 된다.
}


