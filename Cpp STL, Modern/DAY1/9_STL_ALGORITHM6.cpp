// 9_STL_ALGORITHM6
#include <iostream>
#include <algorithm> // �̾ȿ� �տ��� ����Ͱ� ������ std::find() �Լ��� �ֽ��ϴ�

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// x�迭 ��ü���� 15�� �˻��ϼ���
	int* p = std::find(x , x + 10 , 15 );

	if ( p == x+10 )
		std::cout << "�˻�����" << std::endl;
	else
		std::cout << "�˻� ���� : " << *p << std::endl;
}