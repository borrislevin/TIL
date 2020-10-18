#include <memory>
#include <iostream>

int main()
{
	// C++���� 3���� ����Ʈ �����Ͱ� �ֽ��ϴ�.

	// 1. shared_ptr
	std::shared_ptr<int> sp1(new int);
	std::shared_ptr<int> sp2 = sp1;     // ������� ����

	// 2. weak_ptr
	std::shared_ptr<int> sp(new int);
	std::weak_ptr<int> wp = sp;        // ������� ���� ����

	// 3. unique_ptr
	std::unique_ptr<int> up1(new int); // �ڿ��� ����.. up1�� �ڿ��� ����ų�� �ִ�.
//	std::unique_ptr<int> up2 = up1;    // ������ ����

	std::cout << sizeof(sp) << std::endl; // shared_ptr   8
	std::cout << sizeof(up1) << std::endl; // shared_ptr   4
											// �׸��� ������ "������� �޸�"�� �����ϴ�.



	// ���� "��ü�� �ڵ� ���� ���������" �ʿ� �ϴٸ� unique_ptr�� ����ϼ���
	// => ������, ������, ������嵵 �����ϴ�.

	// �������� ���� ����Ʈ ������ : weak_ptr
	// �������� ���� : unique_ptr
	// �������� ���� : shared_ptr
}