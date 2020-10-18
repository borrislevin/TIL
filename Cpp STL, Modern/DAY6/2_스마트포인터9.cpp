#include "show.h"
#include <memory>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}
	~People() { std::cout << name << " �ı�" << std::endl; }

//	std::shared_ptr<People> bf; // ��������� �����Ѵ�.
//	People* bf;	  // raw pointer. ��������� ��� ����. ��ü �ı��� ����ȵ�. dangling pointer�� ����

	std::weak_ptr<People> bf; // ������� ���� ����. ��ü �ı� ���� ����.
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));

//	{
		std::shared_ptr<People> sp2(new People("lee"));

		sp1->bf = sp2;
		sp2->bf = sp1;

//	}	// sp2 �ı�. "lee" ��ü �ı�.

	if (sp1->bf.expired() )
	{
		std::cout << "bf �� ����Ű�� �� �ı���." << std::endl;
	}
	else
	{
		std::cout << "bf�� ����Ű�� �� �ı� �ȵ�" << std::endl;

		// ���� ��ü�� ��� �����Ƿ� �̸��� ������ �ʹ�.
		// ���� "sp1->bf" �� ��ü�� weak_ptr �Դϴ�

//		std::string s = sp1->bf->name; // error!! �� �ȵɱ� ???

		// wp �� ����Ű�� ���� ���� ��� �ִ��ص�..
		// �������� �ı��ɼ� �ִ�.(wp�� �������� �����Ƿ�)

		// �׷��� wp�� �ı� �Ǿ����� ���縸 �����ϰ�
		// ������ ���Ѵ�.(-> �����ڰ� ������ �ȵǾ� �ִ�)

		// �����Ϸ��� "��������� �÷��� �����ϰ� �س��� ����"�ؾ� �Ѵ�.

		// ���, wp�� ������ �ּҷ� ��ü�� �����Ϸ���
		// �ٽ� shared_ptr�� �ӽ÷� ���� ���
		// wp(sp1->bf)�� ���ο� shared_ptr�� �����.(����� ���� �ٸ� shared_ptr�� �ı��ɼ� ����
		//											�Ѵٴ� �ǹ̷� "�̸��� lock")
		std::shared_ptr<People> sp = sp1->bf.lock(); // �̼��� ���� ��� ����.!!

		// ���� sp�� �������� �����Ƿ� ���� �����ϴ�.
		std::string n = sp->name;
		std::cout << "ģ���̸� : " << n << std::endl;

	}

}




