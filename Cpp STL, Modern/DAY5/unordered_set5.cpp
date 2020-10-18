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
	s1.insert(10);  // 중복 허용 안함. 실패. insert() 리턴값으로 조사하면 됩니다.
	show(s1);		// 10

	std::multiset<int> s2;	// 중복을 허용하는 set
	s2.insert(10);
	s2.insert(10);   
	show(s2);		// 10, 10

	// 일반적인 프로그램에서는 multiset 보다는 set 이 널리 사용됩니다.
	std::unordered_set<int> s3;
	std::unordered_multiset<int> s4;

	std::map<int, int> m1;
	std::multimap<int, int> m2;

	std::unordered_map<int, int> m3;
	std::unordered_multimap<int, int> m4;
}