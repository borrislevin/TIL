#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int a,i,temp;
	i = 1;
	srand((unsigned)time(NULL));
	a = rand() % 100;

	printf(">>>Up & Down 맞추기<<<\n\n");

	while (i <= 10) {
		printf("%d번째 기회입니다. 숫자를 맞춰주세요~ : ", i);
		scanf_s("%d", &temp);
		i++;
		if (temp == a) {
			printf("정답입니다~!\n");
			return 0;
		}
		else if (temp < a)
			printf("Up Up 더 높은 숫자를 입력하세요.\n");
		else
			printf("Down Down 더 낮은 숫자를 입력하세요.\n");
	}
	printf("실패하였습니다!!\n");


}