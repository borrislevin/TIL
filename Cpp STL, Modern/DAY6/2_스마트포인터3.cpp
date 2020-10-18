#include <iostream>

// �Ʒ� �ڵ尡 "�������(reference counting)" 
// ��� "����Ʈ ������" �Դϴ�.
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
	// ������� ����� ���� ������
	Ptr(const Ptr& p)
		: obj(p.obj), ref(p.ref) // ��� ��� ������
	{
		++(*ref); // ������� ����.
	}
	   	 

	T* operator->() { return obj; }
	T& operator*() { return *obj; }


	~Ptr() 
	{
		// ��������� 1�����ϰ� 0�� ��츸
		// �ڿ��� ������� ������ ����.
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


