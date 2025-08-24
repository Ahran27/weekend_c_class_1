#include<stdio.h>
int main(void)
{
	//2와 1을 변수에 담아 서로 다른 줄에 출력하기
	int number1 = 1;
	int number2 = 2;
	printf("%d\n", number1);//"%d\n"은 정수형 변수나 값을 출력 할 수 있음
	printf("%d\n", number2);

	//2X3 = 6
	//변수 3개 사용해서 출력해보기
	//int num1 = 2, num2 = 3;
	//printf("%d * %d = %d\n", num1, num2, num1 * num2);
	int num1, num2, result;
	num1 = 2;
	num2 = 3;
	result = num1 * num2;
	printf("%d X %d = %d", num1, num2, result);

	return 0;
}