#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[] = "apple";
	char str2[] = "apple";
	char str3[] = "banana";

	
	
	
	//������ 0
	printf("str1 vs str2 ; %d\n", strcmp(str1, str2));
	//���� ũ�� ���
	printf("str3 vs str1 : %d\n", strcmp(str3, str1));
	//���� ������ ����
	printf("str1 vs str3 : %d\n",strcmp(str1, str3));
	//ũ��� �ƽ�Ű�ڵ�� ����, ��ҹ��ڸ� ����. --> A(65) a(97)

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
	��� : ���

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