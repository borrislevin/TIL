// 실습1.cpp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>

class People
{
	std::string name;
	int         age;
	std::string address;
public:
	People(const std::string& n, int a, const std::string& addr = "UNKNOWN")
		: name(n), age(a), address(addr) {}

	std::string  get_name() const { return name; }
	std::string  get_addr() const { return address; }
	int          get_age()  const { return age; }

	std::string to_string() const
	{
		std::ostringstream oss;
		oss << name << "(" << age << ", " << address << ")";
		return oss.str();
	}
};
int main()
{
	// 3일차 실습.txt 해보세요
	std::vector<People> v;

	// DB.txt 파일을 오픈한후, 분석해서 아래 부분의 코드를 대체해 보세요
	//-----------------------------
	v.emplace_back("홍길동", 20, "서울");
	v.emplace_back("김철수", 22, "서울");
	v.emplace_back("이영희", 23, "서울");
	v.emplace_back("박철수", 32, "서울");
	v.emplace_back("최철수", 43, "서울");
	v.emplace_back("AAA", 60);
	v.emplace_back("BBB", 14);
	v.emplace_back("CCC", 30);
	v.emplace_back("DDD", 32);
	v.emplace_back("EEE", 40);
	//---------------------------------------

	// 이름을 입력받아서 사람을 찾은후, 정보를 출력
	std::cout << "찾는 사람은 >> ";
	std::string name;
	std::cin >> name;
	auto p = std::find_if(v.begin(), v.end(), [name](const People& p) { return p.get_name() == name; });

	if (p == v.end())
	{
		std::cout << "해당 사람은 등록되어 있지 않습니다." << std::endl;
	}
	else
	{
		std::string s = p->to_string() ;  // p를 사용해서 to_string()을 호출해 보세요
								// 반복자의 의미(요소를 가리키는 "포인터" 역활)를 잘 생각하시면 됩니다

		std::cout << s << std::endl;
	}



	// 검색 결과 출력

	// 이름순으로 정렬후, 모든 사람 출력

	// 나이순으로 정렬후, 모든 사람 출력
}
// 2번 문제의 의미  DB.txt  파일을 만들고 아래 형식으로 채우세요
//홍길동 20 서울시 마포구
//김철수 30 경기도 용인시 마북리
//이영희 34 제주도 서귀포시 

// 이 파일에서 입력받은후 v 를 채우세요..

