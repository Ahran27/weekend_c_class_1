#include <stdio.h>
int main(void)
{
	int hi = 1;
	while (hi <= 10) {
		printf("�ȳ��ϼ��� %d\n",hi);//���ڴ� �ݺ���Ű�� ���� Ƚ��
		hi++;//hi�� �����ϴ� 10�� �Ǹ� ����
	}
	//����6�ܿ� �ش��ϴ� ���鸸 �̱�
	int gugudan1 = 1;
	while (gugudan1 <= 60) {
		if(gugudan1 % 6 == 0)
		printf("%d\n", gugudan1);
		gugudan1++;
	}

	return 0;
}