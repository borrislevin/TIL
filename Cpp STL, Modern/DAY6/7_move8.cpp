#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 클래스가 포인터 멤버가 있다면
// "얕은 복사 해결을 위해 "복사 생성자" 필요
// "성능 향상을 위해 move 생성자도 필요

// 결론 : 클래스 만들때 멤버로 포인터 사용하지 말자!
//		  복사와 move를 지원하는 아주 훌륭한 클래스가 된다.

class Cat
{
	//char* name;
	std::string name;
	int   age;
public:
	Cat(std::string n, int a) : age(a), name(n)
	{
	}
	// 복사와 move를 만들지 않았으므로 "컴파일러가 제공"
};


int main()
{

}






