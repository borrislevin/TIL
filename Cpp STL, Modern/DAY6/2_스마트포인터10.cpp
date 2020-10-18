// ����Ʈ������ 2�� �����ϼ���
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

	// ���� ������/���Կ����ڸ� ����Ҽ� ���� ����.
	Ptr(const Ptr& p) = delete;
	Ptr& operator=(const Ptr&) = delete;
};

int main()
{
	Ptr<int> p1(new int);
	*p1 = 10;
	std::cout << *p1 << std::endl;

//	Ptr<int> p2 = p1; // ���� �̷��� ������� �ʰڴٸ�!!
					 // ��������� �ʿ� ����.(������尡 ��������)

	// ���簡 �ȵǹǷ� �����ϴ�. ������ (����������� )������尡 ���� ����.
	// ���簡 �ʿ��ϸ� "shared_ptr" �� ����ϸ� �ȴ�.
}


