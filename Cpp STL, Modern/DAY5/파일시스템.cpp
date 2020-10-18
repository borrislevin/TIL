#include <iostream>
#include <filesystem>

int main()
{
	// ���丮 ����
	std::filesystem::create_directories("D:\\AAA"); // ���ϴ� ���丮 �־� ������.
	
	// �Ʒ� �ڵ尡 Windows ���丮 ���� ��� ��Ҹ� �����ϴ� �ڵ� �Դϴ�.
	std::filesystem::directory_iterator di("C:\\Windows");
//	++di;

	for (auto p : di)
	{
		std::cout << p.path() << std::endl;
	}
}
// cppreference.com �� ù��° ȭ�鿡 �ͺ�����..

// �����ؼ� ���� �ִ��� Ȯ���� ������
// g++ �ֽŹ���			: C++14�� ����Ʈ
// visual C++ 2017/2019 : C++14�� ����Ʈ

// C++ 17�� ����Ϸ���

// g++ �ҽ��̸�.cpp -std=c++17

// VC : /std:c++latest   �Ǵ� /std:c++17   �ɼ� �߰�.


// vs2019 : C++17 �� ��� ����, C++20 �� �Ϻ� ����
// vs2017 : C++17 �� �Ϻ� ����,