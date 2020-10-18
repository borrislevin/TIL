class Base
{
public:
	virtual void foo() {}
	virtual void goo(int a) {}
	virtual void hoo() {}
};
/*
class Derived : public Base
{
public:
	// ���� �Լ� �����ǽ� �Ǽ�(��Ÿ)�� �־���.
	// ����� ������ ����.!!
	virtual void fooo() {}
	virtual void goo(double a) {}
	virtual void hoo() const  {}
};
*/
class Derived : public Base
{
public:
	// override�� ���̸� �Ǽ�(��Ÿ)�ÿ� ���� �߻�
	// => "������ ���Ͽ��� �����Լ��� ���� ���� ����.. �� �����ϼ���"
	virtual void fooo()        override {}
	virtual void goo(double a) override {}
	virtual void hoo() const   override {}
};

int main()
{
}