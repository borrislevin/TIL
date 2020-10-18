// square.cpp

int square(int a)
{
	return a * a;
}

// 개발자 명령 프롬프트 실행하세요.
// cl square.cpp  /c     => 링크하지 말고 컴파일만 해라(main 없어도 가능)
// cl square.cpp /c /FAs  => 어셈블리 코드 만들어 달라.

// cl /Tc square.cpp /c /FAs  => C   문법으로 컴파일 해서 어셈소스 만들어 달라
//							  => notepad square.asm

// cl /Tp square.cpp /c /FAs  => C++ 문법으로 컴파일 해서 어셈소스 만들어 달라

// C  문법으로 컴파일시 함수 이름 : "_square",   gcc 로 하면 "square" 입니다.
// C++문법으로 컴파일시 함수 이름 : "?square@@YAHH@Z" 

// C++ 컴파일러가 컴파일시 함수 이름을 완전히 이상하게 변경하는 현상 => "name mangling"

// 왜 바꿀까요 ? 무슨 문법 때문에 ? => "함수 오버로딩"
// square(int)    => 컴파일시는 아래함수와 다른이름이 되어야 합니다.
// square(double) =>