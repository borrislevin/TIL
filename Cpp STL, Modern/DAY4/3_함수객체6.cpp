// 3_함수객체6
// 1. 일반 함수는 자신만의 타입이 없습니다.
//    signature(리턴타입과 파라미터) 가 
//    동일한 모든 함수는 같은 타입입니다.

// 2. 함수 객체는 모두 다른 타입이다.
//    signature(리턴타입모양과 인자 모양, 즉, 함수 사용법)이 같아도 "모두 다른 타입이다."
struct Show
{
	inline void operator()(int n) { std::cout << n << std::endl; }
};
struct Show2
{
	inline void operator()(int n) { std::cout << n << std::endl; }
};
//----------------------------------------------------------------
// 인자로 "함수(객체)"를 전달 받는데, 해당 함수(객체)의 구현이 인라인 치환 가능하게 하는 기술
// "함수 객체 + 템플릿" 기술로 만드는 기법 - STL 의 핵심 설계 철학

// 아래 방식의 단점은 ? :
template<typename T> 
void for_each(int* first, int* last, T f)
{
	while (first != last)
	{
		f(*first);
		++first;
	}
}

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	Show  s1; s1(10); for_each(x, x + 10, s1); // ok.. 아무 문제 없음.  for_each(... Show) 함수 생성
	Show2 s2; s2(10); for_each(x, x + 10, s2); // ??                    for_each(... Show2) 함수 생성
}



