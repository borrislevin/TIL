#include <iostream>
#include <string>
#include <unordered_map>

// �̸��� "unorderd_set" ��� "hash_set" ���� �ϸ� ���� �ʾ����� ?
// C++98 : ǥ�ؿ� hash �� ������. �׷��� �ٸ� �����Ϸ� ��������� ������ hash_set �̶�� �̸�����
//			�����ϴ� ��찡 �־���.
// C++11 : hash �� �ְ� �;���. �׷���, hash_set �̶�� �̸��� �̹� ���Ǵ� �����Ϸ��� �־
//		�̸� �浹�� ���ϰ� �;���.
// set : ������ ����
// unordered_set : ���ĵ��� ���� set
// set, unordered_set : Ű���� ����
// map, unordered_map : "Ű�� - value(data)" �� ����, ���� �ٸ� ���� "dictionary" ��� �θ��ϴ�.

int main()
{
	// pair �� �����ϴ� hash 
	std::unordered_map<std::string, std::string> m = { {"mon", "������"}, {"tue", "ȭ����"} };

	// ��� �߰�
	m.emplace("wed", "������");

	m["sun"] = "�Ͽ���";
	auto p = m.find("mon");
	if (p == m.end())
		std::cout << "�˻� ����" << std::endl;
	else
		std::cout << p->first << " : " << p->second << std::endl;

//	std::hash<int> hi; // �ؽ� �Լ�.. ����Ÿ�� �޾Ƽ� ��Ŷ ��ȣ ����
//	int n = hi(100);  // �̷��� ����ϴ°� ����..

//	std::unordered_set<int> s; // "�ؽ� ���̺�" �̶�� �ڷᱸ��
//	s.insert(100);   
//	s.insert(200); // �̼��� hash<int> �� ����ؼ� ��� ������ ����
					
	// �ᱹ unorered_set �� ���������� hash<> �� ����ؼ� ��Ŷ ��ȣ ����.
}


