#include <stdio.h>
int main(void)
{
	int line, star;

	for (line = 5; line >= 1; line--) {
		for (star = 1; star <= line; star++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n");
	printf("어려운 별찍기(피라미드줄)\n");

	int line2, star2,input;
	printf("행 개수 입력: ");
	scanf_s("%d", &input);

	for (line2 = 1; line2 <= input; line2++) {//줄개수
		for (star2 = 1; star2 <= input-line2; star2++) {//왼쪽 공백 개수  //input-line2 -> 받은 수에서 해당 줄을 빼면 공백의 수 나옴
			printf(" ");
		}
		for (int k = 1; k <= 2 * line2 - 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}