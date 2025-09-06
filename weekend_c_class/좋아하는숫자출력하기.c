#include <stdio.h>
int main(void)
{
	/*
	숫자 5개 저장할 배열 만들기
	좋아하는 숫자를 입력받아 각 배열의 칸에 넣기
	배열 출력하기

	for문 2개 사용됨
	- 각 칸에 입력하는 것
	- 입력한 값ㅇ르 출력하는 것
	*/
	int nums[5];
	printf("좋아하는 숫자 5개 입력하기: \n");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &nums[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d", nums[i]);
	}
	//////////////////////////////////////////////////
	
	int numbers[5] = { 10,20,30,40,50 };
	int max;
	numbers[0] = 100;//0자리를 100으로 대체. 

	max = numbers[0];
	for (int i = 1; i < 5; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
		}
	}
	printf("\n최댓값: %d\n", max);


	return 0;
}