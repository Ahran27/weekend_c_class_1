#include <stdio.h>
int main(void)
{
	/*
	1:���ϱ�
	2:����
	3:���ϱ�
	4:������

	��ȣ�� �����ϼ���:
	��ȣ�� ������ ���� 2�� �����

	�ΰ��� ������ �Է��ϼ���:
	������ ���� ������ 1�� ����� ���� �� scanf_s�� �־��ֱ�
	
	����ġ ����
	- �������� �� �� �ι�° �޾ƿ� ���ڰ� 0�̶�� 0���� ���� �� �����ϴ� ��� ���� ���
	- 2��° ���� ���ڰ� 0�� �ƴ϶�� �����ֱ�
	*/
	int calculate, number1, number2;

	printf("��ȣ�� �����ϼ���.\n1:���ϱ�\n2:����\n3 : ���ϱ�\n4 : ������: ");
	scanf_s("%d",&calculate);

	printf("�ΰ��� ������ �Է��ϼ���(����� ����)");
	scanf_s("%d %d", &number1,&number2);

	switch (calculate){
	case 1:printf("���: %d + %d = %d",number1,number2,number1+number2);
		break;
	case 2:printf("���: %d - %d = %d", number1, number2,number1-number2);
		break;
	case 3:printf("���: %d x %d = %d", number1, number2,number1*number2);
		break;
	case 4:
		if (number2 == 0) {
			printf("0���� ���� �� �����ϴ�.");
		}
		else {
		printf("���: %d / %d = %d", number1, number2,number1%number2);
		}
		break;
	default:printf("��ȿ���� ���� �Է��Դϴ�.");
	}
	return 0;
}