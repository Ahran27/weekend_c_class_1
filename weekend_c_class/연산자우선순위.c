#include<stdio.h>
int main(void)
{
	//3+4+5+6�� ���� �� 7+5->12+6ó�� ���ʺ��� ������ڳ�.
	//�ٵ� 3+4*5+6�̸�?

	int number1,number2, number3, number4,result;
	number1 = 3;
	number2 = 4;
	number3 = 5;
	number4 = 6;
	result = number1 + number2 * number3 + number4;
	printf("%d + %d * %d + %d", number1,number2, number3, number4, result);


	return 0;
}