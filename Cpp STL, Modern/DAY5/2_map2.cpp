#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <algorithm>

// 소설책등의 마지막에 있는 "index(찾아보기)"를 만들어 봅시다.
// hello  : 3, 4
// school : 10, 20

int main()
{
	std::ifstream fin("readme.txt");

	// 아래 한줄이 핵심입니다. 잘생각해 보세요
	std::map<std::string, std::list<int>> index_map;

	std::string s;
	int no = 0;

	while ( std::getline(fin, s) ) // 파일에서 한줄씩 읽기
	{
		++no;
		// 한줄의 문장을 단어 별로 분리
		std::istringstream iss(s);  // iss("I am a student")
		std::string word;

		while (iss >> word)
		{
			// 맵이름[키값] : "키값이 있으면 data가 반환값"
			//				  "없으면 새롭게 생성 하고 data가 반환"
			index_map[word].push_back(no);
		}
	}
	//------------------------------------------------------
	// 이제 map의 내용 대로 출력만 하면 됩니다.
	for (auto e : index_map)
	{
		// 질문 : e의 데이타 타입은 뭘까요 ? => "pair"

		std::cout << e.first << " : ";   // 단어 출력

		// 현재 e.second 의 정체는 "list<int>" 입니다.
		for (auto n : e.second)
			std::cout << n << ", ";

		std::cout << std::endl;
	}
	
	// std::map<std::string, std::list<int>> index_map;
	//            ^                 ^
	//			first            second
	// 또한, 키값으로 정렬 되므로, 화면 출력시 알파벳 순서로 나오게 됩니다.
}
// readme.txt 파일 구해서 현재 폴더(DAY5)에 넣으세요.

// 도전 과제 : 하나의 단어가 한줄에 2번 나올경우, "라인 넘버"는 한번만 나오게 변경해 보세요
//             어렵게 하지말고, 최대한 간단하게 하려면 ?
//				list<int> 대신 set<int> 로 변경하면 된다.
//				단, push_back() 대신 insert()로 변경!!!

// 핵심 : 컨테이너가 컨테이너를 저장하면 아주 다양한 활용이 가능
// std::map<std::string, std::vector<std::list<int>>> m; // 모양, 생각해 보세요 

// map의 요소가 "pair" 라는 사실을 꼭 기억하세요
// p.first : 키값
// p.second : data





