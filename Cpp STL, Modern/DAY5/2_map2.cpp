#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <algorithm>

// �Ҽ�å���� �������� �ִ� "index(ã�ƺ���)"�� ����� ���ô�.
// hello  : 3, 4
// school : 10, 20

int main()
{
	std::ifstream fin("readme.txt");

	// �Ʒ� ������ �ٽ��Դϴ�. �߻����� ������
	std::map<std::string, std::list<int>> index_map;

	std::string s;
	int no = 0;

	while ( std::getline(fin, s) ) // ���Ͽ��� ���پ� �б�
	{
		++no;
		// ������ ������ �ܾ� ���� �и�
		std::istringstream iss(s);  // iss("I am a student")
		std::string word;

		while (iss >> word)
		{
			// ���̸�[Ű��] : "Ű���� ������ data�� ��ȯ��"
			//				  "������ ���Ӱ� ���� �ϰ� data�� ��ȯ"
			index_map[word].push_back(no);
		}
	}
	//------------------------------------------------------
	// ���� map�� ���� ��� ��¸� �ϸ� �˴ϴ�.
	for (auto e : index_map)
	{
		// ���� : e�� ����Ÿ Ÿ���� ����� ? => "pair"

		std::cout << e.first << " : ";   // �ܾ� ���

		// ���� e.second �� ��ü�� "list<int>" �Դϴ�.
		for (auto n : e.second)
			std::cout << n << ", ";

		std::cout << std::endl;
	}
	
	// std::map<std::string, std::list<int>> index_map;
	//            ^                 ^
	//			first            second
	// ����, Ű������ ���� �ǹǷ�, ȭ�� ��½� ���ĺ� ������ ������ �˴ϴ�.
}
// readme.txt ���� ���ؼ� ���� ����(DAY5)�� ��������.

// ���� ���� : �ϳ��� �ܾ ���ٿ� 2�� ���ð��, "���� �ѹ�"�� �ѹ��� ������ ������ ������
//             ��ư� ��������, �ִ��� �����ϰ� �Ϸ��� ?
//				list<int> ��� set<int> �� �����ϸ� �ȴ�.
//				��, push_back() ��� insert()�� ����!!!

// �ٽ� : �����̳ʰ� �����̳ʸ� �����ϸ� ���� �پ��� Ȱ���� ����
// std::map<std::string, std::vector<std::list<int>>> m; // ���, ������ ������ 

// map�� ��Ұ� "pair" ��� ����� �� ����ϼ���
// p.first : Ű��
// p.second : data





