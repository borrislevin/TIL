#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int a,i,temp;
	i = 1;
	srand((unsigned)time(NULL));
	a = rand() % 100;

	printf(">>>Up & Down ���߱�<<<\n\n");

	while (i <= 10) {
		printf("%d��° ��ȸ�Դϴ�. ���ڸ� �����ּ���~ : ", i);
		scanf_s("%d", &temp);
		i++;
		if (temp == a) {
			printf("�����Դϴ�~!\n");
			return 0;
		}
		else if (temp < a)
			printf("Up Up �� ���� ���ڸ� �Է��ϼ���.\n");
		else
			printf("Down Down �� ���� ���ڸ� �Է��ϼ���.\n");
	}
	printf("�����Ͽ����ϴ�!!\n");


}