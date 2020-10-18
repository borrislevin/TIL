#include <iostream>
#include <algorithm> 


void for_each(int* first, int* last, void(*f)(int))
{
	while (first != last)
	{
		f(*first);
		++first;
	}
}
//----------------------
// foo함수를 "이름 foo"로 직접 호출하면 인라인 치환 됩니다.
// 하지만, for_each(x, x+10, foo) 처럼 함수 인자로 보내서 사용하면 인라인 치환 안됩니다.
inline void foo(int n) { std::cout << n << std::endl;}
inline void goo(int n) { std::cout << n << std::endl; }






int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	for_each(x, x + 10, foo);	// 코드를 잘보고 foo가 몇번 호출되는지 생각해 보세요.
	for_each(x, x + 10, goo);	// 결국, 구간의 요소가 10개 이므로 10번 호출.
}




