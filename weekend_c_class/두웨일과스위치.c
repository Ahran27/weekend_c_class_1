#include <stdio.h>
int main(void)
{
	int choice;
	do {
		printf("\n++++�޴�++++\n");
		printf("1.������ �λ縻\n");
		printf("2.���Ի�� ȯ����Ʈ\n");
		printf("3. ������ �� ��\n");
		printf("0. ����\n");
		printf("�޴��� �Է����ּ���: \n");
		scanf_s("%d", & choice);

		switch (choice) {
		case 1:printf("����ض�\n++�� �帲++\n");
			break;
		case 2:printf("ȯ��~ ������~\n++�� �帲++\n");
			break;
		case 3:printf("1. ȸ�� ���� �����\n2.�μ��ΰ� �ޱ�\n3.�ŷ�ó����\n++�� �帲++\n");
			break;
		case 0: printf("���α׷� ����");
			break;
		default:printf("��ȣ �ٽ� �Է� �ٶ�");
		}

	} while (choice != 0);






		return 0;
}