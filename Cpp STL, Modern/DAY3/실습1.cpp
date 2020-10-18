// �ǽ�1.cpp
#include <iostream>
#include <sstream>
#include <string>

// ��ü���� ���� 1. ���α׷��� ����� �� �м��ؼ� �ʿ��� Ÿ���� ���Ǳ�� ���� �Ѵ�.
class People
{
	std::string name;
	int         age;
	std::string address;
public:
	People(const std::string& n, int a, const std::string& addr = "UNKNOWN")
		: name(n), age(a), address(addr) {}

	// private ����� ���� getter �� setter�� ����ؾ� �մϴ�.
	std::string  get_name() const { return name; }
	std::string  get_addr() const { return address; }
	int          get_age()  const { return age; }

	// setter�� �ʿ��� ����� ���ؼ��� ���� �ְ� ����.

	// �پ��� ��ƿ��Ƽ�� �Լ�
	// to_string() ��ü�� ���¸� ���ڿ��� ��ȯ�ϴ� �Լ�
	std::string to_string() const
	{
		std::ostringstream oss;
		oss << name << "(" << age << ", " << address << ")";
		return oss.str();
	}
};
int main()
{
//	People p; // ���������� �̷��� ����Ҽ� �ְ� �ϴ°� ������� ? => �ȵǰ� �ؾ� �մϴ�.
	People p("ȫ�浿", 20, "���ϸ�");

	std::string s = p.to_string();
	std::cout << s << std::endl;
}

