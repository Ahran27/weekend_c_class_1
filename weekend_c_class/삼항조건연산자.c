#include <stdio.h>
int main(void)
{
	//���ǽ�?? ������ �̰� ��µ�(true):Ʋ���� �̰� ��µ�(flase);

	int ten = 10, twenty = 20;
	int max;
	max = ten > twenty ? ten : twenty;//10�� 20���� �۴� �´ٸ� ��, �ƴ϶�� twenty
	printf("��� ���� : %d\n", max);
	
	//����ڿ��� ���̸� �Է¹޾Ƽ� �� ���̰� 19 �̻��̶�� ����(1), �̼����ڶ�� (0)���
	int age, result;
	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d",&age);
	result = age >= 19 ? 1 : 0;
	printf("���: %d\n", result);


	int score = 85;
	char grade = (score >= 90) ? 'A' : (score >= 80) ? 'B' : (score >= 70) ? 'C' : 'D';
	printf("����: %d/ ���: %c\n", score, grade);

	int number;
	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &number);

	printf("���: %s\n", (number == 0) ? "0�� Ư����":
		(number > 0) ?
		((number % 2 == 0)?"����̸鼭 ¦��":"����̸鼭 Ȧ��"):
		(number % 2 == 0) ? "�����̸鼭 ¦��" : "�����̸鼭 Ȧ��");//%s��



	return 0;
}