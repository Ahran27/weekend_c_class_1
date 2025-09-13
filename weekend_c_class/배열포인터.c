#include <stdio.h>
int main(void)
{
	int* ptr;
	//int (*arrptr)[3];

	int arr[3] = { 1,2,3 };
	ptr = arr;//arr은 배열의 이름
	//*ptr = &arr;

	int(*arrptr)[3] = &arr;
	printf("첫번째 요소는: %d\n", (*arrptr)[0]);
	printf("두번째 요소는: %d\n", (*arrptr)[1]);
	printf("세번째 요소는: %d\n", (*arrptr)[2]);

	for (int i = 0; i < 3; i++) {
		printf("arr[%d]: %d\n", i, (*arrptr)[i]);
	}

	//값(원소)의 주소가 필요할 때 : int * p1 = arr
	//배열 전체의 주소가 필요할 때: int (*p)[3] = *arr;

	int twoarr[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	int (*twoarrptr)[3] = twoarr;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("twoarr[%d][%d]: %d\n", i, j, twoarrptr[i][j]);
		}
	}



	return 0;
}