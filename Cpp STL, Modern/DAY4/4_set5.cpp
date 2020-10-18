// 4_set4
// �Ҽ�å(����)�� ������ �ܾ ��� �Ǵ��� �����ϰ�, �� �ܾ ���ĺ� ������ ����϶�.
#include <iostream>
#include <fstream>
#include <set>
#include <string>
#include <list>

// ��ҹ����� �����ϰ� �ܾ ���ϴ� �Լ���ü
struct StringCompare
{
	inline bool operator()(const std::string& s1, const std::string& s2) const
	{
//		return s1 < s2; // ��ҹ��ڸ� ����ؼ� ��
//		return s1.toupper() < s2.toupper(); // �̷��� ������ ������!! toupper()����� �����ϴ�.

		// 2���� ������ ��Ҹ� "���ʴ�� �ϳ��� ���ؼ�" ���� ������ ������ true �׷��� ������ false
		//												  
		return std::lexicographical_compare(s1.begin(), s1.end(), // "hello"
										    s2.begin(), s2.end(), // "HELLO"
									      [](char c1, char c2) { return toupper(c1) < toupper(c2); });
	}
};

// �ǽ����� : �� �ܾ��� ��, ���ʿ��� "���ڰ� �ƴ� ��Ҹ� ����"�ϰ� set�� �־� ������




int main()
{
	std::ifstream fin("readme.txt"); 
	std::string s;

	std::set<std::string, StringCompare > word_set;





	while (fin >> s)  
	{
		word_set.insert(s);
	}
	//-----------------------------------------------------------------------
	std::cout << "���� �ܾ��� ���� : " << word_set.size() << std::endl;

	for (auto e : word_set)
		std::cout << e << std::endl;
}
