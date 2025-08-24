#include<stdio.h>
int main(void)
{
	/*
	✔정수형 10
	int: %d
	short(잘 안씀): %d
	long(잘 안씀): %ld
	long long: %lld

	✔실수형 10.0
	double: %f
	float: %f
	long double: %lf

	✔문자형
	char(캐릭터형): 문자를 표현하는 대표적인 자료형(값의 범위 안에 들어오는 숫자 담을 수 있음)
	%c: char 서식지정자
	*/

	/*
	long long max_number = 2200000000;//int가 담을 수 있는 값(약 21억)보다 크기 때메 안됨
	printf("%lld", max_number);// %lld long long을 위한
	return 0;
	*/

	unsigned int max_number = 2200000000;//int가 담을 수 있는 값(약 21억)보다 크기 때메 안됨
	printf("%u", max_number);// %u unsigned int을 위한 서식지정자
	return 0;
}