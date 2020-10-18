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
	// 가상 함수 재정의시 실수(오타)가 있었다.
	// 빌드시 에러가 없다.!!
	virtual void fooo() {}
	virtual void goo(double a) {}
	virtual void hoo() const  {}
};
*/
class Derived : public Base
{
public:
	// override를 붙이면 실수(오타)시에 에러 발생
	// => "디자인 패턴에서 가상함수가 아주 많이 등장.. 꼭 적용하세요"
	virtual void fooo()        override {}
	virtual void goo(double a) override {}
	virtual void hoo() const   override {}
};

int main()
{
}