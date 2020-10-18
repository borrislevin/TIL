class Base 
{			
public:
	virtual void foo()  {}   
	virtual void goo(int a) {}
	virtual void hoo() {}
};

// 클래스 이름뒤의 final => "파생클래스 자체를 만들수 없다."
class Derived final : public Base
{
public:
	virtual void foo()      override final {}   // 더이상 파생클래스가 재정의 못함.
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