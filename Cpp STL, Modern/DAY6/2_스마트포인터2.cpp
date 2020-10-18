#include <iostream>

// 1. template 으로 만들게 된다.
// 2. 얕은 복사 문제를 해결해야 한다.
//    => 즉, 복사 생성자를 만들어야 한다.
//		 깊은 복사가 아니라, "참조계수(reference counting)" 
template<typename T> 
class Ptr
{
	T* obj;
public:
	Ptr(T* p = 0) : obj(p) {}
	T* operator->() { return obj; }
	T& operator*()  { return *obj; }
	~Ptr() { delete obj; }
};

int main()
{
	Ptr<int> p1(new int);
	*p1 = 10;
	std::cout << *p1 << std::endl;

	Ptr<int> p2 = p1; // 이순간 runtime error
}


