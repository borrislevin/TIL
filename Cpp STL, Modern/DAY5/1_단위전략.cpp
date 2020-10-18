// cafe.naver.com/cppmaster ���� "5���� �����ҽ�" �����ø� �˴ϴ�.

// Debug, x86 ���� ���߾� �ּ���
#include <iostream>

// ���α׷����� �޸� �Ҵ� ����� �����Ϸ��� ���ο� �޸� �Ҵ�⸦ �����ϸ� �˴ϴ�.
template<typename T> class MyAlloc
{
public:
	// �̸� ��ӵ� 2���� �Լ��� �����մϴ�.
	T* allocate(int sz)  {	return static_cast<T*>(malloc(sizeof(T)* sz);	}

	void deallocate(T* p, int sz)  {	free(p);	}
};
int main()
{
	//std::allocator<int> ax; // �޸� �Ҵ��. 
							// �޸� �Ҵ�� ������ �ʿ��� �Լ��� �����Ѵ�.
							// C++ ǥ�ؿ� �ִ� �Ҵ��(allocator)
	MyAlloc<int> ax;

	int* p1 = ax.allocate(10);	// ���ο��� : new int[10]
	ax.deallocate(p1, 10);		//            delete[] p1

	int* p2 = ax.allocate(10);
	ax.deallocate(p2, 10);
}





/*
int main()
{
	// �Ʒ� ó�� �ۼ�����, �޸� �Ҵ� ����� new �� �ƴ� malloc���� �����Ϸ��� �մϴ�
	// �ڵ带 �� ������ �����ؾ� �ұ�� ? => �������� �ڵ尡 �����Ǿ�� �մϴ�.
	int* p1 = new int[10];
	delete p1;

	int* p2 = new int[10];
	delete p2;
}
*/