#include <stdio.h>
int main(void)
{
	//���� ��¥�� ��, ���� ������ ����
	int month, day;
	//����(12/31)���� ���� ���ϼ��� ���� ������ ����(�ʱⰪ:0)
	int daysLeft = 0;
	//���� ������Ű�� ��ȸ�� �� ����� �ӽ� ����
	int m;
	
	printf("���� ��¥�� �Է����ּ���(�� ��): ");
	scanf_s("%d %d", &month, &day);
	//8 30 --> month: 8 / day : 30

	//���� �� �Է��� 1~12 ������ �Ѿ���� Ȯ�� //��ȿ�� �˻�
	if (month < 1 || month > 12) {
		printf("�� �Է��� �ùٸ��� �ʽ��ϴ�.\n");
		return 0;
	}
	
	//���� ���� ������ ��¥(�ش� ���� ��ĥ���� �����ϴ��� ����)
	int maxDay;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		maxDay = 31;
	}
	else if (month == 4 || month == 6 || month == 11) {
		maxDay = 30;
	}
	else {
		maxDay = 28;
	}

	//12���̶�� �����ް� ���� ���̹Ƿ� 31-18(���� ���ڸ� ����)
	if (month == 12) {
		daysLeft += 31 - day;
	}
	else {//���� ���� 12���� �ƴ϶��
		daysLeft += maxDay - day;//�̹� �� ���� �ϼ�
		m = month + 1;//8�� 30�Ͽ����� 1�ϸ� �������� 8���� �����ϸ� �Ѵ��� �� �����ϴ� ��

		while (m <= 12) {//12���� �� �� ���� ���� �ϼ��� �����ֱ�
			if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
				daysLeft += 31;
			}
			else if (m == 4 || m == 6 || m == 9 || m == 11) {
				daysLeft += 30;
			}
			else {
				daysLeft += 28;
			}
			m++;

		}

		printf("����(12/31)���� ���� D day : %d��\n", daysLeft);


	}


	return 0;
}