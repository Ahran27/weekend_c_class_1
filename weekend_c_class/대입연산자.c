#include <stdio.h>
int main(void)
{
	/*
	+,-,*(산술연산자이지만 부호연산자로 사용)
	단항연산자 -> 항 하나 있는 것
	- 
	*/
	int num = 50+20;//이퀄 뒤에 연산을 다 한다음 대입여난자로 처리

	//복합대입연산자
	//a = b : a = b
	//a += b : a = a + b
	//a -= b : a = a - b
	//a *= b : a = a * b
	//a/=b:a=a/b
	//a%=b:a=a%b

	int num1 = 3, num2 = 4;
	num1 += 3;
	num2 *= 4;
	printf("num1 += 3의 결과는 :  %d\n", num1);
	printf("num2 *= 3의 결과는 :  %d\n", num2);

	

	return 0;
}