#include <stdio.h>
int main(void)
{
	/*
	+,-,*(��������������� ��ȣ�����ڷ� ���)
	���׿����� -> �� �ϳ� �ִ� ��
	- 
	*/
	int num = 50+20;//���� �ڿ� ������ �� �Ѵ��� ���Կ����ڷ� ó��

	//���մ��Կ�����
	//a = b : a = b
	//a += b : a = a + b
	//a -= b : a = a - b
	//a *= b : a = a * b
	//a/=b:a=a/b
	//a%=b:a=a%b

	int num1 = 3, num2 = 4;
	num1 += 3;
	num2 *= 4;
	printf("num1 += 3�� ����� :  %d\n", num1);
	printf("num2 *= 3�� ����� :  %d\n", num2);

	

	return 0;
}