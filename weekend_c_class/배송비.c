#include <stdio.h>
int main(void)
{
	/*
	���űݾװ� ȸ�� ���ο� ���� ��_���� ������ ��
	*/
	int user = 20163, userCheck;
	int spent;
	printf("ȸ�� ��ȣ�� �Է��ϼ��� : ");
	scanf_s("%d", &userCheck);

	printf("������ �ݾ��� �Է��ϼ��� : ");
	scanf_s("%d", &spent);

	if (user == userCheck) {
		if (spent >= 100000) {
			printf("100,000�̻� ���ŷ� ����ǰ�� �����˴ϴ�. 50,000�̻� ���� ȸ���� ��ۺ� �����Դϴ�!");
		}
		else ("100,000�̻� ���ŷ� ����ǰ�� �����˴ϴ�. ��ȸ���� ��ۺ� 5,000���ΰ��˴ϴ�.");
	}
	else if (user == userCheck) {
		if (spent >= 50000) {
			printf(" 50,000�̻� ���� ȸ���� ��ۺ� �����Դϴ�!");

		}
		else ("��ȸ���� ��ۺ� 5,000���ΰ��˴ϴ�.");
	}
	else {
		printf("��ȸ���� ��ۺ� 5,000���ΰ��˴ϴ�.");
	}

	return 0;
}