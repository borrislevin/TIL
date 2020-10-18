#include <iostream>

// 핵심 : 사용자가 -1 을 입력할때 까지 계속 입력받고 싶다면 ?
//        => 처음에 메모리를 특정 크기로 할당하고 부족할때 마다 새롭게 할당해서 키워 나가야 한다.
//		  => "동적 배열" 이라고 불리는 기술

// 프로그램 입문시 "C"를 권장하는 사람들의 이유
// "아래 같은 코드를 직접 만들어 볼수 있다는 장점"

int main()
{
	// 사용자가 -1을 입력할때 까지 계속 입력 받아보세요. 
	// 단, 입력된 모든 값은 반드시 보관하고 있어야 합니다.
	int n = 0;

	// 아래 처럼 배열을 사용하면 
	// (1) 크기변경이 안된다 
	// (2) 필요없을때 지울수도 없다.
	// int buff[5] = { 0 };

	int buf_size    = 5;  // 현재 버퍼의 크기
	int input_count = 0;  // 입력 값의 갯수

	int* buff = new int[buf_size];

	while (1)  // 무한 루프
	{
		std::cin >> n;

		if (n == -1) break;
		
		++input_count;

		if (buf_size < input_count) 
		{
			// 버퍼가 부족하다.. 버퍼를 키워야 한다.
			buf_size += 5;
			int* temp = new int[buf_size]; // 신규 버퍼
			// 기존 버퍼의 내용을 신규 버퍼로 이동
			memcpy(temp, buff, sizeof(int) * buf_size - 5);

			// 기존 버퍼 제거
			delete[] buff;

			// buff 가 신규 메모리를 가리키도록 변경
			buff = temp;
		}
		// 버퍼가 부족한 경우를 해결했으므로 입력된 값을 버퍼에 넣으면 된다.
		// 배열은 0부터 시작하므로 count-1 번째 입력
		buff[input_count - 1] = n;
	}
	std::cout << "[지금까지 입력된 값]" << std::endl;

	for (int i = 0; i < input_count; i++)
	{
		std::cout << buff[i] << std::endl;
	}
	delete[] buff;
}