#include <stdio.h>
int main(void)
{
	/*
	<<: ���� ����Ʈ ������(10*2^n��)
		�������� ����ִ� ��Ʈ�� 0�� ä����
	>>: ������ ����Ʈ ������(10/2^n��)
		�����ڸ� ��Ʈ�� ������� �� ��ȣ ��Ʈ�� �״�� ������
	 >>1:��� ��Ʈ���� 1��ŭ �̵��Ѵ�
	*/
	int num1 = 10, num2 = 20;
	int shift_left = num1 << 2;//10 * 2 ^ 2
	int shift_right = num2 >> 2;
	prinft("%d << 2 = %d\n", num1, shift_left);
	prinft("%d >> 2 = %d\n", num2, shift_right);

	
	return 0;
}