// 4_set4
// �Ҽ�å(����)�� ������ �ܾ ��� �Ǵ��� �����ϰ�, �� �ܾ ���ĺ� ������ ����϶�.
#include <iostream>
#include <fstream>
#include <set>
#include <string>
#include <list>

int main()
{
	std::ifstream fin("readme.txt"); // �ϳ� ���ؼ� ���� ������ ��������.
	std::string s;

//	std::list<std::string> st; // 1. �ߺ��� ���ȴ�.
						       // 2. �ڵ����� ����� ����.
	std::set<std::string> word_set;

	while ( fin >> s )  // fin ���Ͽ��� �Ѵܾ s�� �Է�. �����ϸ� true, ����(���ϳ�)�ϸ� false
	{
		// st.push_back(s);

		word_set.insert(s);		// �ߺ��� ������� �ʰ�, �ڵ����� ���ĺ������� ���ĵȴ�.
	}
	//-----------------------------------------------------------------------
	std::cout << "���� �ܾ��� ���� : " << word_set.size() << std::endl;

	// ��� �ܾ� ���
	for (auto e : word_set)
		std::cout << e << std::endl;
}
// readme.txt ���� �ϳ� ���ϼ���.. ���� ����(DAY4)�� ��������