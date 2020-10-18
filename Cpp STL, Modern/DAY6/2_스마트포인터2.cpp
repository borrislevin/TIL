#include <iostream>

// 1. template ���� ����� �ȴ�.
// 2. ���� ���� ������ �ذ��ؾ� �Ѵ�.
//    => ��, ���� �����ڸ� ������ �Ѵ�.
//		 ���� ���簡 �ƴ϶�, "�������(reference counting)" 
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

	Ptr<int> p2 = p1; // �̼��� runtime error
}


