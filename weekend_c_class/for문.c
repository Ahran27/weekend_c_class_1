#include <stdio.h>
int main(void)
{
	/*
	
	for(�ʱⰪ;���ǽ�;������){
		������ �����ϸ� ������ �ڵ�
	}

	*/
	int forNumber;
	for (forNumber = 1; forNumber <= 10; forNumber++) {//forNumber�� 1, forNumber�� 10���� ������ ���� forNumber ����
		printf("�ݺ�%d\n", forNumber);

	}

	//�ݺ� 10���� �ݺ�1���� ���
	int i;
	for (i = 10; i >= 1; i--) {
		printf("�ݺ�%d\n", i);
	}

	return 0;
}