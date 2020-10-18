// unordered_set5
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include "show.h"

int main()
{
	std::set<int> s1;
	s1.insert(10);
	s1.insert(10);  // �ߺ� ��� ����. ����. insert() ���ϰ����� �����ϸ� �˴ϴ�.
	show(s1);		// 10

	std::multiset<int> s2;	// �ߺ��� ����ϴ� set
	s2.insert(10);
	s2.insert(10);   
	show(s2);		// 10, 10

	// �Ϲ����� ���α׷������� multiset ���ٴ� set �� �θ� ���˴ϴ�.
	std::unordered_set<int> s3;
	std::unordered_multiset<int> s4;

	std::map<int, int> m1;
	std::multimap<int, int> m2;

	std::unordered_map<int, int> m3;
	std::unordered_multimap<int, int> m4;
}