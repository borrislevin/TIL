// STL 교재  16 page 부터 입니다. - 

#include <iostream>

// Step 1. C 표준 함수
char* strchr(const char* s, int c)
{
	while (*s != 0 && *s != c)
		++s;

	return *s == 0 ? 0 : s;
}

int main()
{
	char s[] = "abcdefgh";

	char* p = strchr(s, 'c');

	if (p == 0)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}




