#include <stdio.h>
int main(void)
{
	/*
	if(���ǽ�){
		������ ������ ��� ������ �ڵ�;
	}

	if(���ǽ�)
		������ ������ ��� ������ �ڵ�
	*/

	int ifNumber = 10;
	if (ifNumber < 500) {
		printf("%d�� 500���� �۴�? ���Դϴ�", ifNumber);
	}

	if (ifNumber == 3) {
		printf("%d�� 3�� ����", ifNumber);
	}

	//�Ϸ� ���� ���� �Է¹ް� ���ǹ����� �������� 10000�� �̻��� ��쿡��
	//�Ϸ翡 *�� �ȴٴ�!! ����մϴ�~~ ����ϱ�
	int walk;
	printf("�� �Ϸ翡 �� �� ����?: ");
	scanf_s("%d", &walk);
	if (walk >= 10000) {
		printf("�Ϸ翡 %d�� �ȴٴ�!! ����մϴ�~~",walk);
	}

	char alpha = 'A';
	if (alpha == 'B') {
		printf("alpha�� B�� �����ϴ�.");
	}
	else if (alpha == 'A') {
		printf("alpha�� A�Դϴ�..");
	}
	
	else {
		printf("alpha�� B�� �ٸ��ϴ�!");
	}


	/*
	���ڸ� �Է¹޾� 3���� ũ�ٸ� ����� ���
	1�� ���ٸ� ������
	3��Ÿ �۰� 1���� ũ�ٸ� �ܽ���
	*/
	int animal;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &animal);

	if (animal > 3) {
		printf("�����");
	}
	else if (animal == 1) {
		printf("������");
	}
	else if(animal >1 && animal < 3){
		printf("�ܽ���");
	}
	else {
		printf("��ġ�ϴ� ���� ����");
	}
	return 0;
}