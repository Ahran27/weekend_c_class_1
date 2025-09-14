#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	/*
	�ý����� ����
	data: �޸𸮸� �����ؾ��ϴ� ������ static ���� ��. ���� ������ �𸣴� ���
	stack: {}�� ������ ����Ǵ� �͵��� �����

	�����ڰ� ����
	heap: �����޸�.  
	*/

	int num;
	printf("�����Է� : ");
	scanf_s("%d", &num);

	if (num < 2) {
		printf("���ڴ� �ּ� 2 �̻� �Է��ض�.");
		return 1;
	}

	//int numLength[num];
	//���迭�� ���� ������� �ٲ��� �ʾƾ� �����. 
	int *numLength = (int*)malloc(num*sizeof(int));//(num*sizeof(int) -> num 1���� ����Ʈ 4)����Ʈ�� �Ҵ��Ұž�
	//	�������� ����.     ������ �Ҵ����� ����
	if (numLength == NULL) { //���࿡ �Ҵ翡 �����ؼ� ������ ���ٸ�(null)
		printf("�޸� �Ҵ� ����\n");
		return 1;//�Լ��� �����ϰ� 1�� ��ȯ�ض�. 1�� ��ȯ�� ������ ���� �����ִ� ��.
	}
	numLength[1] = 3;
	printf("%d\n", numLength[1]);
	//���� 1�̶�� �������� �� ���� �� �� ����. �׷��� 

	free(numLength);//������ �����Ұ�(�޸� ������ ���� ����malloc ��� �� �� �����)

	return 0;
}