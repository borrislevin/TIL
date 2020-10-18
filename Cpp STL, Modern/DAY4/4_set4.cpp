// 4_set4
// 소설책(파일)에 나오는 단어가 몇개나 되는지 조사하고, 각 단어를 알파벳 순서로 출력하라.
#include <iostream>
#include <fstream>
#include <set>
#include <string>
#include <list>

int main()
{
	std::ifstream fin("readme.txt"); // 하나 구해서 현재 폴더에 넣으세요.
	std::string s;

//	std::list<std::string> st; // 1. 중복이 허용된다.
						       // 2. 자동정렬 기능이 없다.
	std::set<std::string> word_set;

	while ( fin >> s )  // fin 파일에서 한단어를 s에 입력. 성공하면 true, 실패(파일끝)하면 false
	{
		// st.push_back(s);

		word_set.insert(s);		// 중복을 허용하지 않고, 자동으로 알파벳순으로 정렬된다.
	}
	//-----------------------------------------------------------------------
	std::cout << "사용된 단어의 갯수 : " << word_set.size() << std::endl;

	// 모든 단어 출력
	for (auto e : word_set)
		std::cout << e << std::endl;
}
// readme.txt 파일 하나 구하세요.. 현재 폴더(DAY4)에 넣으세요