#include <iostream>
#include <fstream>
#include <string>

// C++ ǥ��
/*
namespace std
{
	// <iostream> ���
	class ostream {};  // ǥ�� ���
	class istream {};  // ǥ�� �Է�
	ostream cout;
	istream cin;

	// <fstream> ���
	class ofstream : public ostream {}; // ǥ�� ���� ���
	class ifstream : public istream {}; // ǥ�� ���� �Է�
}
*/
/*
int main()
{
	std::string s;
//	std::cin >> s; // ǥ�� �Է�(Ű����)���� �Է�

	std::ifstream fin("0_�����2.cpp"); // �Է��� ���� ���� ��ü

//	fin >> s; // ���Ϸ� ���� �Ѵܾ� �Է�

//	std::getline(fin, s);		// ���Ϸ� ���� ���� �Է�.  �����1.cpp �ҽ� �����ϼ���


	while( std::getline(fin, s))	// fin ������ ���� ����(EOF) �ϸ� false ����
		std::cout << s << std::endl;


}
*/

int main()
{
//	std::ifstream fin("�����̸�"); // ���Ϸ� ���� �Է� �ޱ� ���� ���. ������ cin �� ����
	std::ofstream fout("a.txt");   // ���Ͽ� ���(����) ���� ���. ������ cout  �� ����

	int n = 10;

	fout << "hello" << std::endl;
	fout << "n = " << n << std::endl;

	// ������ a.txt ���� ���� ������. "a.txt" �� ���� ������Ʈ ������ �ֽ��ϴ�.
}



