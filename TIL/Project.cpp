#include <stdio.h>


// 각  level 별로 로그 각각 출력 가능하게
// INFO
// WARN
// DEBUG
// CRITICAL
// ERROR

// 클래스 기반으로 만들어야한다.
// 사용자 수정 가능, 정책으로 구현해서 정책 변경이 가능하도록
// 설치방법?
// 클래스별 별도의 헤더파일과 소스파일 존재 (라이브러리 화?)
// spdlog가 유명하다
// ppt는 10장 정도 // 클래스 구성, 디자인 패턴 활용
// 개선점, 느낀점

void foo() {
	printf("%s - $d foo \n", __func__, __LINE__); // log
}

int main() {
	foo();

	//	INFO() <<"Hello"
}