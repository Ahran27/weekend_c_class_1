#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	/*
	������ ���ؼ�
	���� ������� �Է��� 0�� ���ٸ� ����
	1�� ���ٸ� ���:����
	2�� ���ٸ� ���: ��

	��ǻ�͵� �Ȱ��� 0=����/1=����/1=�� ���

	������ ���ڿ� ����ڰ� �Է��� ���ڰ� ���ٸ�
	���: �����ϴ�!

	����ڰ� �̰�ٸ�
	���: ����� �̰���ϴ�

	���Ͱ� �̰�ٸ�
	���: ���Ͱ� �̰���ϴ�
	*/
	int user,com;

	srand((unsigned int)time(NULL));
	printf("���������� ���� ����\n0: ���� / 1: ���� / 2: �� �� �ϳ��� �����ϼ���: ");
	scanf_s("%d", &user);

	com = rand() % 3;

	if (user == 0) printf("���: ����\n");
	else if (user == 1) printf("���: ����\n");
	else if (user == 2) printf("���: ��\n");

	if (com == 0) printf("��ǻ��: ����\n");
	else if (com == 1) printf("��ǻ��: ����\n");
	else if (com == 2) printf("��ǻ��: ��\n");

	/*if (user == com) {
		printf("���: �����ϴ�");
	}
	else if (user > com) {
		printf("���: ����� �̰���ϴ�");
	}
	else if (user < com) {
		printf("���: ����� �����ϴ�");
	}
	else { printf("��ȿ�� �Է��� �ƴմϴ�."); }
	*/


	if (user == com) {
		printf("���: �����ϴ�");
	}
	else if ((user == 0 && com ==2) || (user == 1 && com == 0) || (user == 2 && com == 1)) {
		printf("���: ����� �̰���ϴ�");
	}
	else {
		printf("���: ����� �����ϴ�");
	}
	
	

	return 0;
}