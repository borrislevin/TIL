#include <iostream> //���� �����
using namespace std;

int main() {
	int a = 10;
	double b = 3.5;
	void *vp;

	vp = &a;
	printf("a : %d\n", *(int*)vp);   
	//*(int*)vp
	// 1) vp�� int*������ ��ȯ
	// 2) vp�� ����Ű�� ���� ����

	vp = &b;
	printf("b : %.1lf\n", *(double*)vp);
}



#if 0

int sum(int a, int b) { cout << "����� = " << a + b << endl; return a + b; }
int sub(int a, int b) { cout << "����� = " << a - b << endl; return a - b; }
int mul(int a, int b) { cout << "����� = " << a * b << endl; return a * b; }
int divv(int a, int b) { cout <<"����� = " << a / b << endl; return a / b; }

int main(void) {
	int(*fp)(int, int);
	int k;
	int a, b,res;
	a = 10, b = 20;
	while (1) {
		cout << "���� (���ϱ� : 1, ���� : 2, ���ϱ� : 3, ������ : 4)" << endl;
		cin >> k;
		if (k < 0 || k>4)	{
			cout << "�߸��� ���� �Է�! �ٽ� �Է��ϼ���" << endl;
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