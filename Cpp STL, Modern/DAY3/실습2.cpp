// �ǽ�1.cpp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>

class People
{
	std::string name;
	int         age;
	std::string address;
public:
	People(const std::string& n, int a, const std::string& addr = "UNKNOWN")
		: name(n), age(a), address(addr) {}

	std::string  get_name() const { return name; }
	std::string  get_addr() const { return address; }
	int          get_age()  const { return age; }

	std::string to_string() const
	{
		std::ostringstream oss;
		oss << name << "(" << age << ", " << address << ")";
		return oss.str();
	}
};
int main()
{
	// 3���� �ǽ�.txt �غ�����
	std::vector<People> v;

	// DB.txt ������ ��������, �м��ؼ� �Ʒ� �κ��� �ڵ带 ��ü�� ������
	//-----------------------------
	v.emplace_back("ȫ�浿", 20, "����");
	v.emplace_back("��ö��", 22, "����");
	v.emplace_back("�̿���", 23, "����");
	v.emplace_back("��ö��", 32, "����");
	v.emplace_back("��ö��", 43, "����");
	v.emplace_back("AAA", 60);
	v.emplace_back("BBB", 14);
	v.emplace_back("CCC", 30);
	v.emplace_back("DDD", 32);
	v.emplace_back("EEE", 40);
	//---------------------------------------

	// �̸��� �Է¹޾Ƽ� ����� ã����, ������ ���
	std::cout << "ã�� ����� >> ";
	std::string name;
	std::cin >> name;
	auto p = std::find_if(v.begin(), v.end(), [name](const People& p) { return p.get_name() == name; });

	if (p == v.end())
	{
		std::cout << "�ش� ����� ��ϵǾ� ���� �ʽ��ϴ�." << std::endl;
	}
	else
	{
		std::string s = p->to_string() ;  // p�� ����ؼ� to_string()�� ȣ���� ������
								// �ݺ����� �ǹ�(��Ҹ� ����Ű�� "������" ��Ȱ)�� �� �����Ͻø� �˴ϴ�

		std::cout << s << std::endl;
	}



	// �˻� ��� ���

	// �̸������� ������, ��� ��� ���

	// ���̼����� ������, ��� ��� ���
}
// 2�� ������ �ǹ�  DB.txt  ������ ����� �Ʒ� �������� ä�켼��
//ȫ�浿 20 ����� ������
//��ö�� 30 ��⵵ ���ν� ���ϸ�
//�̿��� 34 ���ֵ� �������� 

// �� ���Ͽ��� �Է¹����� v �� ä�켼��..

