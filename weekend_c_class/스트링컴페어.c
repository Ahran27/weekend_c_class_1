#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[] = "apple";
	char str2[] = "apple";
	char str3[] = "banana";

	
	
	
	//같으면 0
	printf("str1 vs str2 ; %d\n", strcmp(str1, str2));
	//앞이 크면 양수
	printf("str3 vs str1 : %d\n", strcmp(str3, str1));
	//앞이 작으면 음수
	printf("str1 vs str3 : %d\n",strcmp(str1, str3));
	//크기는 아스키코드로 구분, 대소문자를 구분. --> A(65) a(97)

	/*
	cat
	c == c
	a == a
	t == t
	0

	cat r
	c == c
	a == a
	t != r
	t(116) / r(11)
	결과 : 양수

	cat cater
	c == c
	a == a
	t == t
	_ != e
	_ 1= r
	_ vs e --> 0 vs 
	*/


	return 0;
}