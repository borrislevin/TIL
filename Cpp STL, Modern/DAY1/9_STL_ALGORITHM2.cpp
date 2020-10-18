// STL 교재  16 page 부터 입니다. - 

#include <iostream>

// Step 2. 검색 구간의 일반화
// 전체 문자열 검색이 아닌 "[first, last)" 구간에서 선형검색
char* strchr(char* first, char* last , int c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}

int main()
{
	char s[] = "abcdefgh";

	char* p = strchr(s, s + 4,  'e');

	if (p == nullptr )
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}




