// 5_컨테이너어답터1_1.cpp
#include <iostream>
#include <string>
#include <stack>

// infix   : 3+1   연산자가 가운데. 인간이 사용하는 방식, 단점. ()가 필요 하다. 
// postfix : 31+   연산자가 뒤쪽에
// prefix  : +31   연산자가 앞쪽에

int main()
{
	std::string s1 = "3*(2+1)"; // infix 표기법, 필요에 따라 ()를 사용합니다.
								// 컴퓨터가 계산하려면 infix => postfix로 변경해야 합니다.

	std::string s2 = "321+*";   // 컴퓨터가 계산하기 쉽습니다.

	// postfix로 결과 구하기
	// 앞에서 부터 차례대로 하나씩 조사하면서
	// 1. 숫자라면 스택에 넣는다.
	// 2. 연산자면 스택에서 2개를 꺼내서 해당 연산 수행후 결과를 다시 스택에 넣는다.
	// 3. 1~2를 수식에 끝에 도달할때까지 수행하면 스택에 결과가 남아있게 된다.

	std::stack<char> st;

	for (char e : s2)
	{
		if (e >= '0' && e <= '9') // 숫자라면
			st.push(e);
		else
		{
			// 연산자라면 스택에서 2개 꺼내기
			char c1 = st.top(); st.pop();
			char c2 = st.top(); st.pop();

			// '9' => 9 로 변경, 즉, 문자를 숫자로
			int n1 = c1 - '0';
			int n2 = c2 - '0';
			int ret = 0;
			switch (e)
			{
			case '+': ret = n1 + n2; break;
			case '-': ret = n1 - n2; break;
			case '*': ret = n1 * n2; break;
			case '/': ret = n1 / n2; break;
			}
			// 결과를 다시 스택에.. 문자형태로 바꾸어 넣기
			st.push( ret + '0' );  // 9 => '9'
		}
	}
	// 최종적으로 스택에는 결과값 한개가 남아 있습니다.
	// 주의! 문자형태로 들어 있습니다
	std::cout << st.size() << std::endl;

	char c = st.top();
	int result = c - '0';
	std::cout << "최종 연산 결과 : " << result << std::endl;
}
// 우리 코드의 한계 : 한자리 숫자만 가능.. 2자리 숫자는 안됨.

// "3*(2+1)"   ======>        "321+*"      ============> 9로 계산
//				^^^					           ^^^
//	도전 과제. 이 부분 만들어 보세요        위 코드 입니다.

// 그리고, 한자리가 아닌 여러자리 숫자도 가능하게 해보세요.=> 코딩이 어려워 집니다.

// naver 에서 "계산기 infix postfix" 검색해 보세요.

// stack 을 사용하는 또다른 대표적인 예제. - 미로에서 길 찾기 로봇의 "길찾는 원리"
//									"마이크로마우스 좌수법" 검색하면 원리 나옵니다.