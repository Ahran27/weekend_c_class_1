#include<stdio.h>
int main(void)
{
	//2�� 1�� ������ ��� ���� �ٸ� �ٿ� ����ϱ�
	int number1 = 1;
	int number2 = 2;
	printf("%d\n", number1);//"%d\n"�� ������ ������ ���� ��� �� �� ����
	printf("%d\n", number2);

	//2X3 = 6
	//���� 3�� ����ؼ� ����غ���
	//int num1 = 2, num2 = 3;
	//printf("%d * %d = %d\n", num1, num2, num1 * num2);
	int num1, num2, result;
	num1 = 2;
	num2 = 3;
	result = num1 * num2;
	printf("%d X %d = %d", num1, num2, result);

	return 0;
}