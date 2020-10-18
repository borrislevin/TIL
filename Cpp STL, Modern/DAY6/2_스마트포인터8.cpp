#include "show.h"
#include <memory>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}
	~People() { std::cout << name << " �ı�" << std::endl; }

//	std::shared_ptr<People> bf; // ��������� �����Ѵ�.

	People* bf;	  // raw pointer. ��������� ��� ����.
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	{
		std::shared_ptr<People> sp2(new People("lee"));

		// ���� bf�� raw pointer �̹Ƿ� sp1.get()���� ���� �ּҸ� ������ �մϴ�.
		sp1->bf = sp2.get();
		sp2->bf = sp1.get();
	
	} // �̼��� sp2 �ı�, lee ��ü�� delete �ȴ�.

	if (sp1->bf != nullptr)  // 0�� �ƴ����� �̹� ��ü�� �ı� �Ǿ���.
	{
		std::string	s = sp1->bf->name; // runtime error, ��, dangling pointer
									// ����!!!!! => ���� �ڵ�!
	}

	// ��¥ ������(raw pointer)�� �ٺ��� ������
	// => �ڽ��� ����Ű�� ���� ��ü�� �ı� �Ǿ����� �����Ҽ� ����.
}




