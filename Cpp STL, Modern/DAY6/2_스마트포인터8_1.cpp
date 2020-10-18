#include <iostream>

class Car {};

int main()
{
	// shared_ptr : ������� ����, ���� ����, �׻� �����մϴ�.
	std::shared_ptr<Car> sp1(new Car);
	std::shared_ptr<Car> sp2 = sp1;

	std::cout << sp1.use_count() << std::endl;  // 2

	// sp1�� �ڿ� ����
	sp1 = nullptr; // �Ǵ� sp1.reset()

	// sp2�� � ��Ȳ������ �����ϰ� ��밡���մϴ�.
	// �׷���, "shared_ptr"�� "�������� ������ ����Ʈ ������" ��� �մϴ�.
	// sp2->Go();
	//--------------------------------------------------------------

	// raw pointer : ��������� ����, ���� ���� ����. Dangling pointer�� ���ɼ� ����.
	std::shared_ptr<Car> sp3(new Car);
	Car* p = sp3.get();

	sp3 = nullptr;

	// �ڿ��� �ı� �Ǿ����� p�� �� ����� �˼� �����ϴ�
	if (p != nullptr) // ���̳������� �׷��� ��ü���ı��� ����
	{
		// p ���� runtime error
	}
	//------------------------------------
	// std::weak_ptr : ������� ���� ����, ������� ����.
	//					��ü �ı����� ���� ����
	std::shared_ptr<Car> sp4(new Car);
	std::weak_ptr<Car> wp = sp4;

	std::cout << sp4.use_count() << std::endl;

	sp4 = nullptr;

	if (wp.expired())  // �� ��� ������ Raw Pointer ���� ����. Dangling Pointer ����.
	{
		std::cout << "��ü�� �̹� �ı� �Ǿ����ϴ�." << std::endl;
	}

	// ���� weak_ptr�� ����ϳ��� ?
	// => ��ȣ ���� ���� ������ �߻��� Ȯ���� �ִٸ�
	//    ��������� �������� �ʴ�(���� ���� ���� �ʴ�) ����Ʈ ������ �ʿ�
	//    "�� ��쿡 ���"
	//	  ��κ��� shared_ptr ���



}








