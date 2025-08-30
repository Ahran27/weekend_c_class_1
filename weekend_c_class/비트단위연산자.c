#include <stdio.h>
int main(void)
{
	/*
	1. &(and): �����ϴ� �� ��Ʈ�� ���� ��� 1�̸� 1�� ��ȯ, �ƴϸ� 0
	2. |(or): �����ϴ� ��Ʈ�� �� �� 1��  ������ 1�� ��ȯ
	3. ^(xor): �����ϴ� ��Ʈ�� ���� �ٸ��� 1�� ��ȯ
	4. ~(not): ��Ʈ�� ���� 1�̸� 0����, 0�̸� 1�� ����� �������� ��Ÿ��
	*/
	int bitFive = 5;//0101
	int bitThree = 3;//0011
	/*
	0101
	0011
	�� ��Ʈ�����ϱ�
	�� 
	&������ 0001(1)
	|������ 0111(7)
	^������ 0110(6)
	*/
	printf("bitFive & bitThree = %d\n", bitFive & bitThree);
	printf("bitFive | bitThree = %d\n", bitFive | bitThree);
	printf("bitFive ^ bitThree = %d\n", bitFive ^ bitThree);
	printf("~%d = %d\n", bitFive, ~bitFive);//2�� ���� --> -6
	printf("~%d = %d\n", bitThree, ~bitThree);


	return 0;
}