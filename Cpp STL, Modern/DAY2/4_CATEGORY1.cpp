#include <forward_list>
#include <list>
#include <vector>

int main()
{
	// ��ũ�� ����Ʈ(linked list ) : �� ��Ұ� ������ �޸�
	// 2���� ������ �ֽ��ϴ�.
	// Single linked list : �ϳ��� ��尡 �������θ� �޸� �ּҸ� ����
	// Double linked list : �ϳ��� ��尡 �������� �޸� �ּҸ� ����
	std::forward_list<int> s1 = { 1,2,3 };  // �̱۸���Ʈ
	std::list<int>         s2 = { 1,2,3 };	// ������Ʈ

	auto p1 = s1.begin();
	auto p2 = s2.begin();
	
	// ������ ������ ��� ������
	++p1; // 1
	--p1; // 2. error. �̱۸���Ʈ�� �ݺ��ڴ� ++������
		  //		   ��尡 �������θ� �ּҸ� ����.
	++p2; // 3
	--p2; // 4

	//---------------------
	std::vector<int> v = { 1,2,3,4,5 };
	std::list<int>   s = { 1,2,3,4,5 };

	auto pv = v.begin();
	auto ps = s.begin();

	// �Ʒ� �ڵ��� ������ ������� ?
	// �ݺ��� ����
	// "++���꺸�� ������ ����� �ִ� ��츸 + ��������"
	// ��, ���ӵ� �޸��� �ݺ��ڴ� +����
	//     list�� �ݺ��ڴ� + �ȵ�

	++pv;			// 1
	++ps;			// 2
	pv = pv + 3;	// 3
	ps = ps + 3;	// 4. error

}


