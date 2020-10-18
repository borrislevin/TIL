

// 1. cafe.naver.com/cppmaster 에서 2일차 사전 소스 받으세요

// 2. 압축 풀고 VC++ 에서 열어 보세요

// 3. "x86", "debug" 로 맞추세요.

// 4. 빌드해서 문제가 없는지 확인해 보세요

// 5. 빌드 에러 발생시 "프로젝트 메뉴 - 속성 메뉴" 에서 

//    "Windows SDK 버전"과 "플랫폼 도구집합" 변경해 주세요










// 1_변수와객체
#include <iostream>
#include <string>  // class string{};
// primitive type : built in type,  컴파일러 자체가 인식하는 데이타 타입
//									int, short, char, float, double, long, bool

// UDT(User Define Type ) : 구조체나 클래스로 사용자가 만든 타입 과라이브러리가 제공하는 타입
//						아래 있는 Point, STL 안의 string, vector

struct Point
{
	int x, y;
};
int main()
{
	// primitive 타입의 변수 : "변수" 라고 부르면 됩니다.
	//							값만 가지고 있고, 멤버 함수등이 없습니다.
	int n = 0; // n은 "변수"
	
	Point pt;
	
	// UDT 타입의 변수 : "변수" 라는 용어 보다는 "객체" 라고 합니다
	//					값도 있고, 값을 조작하는 "멤버함수"도 같이 있다.
	std::string s = "hello";

	// s 는 "hello" 라는 "값"도 있고, 다양한 멤버 함수도 있다.
	
}





