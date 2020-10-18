#include <iostream>

// Step 4. ���� �Ϲ�ȭ �ǰ�.. => �ణ ��ٷο� ����.

// �Ʒ� ó�� ����� �������� 2�� �Դϴ�.
// 1. ������ Ÿ�԰� ����� Ÿ���� �����˴ϴ�.
//    double �迭���� int �˻��� �ȵ˴ϴ�. 

// 2. T* ��� �ϸ� �ݵ�� "Raw ������" �� ����Ҽ� �ֽ��ϴ�.
//    ����Ʈ ������ ���� ����Ҽ� �����ϴ�.

//template<typename T>
//T* find(T* first, T* last, T c)
// �Ʒ� �ڵ��� ����
// 1. ������ ��Ÿ���� ���� "�ݵ�� ������" �� �ʿ�� ����.
// 2. ������ Ÿ�԰� ����� Ÿ���� �������� �ʴ´�.
//     double �迭���� float, int � �˻� ����.

template<typename T1, typename T2>
T1 find(T1 first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}




int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

//	double* p = find<double*, int>(x, x + 10, 5 ); // ��Ȯ�� ǥ���

	double* p = find(x, x + 10, 5); // find(double*, double*, int) �� �Լ� ����




	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}




