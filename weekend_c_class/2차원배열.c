#include<stdio.h>
int main(void)
{
	/*int a[3][4];
	a[0][0] = 10;
	printf("%d", a[0][0]);*/

	int arr[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};//선언과 동시에 초기화 리스트


	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = 10;//10으로 대체하기
			printf("%d", arr[i][j]);
		}
		printf("\n");

	}



	return 0;
}