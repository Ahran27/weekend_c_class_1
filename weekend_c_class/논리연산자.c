#include<stdio.h>
int main(void)
{
	/*
	* ���׿����ڶ� �ϳ��� ������ ������ �� �ִ� ������
	||(or): �ǿ����� �� �ϳ��� true�̸� true��� ����� ��ȯ(�Ǵ�~)
	&&(and): �ǿ����� �� �ϳ��� ���� false��� false��� ����� ��ȯ(�׸���~)
	!(not): ���ѿ����ڷ� ���� true��� flase�� ��ȯ�Ѵ�.
	e.g. 10 > 20 : flase --> true
	*/

	int one = 10, two = 20, three = 30, four = 40;
	int result;

	result = one > two || two >= three || three > four;
	printf("result: %d\n", result);
	//true ; 1, flase ; 0

	result = one > two || two <= three || three > four;
	printf("result: %d\n", result);

	result = one <= two && two <= three && three <= four;
	printf("result: %d\n", result);

	result = !(one > two);
	printf("result: %d\n", result);



	return 0;
}