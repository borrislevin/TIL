#pragma once

// math.h

// 다른 파일에서 square를 호출하려면 이 헤더만 include 하면 됩니다

// int square(int);

// extern "C"  : 특정 함수는 C언어로 만들었다고
//			C++ 컴파일러에게 알려 주는 것

// extern "C" int square(int);

// 핵심 
// C/C++ 에서 모두 사용가능한 함수를 만들려면
// 1. 소스 자체는 .c 로 해서 name mangling을 막고

// 2. 헤더는 아래처럼 조건부 컴파일을 통해서
//    C/C++을 모두 지원해야 합니다.

// 모든 C++ 컴파일러는 "__cplusplus" 라는 매크로가
//					정의 되어 있다.
#ifdef __cplusplus
extern "C" {
#endif

	int square(int)

#ifdef __cplusplus
}
#endif




