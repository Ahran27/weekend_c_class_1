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
	printf("����� �����(�Ƕ�̵���)\n");

	int line2, star2,input;
	printf("�� ���� �Է�: ");
	scanf_s("%d", &input);

	for (line2 = 1; line2 <= input; line2++) {//�ٰ���
		for (star2 = 1; star2 <= input-line2; star2++) {//���� ���� ����  //input-line2 -> ���� ������ �ش� ���� ���� ������ �� ����
			printf(" ");
		}
		for (int k = 1; k <= 2 * line2 - 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}