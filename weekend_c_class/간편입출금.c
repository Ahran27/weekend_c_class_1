#include <stdio.h>
int main(void)
{
	//�ʱ� �ܾ�
	int money = 10000;
	int menu, amount;

	while (1) {
		printf("\n====ATM====\n");
		printf("1. �ܾ���ȸ \n2. �Ա� \n3. ��� \n4. ����\n");
		printf("�޴�����");
		scanf_s("%d", &menu);

		//�߸��� �޴��� �Է¹޾Ҵٸ�
		if (menu < 1 || menu>4) {
			printf("�߸��� �Է��Դϴ�");
			continue;
		}
		if (menu == 1) {
			printf("���� �ܾ�:%d\n", money);
		}
		
		//���� �Ա��� �����ٸ� �Ա� �ݾ��� amount���ٰ� ���� �� money�� �����ֱ�
		//�߸��� ��(-)�� �Է��ߴٸ� �ٽ� �ݺ����� ���ư�
		else if (menu == 2) {
			printf("�Աݾ�?: ");
			scanf_s("%d", &amount);
			printf("%d �Ա� �� �ܾ�: %d", amount, amount+money );
			if (amount < 0) {
				prinf("�߸��� �ݾ���\n");
				continue;
			}
			money += amount;
		}

		//3�� ����� �Է��ߴٸ�
		//amount�� ��ݱݾ��� �־��ֱ�
		//���� �ຸܾ�� �� ū ��ݾ��� �Է��ߴٸ� �ܾ��� �����ϴٰ� �˸� �� �ٽ� �ݺ�
		//�ܾ׺��� ���� �ݾ��� ����Ϸ� �Ѵٸ� �ܾ׿��� ���ֱ�
		else if (menu == 3) {
			printf("��ݾ�?: ");
			scanf_s("%d", &amount);
			printf("%d ��� �� �ܾ�: %d", amount, amount - money);
			if (amount > money) {
				printf("�ܾ��� ������\n");
				continue;
			}
			money -= amount;
		}
		
		//4���� ���� ���Ḧ �����ߴٸ� atm�����ϱ�
		else if (menu == 4) {
			printf("ATM ������");
			break;
		}
	}


	return 0;
}