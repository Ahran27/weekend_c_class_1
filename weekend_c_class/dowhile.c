#include <stdio.h>
int main(void)
{
	int doWhile = 1;
	do {
		printf("doWhile�� %d�� ������\n", doWhile);
		doWhile++;
	} while (doWhile >= 10);//�ϴ� ���� 1�� ��� �� ������ �˻�
	
	//while (doWhile >= 10) {
	//	printf("���ϰ� ������\n");
	//	doWhile++;  // ������ ���� �˻� �� ���
	//}


	return 0;
}