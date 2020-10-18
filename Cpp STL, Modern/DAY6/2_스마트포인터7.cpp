#include "show.h"
#include <memory>

// ����Ʈ �����Ϳ��� ���� "�߿�������"
// �ݵ�� ������ �μ���!!

struct People
{
	std::string name;

	People(std::string n) : name(n) {}
	~People()  { std::cout << name << " �ı�" << std::endl; }

	std::shared_ptr<People> bf; // best friend
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	std::shared_ptr<People> sp2(new People("lee"));

	// �Ʒ� �ڵ尡 ������ "�޸� ����" �߻�.
	// "��ȣ����", "cycle reference" ���� �̸����� �θ��� ����
	sp1->bf = sp2;
	sp2->bf = sp1;
}


