#include <stdio.h>
int main(void)
{
	int* p1, * p2, * p3, * p4, * p5;
	int* p[5];

	int a = 3;
	p[3] = &a;
	printf("%p\n", p[3]);//�ּҰ�
	printf("%d\n", *p[3]);//�����Ͱ�

	//������ ���� ������ �����
	//������ �迭�� ������ ��
	//�� �����ͺ����� ������ ������ �ּҸ� ����
	//for���� ���� ������ �迭 ���

	int x = 10,y = 20,z = 30;
	int* ptrArr[3];
	ptrArr[0] = &x;
	ptrArr[1] = &y;
	ptrArr[2] = &z;

	for (int i = 0; i < 3; i++) {
		printf("ptrArr[%d]�� ����Ű�� �� %d\n", i,*ptrArr[i]);
	}



	return 0;
}