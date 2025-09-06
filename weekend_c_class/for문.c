#include <stdio.h>
int main(void)
{
	/*
	
	for(초기값;조건식;증감식){
		조건이 만족하면 실행할 코드
	}

	*/
	int forNumber;
	for (forNumber = 1; forNumber <= 10; forNumber++) {//forNumber는 1, forNumber가 10보다 작을때 까지 forNumber 증가
		printf("반복%d\n", forNumber);

	}

	//반복 10부터 반복1까지 출력
	int i;
	for (i = 10; i >= 1; i--) {
		printf("반복%d\n", i);
	}

	return 0;
}