#include <stdio.h>
int main(void)
{
	/*
	if(���ǽ�1){
	  ���ǽ�1�� �����ϸ� ������ �ڵ�
		if(���ǽ�2){
		  ���ǽ�1,2�� �����ϸ� ������ �ڵ�
		  ���ǽ� 1�� �����ؾ߸� �˻��� �� �ִ� ������ ����
		}
	}
	*/

	int studentNum = 201631, studentCheckNum;
	int passward = 8321, passwardCheck;
	printf("�й��� �Է����ּ���: ");
	scanf_s("%d", & studentCheckNum);

	printf("��й�ȣ�� �Է����ּ���: ");
	scanf_s("%d", &passwardCheck);

	if (studentNum == studentCheckNum) {
		if (passward == passwardCheck) {
			printf("%d�� �α��� �Ǿ����ϴ�.", studentCheckNum);
		}
		else {
			printf("��й�ȣ�� ��ġ���� �ʽ��ϴ�.");
		}
	}
	else {
		printf("���̵� ��ġ���� �ʽ��ϴ�~");
	}


	return 0;
}