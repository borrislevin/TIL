class Base 
{			
public:
	virtual void foo()  {}   
	virtual void goo(int a) {}
	virtual void hoo() {}
};

// Ŭ���� �̸����� final => "�Ļ�Ŭ���� ��ü�� ����� ����."
class Derived final : public Base
{
public:
	virtual void foo()      override final {}   // ���̻� �Ļ�Ŭ������ ������ ����.
	virtual void goo(int a) override {}
	virtual void hoo()      override {}
};

class Derived2 : public Derived
{
public:
//	virtual void foo()      override {}  // error
	virtual void goo(int a) override {}
	virtual void hoo()      override {}
};



int main()
{
}