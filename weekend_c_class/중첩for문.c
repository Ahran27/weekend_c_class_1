#include <stdio.h>
int main(void)
{
	int firstFor,secondFor;
	for (firstFor = 1; firstFor <= 3; firstFor++) {//겉이 1일 때 안에 1,2 다 실행
		for (secondFor = 1; secondFor <= 2; secondFor++) {
			printf("%d 행 %d열\n", firstFor, secondFor);
		}
		printf("\n");
	}
	


	return 0;
}