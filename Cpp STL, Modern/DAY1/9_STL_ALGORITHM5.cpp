#include <iostream>

// Step 5. �˻� ���н� ��ȯ�� ����

// nullptr �� ��ȯ���� ���� "last"�� ��ȯ����.

// ���� 1. find ������ ���� �����ϰ� ��������.
//      2. find() ��ȯ���� �ᱹ ���� �˻� ������ ������ �ȴ�.

// �Ʒ� �Լ��� "C++ ǥ�ؿ� �̹� �ִ� std::find" ��� �Լ� �Դϴ�.

template<typename T1, typename T2>
T1 find(T1 first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;

	return first; //  == last ? nullptr : first;
}




int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// �Ʒ� �ڵ忡��
	// �˻� ������ "x+3"�� ���ü� ����.
	// �˻� ���н� "x+3"�� ��ȯ�ϸ� ��� ?
	double* p = find(x, x + 3, 5); 




	if (p == x+3)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}




