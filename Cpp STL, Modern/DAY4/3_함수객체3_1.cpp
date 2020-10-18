#include <iostream>
#include <bitset> // STL �� ���� "��Ʈ"�� �����ϴ� Ŭ����

class URandom
{
	std::bitset<10> bs;   // bs�� 10��Ʈ�� ����
public:
	URandom()
	{
//		bs.set(3); // 3��° ��Ʈ�� 1��
//		bs.reset(2);// 2��° ��Ʈ�� 0����

		bs.set();	// ��� ��Ʈ�� 1��
	}
	int operator()()
	{
		if (bs.none()) // ��� 0�̸�
			return -1;

		int v = -1;
		while ( ! bs.test( v = rand() % 10 ) );  // �ٽ�
		bs.reset(v);

		return v;
	}
	bool has_valid_number() const { return !bs.none(); } // ��ȿ�� ������ �ִ��� ����
	
	void reset() { bs.set(); } // �ٽ� ��� 1��!!
};

int main()
{
	URandom f;
	URandom urand; 

	for (int i = 0; i < 15; i++)
		std::cout << urand() << std::endl;

	if (!urand.has_valid_number())
		urand.reset();
}





