#include <stdio.h>
int main(void)
{
	/*
	1. &(and): 대응하는 각 비트의 값이 모두 1이면 1을 반환, 아니면 0
	2. |(or): 대응하는 비트의 값 중 1이  있으면 1을 반환
	3. ^(xor): 대응하는 비트의 값이 다르면 1을 반환
	4. ~(not): 비트의 값이 1이면 0으로, 0이면 1로 결과를 반전시켜 나타냄
	*/
	int bitFive = 5;//0101
	int bitThree = 3;//0011
	/*
	0101
	0011
	로 비트연산하기
	답 
	&연산자 0001(1)
	|연산자 0111(7)
	^연산자 0110(6)
	*/
	printf("bitFive & bitThree = %d\n", bitFive & bitThree);
	printf("bitFive | bitThree = %d\n", bitFive | bitThree);
	printf("bitFive ^ bitThree = %d\n", bitFive ^ bitThree);
	printf("~%d = %d\n", bitFive, ~bitFive);//2의 보수 --> -6
	printf("~%d = %d\n", bitThree, ~bitThree);


	return 0;
}