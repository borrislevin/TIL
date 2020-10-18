#include <iostream>

// ����Ʈ������ ���� : 1990��� ���� ����
// C++98 ���� �������� ����.
// "boost" ��� ���̺귯������ 2000��� �ʹ� ����"shared_ptr" ����. => C++11 ���� ���� ǥ������ ä��!
// ���� : boost.org

// C++11�� ����Ʈ�����͸� ����Ϸ��� �ʿ��� ���
#include <memory>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
};

int main()
{
	// �ٽ� 1. �����ڰ� explicit �̴�.
	std::shared_ptr<int> p1(new int);   // ok
//	std::shared_ptr<int> p2 = new int;	// error 


	
	// �ٽ� 2. ����Ʈ �������� ũ��
	std::cout << sizeof(p1)   << std::endl; // �Ϲ������� "��¥ ������(raw pointer) �� 2��" ũ��
											// 32��Ʈ ȯ�� "8byte"
	std::cout << sizeof(int*) << std::endl; // 32��Ʈ ȯ�� "4byte"


	// �ٽ� 3. -> �� . ������
	std::shared_ptr<Car> sp1(new Car);
	std::shared_ptr<Car> sp2 = sp1;

	// ����Ʈ �����ʹ� ����� "�����Ͱ� �ƴ� ��ü", ������ -> ������ ������.
	// -> : ���ü(Car)�� ��� �Լ��� ����
	sp1->Go();

	// . : shared_ptr �� ��� �Լ�
	int n = sp1.use_count(); // ���������, 2
	Car* p = sp1.get();      // �ڽ��� ����Ű�� ��ü�� ���� �ּ�
	sp1.reset();			 // sp1 = nullptr �� �ǹ�.

	std::cout << n << std::endl; // 2
}



