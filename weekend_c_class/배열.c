#include <stdio.h>
int main(void)
{
	//배열의 이름(변수와 동일)
	//배열에 들어갈 값에 일치하는 자료형
	//배열의 길이  - 배열에 포함될의 개수

	int numbers[5] = {10,20,30,40,50};//초기화 리스트(배열과 선언이 동시에 이루어져야 함)
	int nums[] = {1,2,3};//배열 크기 생략 가능

	printf("%d\n", numbers[1]);

	for (int i = 0; i < 5; i++) {
		printf("%d", numbers[i]);
	}

	



	return 0;
}