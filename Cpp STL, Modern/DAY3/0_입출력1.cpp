

// cafe.naver.com/cppmaster �Խ��ǿ���

// "3���� ���� �ҽ�" �����ø� �˴ϴ�.

// x86, Debug �� ������ �ּ���

// ���� ���� ������ ����

// ������Ʈ/�Ӽ� �޴����� "Windows SDK ����" �� "�÷��� ���� ����" ������ �ּ���







#include <iostream>
#include <string>

// cin, cout �� ��ü
// >> �� std::getline �Լ�

/*
namespace std
{
	class ostream
	{
	public:
		ostream& operator<<(const char* s) { printf("%s", s); return *this; };
	};
	ostream cout; // �ᱹ cout�� ���� ������ ������� ��ü
}
*/
int main()
{
	printf("hello\n"); // C ���! => �Լ�

	std::cout << "hello" << std::endl; // cout ��ü.. ��ü
//	std::cout.operator<<("hello");     // �ᱹ �� ������ ����

	// endl�� �Լ� �Դϴ�.
//	std::cout << std::endl; 
//	std::endl(std::cout); // �� �ڵ�� ����


	// �ٽ� : "std::cin >> s" �� "std::getline(std::cin, s)" �� ������

	std::string s;
//	std::cin >> s;  // "aaa bbb" ��� �Է��ϸ� => "aaa" ��, �ܾ� �Է�

	std::getline(std::cin, s); // ���� �Է�

	std::cout << s << std::endl; // 1) "aaa bbb"
								 // 2) "aaa"
}



