#include <list> 
#include <iostream>
#include <algorithm> // ���⿡ std::find()�� �ֽ��ϴ�

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p1 = x;      // �迭�� �����ּ�
	int* p2 = x + 10; // ������ ���� ����� �ּ�

	// �迭 ��ü���� 3�� �˻�
	int* p3 = std::find(x, x + 10, 3);

	//---------------------------------------
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p4 = s.begin(); // list�� 1��° ��Ҹ� ����Ű�� �ݺ���(������ ��Ȱ�� ��ü)
	auto p5 = s.end();   // list�� ������ ���� ��Ҹ� ����Ű�� �ݺ���

	// list ��ü���� 3�� ã�ƶ�!! ? ä�������� p4, p5 ������� ����, ���� ���� ������
	auto ret = std::find( s.begin(), s.end() , 3);

	if (ret == s.end() )
		std::cout << "�˻� ����" << std::endl;
	else
		std::cout << "�˻� ���� : " << *ret << std::endl;
}




