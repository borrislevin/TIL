#include <iostream>

// 아래 코드가 "참조계수(reference counting)" 
// 기반 "스마트 포인터" 입니다.
template<typename T>
class Ptr
{
	T* obj;
	int* ref;
public:
	Ptr(T* p = 0) : obj(p) 
	{
		ref = new int;
		*ref = 1;
	}
	// 참조계수 기반의 복사 생성자
	Ptr(const Ptr& p)
		: obj(p.obj), ref(p.ref) // 모든 멤버 복사후
	{
		++(*ref); // 참조계수 증가.
	}
	   	 

	T* operator->() { return obj; }
	T& operator*() { return *obj; }


	~Ptr() 
	{
		// 참조계수를 1감소하고 0인 경우만
		// 자원과 참조계수 변수를 제거.
		if (--(*ref) == 0)
		{
			delete obj;
			delete ref;
		}
	}
};

int main()
{
	Ptr<int> p1(new int);
	Ptr<int> p2 = p1; 
}


