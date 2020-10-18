#include <iostream>
#include <string>
#include <vector>
using namespace std;
// 포인터 배열
#if 0 
int main() { // 포인터의 배열이다.
	string pary[10];

	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "line";

	for (int i = 0; i < 5; i++) {
		cout << pary[i] << endl;
	}
}

#endif

// 배열 포인터
int main() {
	int ary[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int(*pa)[4];  // int(*pa)[4] =>
				// 1) pa는 포인터
				// 2) int 4개짜리 1차원 배열을 가리킨다.
	int i, j;
	pa = ary;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d", pa[i][j]);
		}
		cout << endl;
	}
}