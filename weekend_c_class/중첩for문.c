#include <stdio.h>
int main(void)
{
	int firstFor,secondFor;
	for (firstFor = 1; firstFor <= 3; firstFor++) {//���� 1�� �� �ȿ� 1,2 �� ����
		for (secondFor = 1; secondFor <= 2; secondFor++) {
			printf("%d �� %d��\n", firstFor, secondFor);
		}
		printf("\n");
	}
	


	return 0;
}