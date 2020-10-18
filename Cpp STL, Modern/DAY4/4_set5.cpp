// 4_set4
// 소설책(파일)에 나오는 단어가 몇개나 되는지 조사하고, 각 단어를 알파벳 순서로 출력하라.
#include <iostream>
#include <fstream>
#include <set>
#include <string>
#include <list>

// 대소문자의 무시하고 단어를 비교하는 함수객체
struct StringCompare
{
	inline bool operator()(const std::string& s1, const std::string& s2) const
	{
//		return s1 < s2; // 대소문자를 고려해서 비교
//		return s1.toupper() < s2.toupper(); // 이러면 좋을거 같은데!! toupper()멤버는 없습니다.

		// 2개의 구간의 요소를 "차례대로 하나씩 비교해서" 앞의 구간이 작으면 true 그렇지 않으면 false
		//												  
		return std::lexicographical_compare(s1.begin(), s1.end(), // "hello"
										    s2.begin(), s2.end(), // "HELLO"
									      [](char c1, char c2) { return toupper(c1) < toupper(c2); });
	}
};

// 실습과제 : 각 단어의 앞, 뒤쪽에서 "문자가 아닌 요소를 제거"하고 set에 넣어 보세요




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
	std::cout << "사용된 단어의 갯수 : " << word_set.size() << std::endl;

	for (auto e : word_set)
		std::cout << e << std::endl;
}
