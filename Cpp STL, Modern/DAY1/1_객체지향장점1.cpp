// "X64" : 64비트 실행파일
// "X86" : 32비트

// "Debug", "X86" 로 맞추세요


// [ VS 버전이 다른 경우 해결책. ]
// 프로젝트 메뉴 => 속성 메뉴에서
// Windows SDK 버전
// 플랫폼 도구집합 버전 설정

// 개발자 명령 프롬프트에서 
// "cl 소스이름.cpp" 또는 "clang++ 소스이름.cpp"
// smkang @codenuri.co.kr 로 보내 주세요..
///---------------------------------------------------

#include <iostream>

// 핵심 : 왜 배열을 사용하는 가 ?

int main()
{
	// 사용자에게 숫자를 2개 입력 받아 보세요..
	int n1, n2;
	std::cin >> n1;
//	std::cin >> n1; // 기존 입력값에 덮어쓰게 된다.
	std::cin >> n2;

	// 사용자에게 숫자를 5개 입력 받아 보세요..
	// => 동일 코드는 5줄 적는것 보다는 "반복문"이 좋다.
//	int a, b, c, d, e;

	// 배열 : 여러개의 변수(메모리)를 "동일이름 + 인덱스"로 접근 할수 있다.
	//  => "반복문 사용가능"
	int x[5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		std::cin >> x[i];
	}
}
// vs 에러 있으신분은 : 콘솔창 빌드하거나.
// vs code 에서 "DAY1 폴더" 열어서 "clang++" 로 빌드해 보셔도 됩니다.










