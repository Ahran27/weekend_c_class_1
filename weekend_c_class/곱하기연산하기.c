#include <stdio.h>

int multiple(int num1, int num2) {
	return num1 * num2;
}

int main(void)
{
	//���� 2�� �Է¹��� ��
	//���ϱ� �Լ��� �����Ѵ�
	//�Է¹��� 2���� ���ϱ��Լ��� ����Ѵ�.
	int a, b;
	printf("ù��° ���ڸ� �Է��ض�: ");
	scanf_s("%d", &a);
	printf("�ι�° ���ڸ� �Է��ض�: ");
	scanf_s("%d",  &b);
	
	int result = multiple(a, b);
	printf("���ϱ� ���� ���: %d * %d = %d\n", a,b,result);

	return 0;
}