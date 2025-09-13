#include <stdio.h>
#include <string.h>
int main(void)
{
	const char* questions[] = {
	"'�ѱ�'�� ����� �Է��ϼ���",
	"'�����'�� ����� �Է��ϼ���",
	"'���'�� ����� �Է��ϼ���"
	};

	const char* answers[] = {
		"korea",
		"cat",
		"apple",
	};

	//int ������ ����� ������ ������ ��! �ʱⰪ�� 0
	int score = 0;
	// ������ ����ִ� input 20ĭ¥�� �迭�� �����
	int input[20];
	// ������ ����� ���� �� �̸��� user
	const int* user;
	// total (��������) sizeof ���
	// sizeof(answers) = 24
	// sizeof(answers[0]) = 8
	//24 / 8 = 3
	int total = sizeof(answers) / sizeof(answers[0]);

	printf("=====���ܾ� ���� ����=====\n");
	//for���� ����Ͽ� total���� i�� �۴ٸ� i�� ����
	//����1: 	"'�ѱ�'�� ����� �Է��ϼ���"
	//�Է��� input�� �ޱ�

	//�Է¹��� input�� user�� ����(�����Ͱ� �Է°��� ����ų �� �ֵ���)
	for (int i = 0; i < total; i++) {
		printf("���� %d: %s\n��: ", i+1, questions[i]);
		scanf_s("%s", input,(unsigned)sizeof(input));
		user = input;
		//const char*user = korea

		//���� user�Է°���answers�� i�� ���ٸ�(strcmp) �����Դϴ� ��� �� score ����
		//�ƴ϶�� Ʋ�Ƚ��ϴ�. ������ __ �����ϴ�. ���� ����ϱ�
		if (strcmp(user, answers[i]) == 0) {
			printf("�����Դϴ�!\n\n");
			score++;
		}
		else {
			printf("Ʋ�Ƚ��ϴ�. ������ %s�����ϴ�.\n\n", answers[i]);
		}
	}
	

	printf("=====�����ǥ=====\n");
	printf("�� %d ���� �� %d ���� �������ϴ�.\n",total, score);
	/*
	3���� -�Ϻ��ؿ�~
	2���� - ���ݸ� �� ����-> ������
	2�� �̻� ������ ���ϸ� - �������� �� ������
	*/

	if (score == total) printf("�Ϻ��ؿ�~");
	else if(score >= total / 2)  printf("���ݸ� �� �����ؿ�~");
	else printf("�������� �� ������ �غ���~");




	return 0;
}