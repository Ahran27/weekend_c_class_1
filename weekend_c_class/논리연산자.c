#include<stdio.h>
int main(void)
{
	/*
	* 단항연산자란 하나의 값으로 정의할 수 있는 연산자
	||(or): 피연산자 중 하나만 true이면 true라는 결과값 반환(또는~)
	&&(and): 피연산자 중 하나만 값이 false라면 false라는 결과값 반환(그리고~)
	!(not): 단한연산자로 값이 true라면 flase를 반환한다.
	e.g. 10 > 20 : flase --> true
	*/

	int one = 10, two = 20, three = 30, four = 40;
	int result;

	result = one > two || two >= three || three > four;
	printf("result: %d\n", result);
	//true ; 1, flase ; 0

	result = one > two || two <= three || three > four;
	printf("result: %d\n", result);

	result = one <= two && two <= three && three <= four;
	printf("result: %d\n", result);

	result = !(one > two);
	printf("result: %d\n", result);



	return 0;
}