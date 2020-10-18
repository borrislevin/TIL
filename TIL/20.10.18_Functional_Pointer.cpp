#include <iostream> //계산기 만들기
using namespace std;

int main() {
	int a = 10;
	double b = 3.5;
	void *vp;

	vp = &a;
	printf("a : %d\n", *(int*)vp);   
	//*(int*)vp
	// 1) vp를 int*형으로 변환
	// 2) vp가 가리키는 변수 참조

	vp = &b;
	printf("b : %.1lf\n", *(double*)vp);
}



#if 0

int sum(int a, int b) { cout << "결과값 = " << a + b << endl; return a + b; }
int sub(int a, int b) { cout << "결과값 = " << a - b << endl; return a - b; }
int mul(int a, int b) { cout << "결과값 = " << a * b << endl; return a * b; }
int divv(int a, int b) { cout <<"결과값 = " << a / b << endl; return a / b; }

int main(void) {
	int(*fp)(int, int);
	int k;
	int a, b,res;
	a = 10, b = 20;
	while (1) {
		cout << "계산기 (더하기 : 1, 빼기 : 2, 곱하기 : 3, 나누기 : 4)" << endl;
		cin >> k;
		if (k < 0 || k>4)	{
			cout << "잘못된 숫자 입력! 다시 입력하세요" << endl;
			continue;
		}
		switch(k) {
		case 1:
			fp = sum;
			res = fp(10, 20);
			break;
		case 2:
			fp = sub;
			res = fp(10, 20);
			break;
		case 3:
			fp = mul;
			res = fp(10, 20);
			break;
		case 4:
			fp = divv;
			res = fp(10, 20);
			break;		
		}

		getchar();
		getchar();
	}

}

#endif