#include <stdio.h>
int main(void)
{
	//�޷�1,390
	//��ȭ 9
	//����ȭ 1,622

	double won;
	int menu;
	printf("ȯ���� �ݾ�(��)�� �Է��ϼ���: ");
	scanf_s("%lf", &won);

	printf("1.�޷�(1USD = 1,390��)\n2.��ȭ(1JPY = 9��)\n3.����(1EUR = 1,622��)\n����: ");
	scanf_s("%d", &menu);

	switch (menu) {
	case 1:printf("�޷�: %.2f USD\n",won/1390);
		break;
	case 2:printf("��ȭ: %.2f JPY\n", won / 9);
		break;
	case 3:printf("����ȭ: %.2f EUR\n", won / 1626.34);
		break;
	default:printf("�߸��� �Է��Դϴ�");
	}




	return 0;
}