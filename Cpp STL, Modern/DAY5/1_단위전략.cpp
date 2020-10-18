// cafe.naver.com/cppmaster 에서 "5일차 사전소스" 받으시면 됩니다.

// Debug, x86 으로 맞추어 주세요
#include <iostream>

// 프로그램에서 메모리 할당 방식을 변경하려면 새로운 메모리 할당기를 제공하면 됩니다.
template<typename T> class MyAlloc
{
public:
	// 미리 약속된 2개의 함수를 제공합니다.
	T* allocate(int sz)  {	return static_cast<T*>(malloc(sizeof(T)* sz);	}

	void deallocate(T* p, int sz)  {	free(p);	}
};
int main()
{
	//std::allocator<int> ax; // 메모리 할당기. 
							// 메모리 할당과 해지에 필요한 함수를 제공한다.
							// C++ 표준에 있는 할당기(allocator)
	MyAlloc<int> ax;

	int* p1 = ax.allocate(10);	// 내부원리 : new int[10]
	ax.deallocate(p1, 10);		//            delete[] p1

	int* p2 = ax.allocate(10);
	ax.deallocate(p2, 10);
}





/*
int main()
{
	// 아래 처럼 작성한후, 메모리 할당 방식을 new 가 아닌 malloc으로 변경하려고 합니다
	// 코드를 몇 군데를 변경해야 할까요 ? => 여러곳의 코드가 수정되어야 합니다.
	int* p1 = new int[10];
	delete p1;

	int* p2 = new int[10];
	delete p2;
}
*/