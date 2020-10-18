#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <algorithm>
#include <unordered_map>

// 2_map2.cpp 복사해서 4_unordered_map2 에 복사하세요.

int main()
{
	std::ifstream fin("readme.txt");

//	std::map<std::string, std::list<int>> index_map; // tree

	std::unordered_map<std::string, std::list<int>> index_map; // hash


	std::string s;
	int no = 0;

	while (std::getline(fin, s)) 
	{
		++no;

		std::istringstream iss(s);  // iss("I am a student")
		std::string word;

		while (iss >> word)
		{
			index_map[word].push_back(no);
		}
	}

	for (auto e : index_map)
	{

		std::cout << e.first << " : ";   

		for (auto n : e.second)
			std::cout << n << ", ";

		std::cout << std::endl;
	}

}






