#include <stdio.h>
int main(void)
{
	int doWhile = 1;
	do {
		printf("doWhile문 %d번 연습중\n", doWhile);
		doWhile++;
	} while (doWhile >= 10);//일단 먼저 1번 출력 후 조건을 검사
	
	//while (doWhile >= 10) {
	//	printf("웨일과 차이점\n");
	//	doWhile++;  // 조건을 먼저 검사 후 출력
	//}


	return 0;
}