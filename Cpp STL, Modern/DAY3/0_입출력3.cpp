// stringstream

// C++ ����� ��Ʈ��(����Ÿ�� �帧)�� 3�� �Դϴ�.
// std::cout << "hello"
#include <iostream>	// ǥ�� �����
#include <fstream>	// ���� �����
#include <sstream>  // �޸� ����� - ���� C++ ������ �е��� �� �𸣰� �ֽ��ϴ�.
#include <string>
/*
int main()
{
	std::ifstream      fin("0_�����3.cpp");
	std::istringstream iss("I am a student");

	std::string s;
//	std::cin >> s; // ǥ�� �Է�(Ű����)���� �Ѵܾ� �Է�
//  fin      >> s; // ȭ�� ���� �Ѵܾ� �Է�
//	iss		 >> s; // �޸�(iss �� ���� ���ڿ�)���� "�Ѵܾ� �Է�"

	// ���� istringstream �� Ȱ���ϴ°� ?
	// ������ �ܾ�� �и��ϰ� ������ => C��� strtok() �Լ��� �и��մϴ�.
	std::istringstream iss2("we are the world");

	while(iss2 >> s)				
		std::cout << s << std::endl;
}
*/
int main()
{
	std::istringstream iss("I am a student");  // �޸𸮿� �ִ� ���忭(iss)���� �Է�
	std::ostringstream oss;// �޸𸮿� ���

//	std::cout << "hello"; // ȭ�鿡 ���
	
	oss       << "hello"; // oss�� �����ϴ� �޸𸮿� ���
	std::string s = oss.str();  // oss�� �޸�(����)�� �ִ� ���ڿ� ������
	std::cout << s << std::endl; 

	// ���� Ȱ�� �ұ� ?
	double d = 3.141592;	
	
	// 10 �� ����, "10"�� ���ڿ�
	// d�� ���� ���ڿ��� �����ϰ� �ʹ�.
	// C���..
	char buf[16];
	sprintf(buf, "d = %f", d);  // "d = 3.141592" ��� ���ڿ��� buf�� ���̰� �˴ϴ�.
							    // ����. buf ũ�Ⱑ 12�̹Ƿ� ���ڿ��� ���� 12���� ũ�� �ȵ˴ϴ�.

	// �� ����� ������ : d�� ���� ���� ������ ũ�Ⱑ �������� ������ �ִ�.

	// C++ �ذ�å
	oss << "d = " << d;   // oss�� ���۴� �ڵ� ���� ����� �־ ���� �������� �ʴ�.

	std::string s2 = oss.str(); // s2 �� "d = 3.141592"

	// ��, ostringstream �� "����" => "���ڿ�"�� �ٲܶ� �θ� ���

}




