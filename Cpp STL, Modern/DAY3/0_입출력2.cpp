#include <iostream>
#include <fstream>
#include <string>

// C++ 표준
/*
namespace std
{
	// <iostream> 헤더
	class ostream {};  // 표준 출력
	class istream {};  // 표준 입력
	ostream cout;
	istream cin;

	// <fstream> 헤더
	class ofstream : public ostream {}; // 표준 파일 출력
	class ifstream : public istream {}; // 표준 파일 입력
}
*/
/*
int main()
{
	std::string s;
//	std::cin >> s; // 표준 입력(키보드)에서 입력

	std::ifstream fin("0_입출력2.cpp"); // 입력을 위한 파일 객체

//	fin >> s; // 파일로 부터 한단어 입력

//	std::getline(fin, s);		// 파일로 부터 한줄 입력.  입출력1.cpp 소스 참고하세요


	while( std::getline(fin, s))	// fin 파일의 끝에 도달(EOF) 하면 false 리턴
		std::cout << s << std::endl;


}
*/

int main()
{
//	std::ifstream fin("파일이름"); // 파일로 부터 입력 받기 위해 사용. 사용법은 cin 과 동일
	std::ofstream fout("a.txt");   // 파일에 출력(쓰기) 위해 사용. 사용법은 cout  과 동일

	int n = 10;

	fout << "hello" << std::endl;
	fout << "n = " << n << std::endl;

	// 실행후 a.txt 파일 열어 보세요. "a.txt" 는 현재 프로젝트 폴더에 있습니다.
}



