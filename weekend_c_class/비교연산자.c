#include <stdio.h>
int main(void)
{
  //a > b
  //a < b
  //a >= b
  //a <= b
  //a == b
  //a != b

	//��(����1)/����(0)���� ���� �� ����

	int a = 1, b = 10;
	printf("a > b : %d\n",a > b);
	printf("a < b : %d\n",a < b);
	printf("a >= b : %d\n",a >= b);
	printf("a <= b : %d\n",a <= b);
	printf("a == b : %d\n",a == b);
	printf("a != b : %d\n",a != b);

	/*
	����������
	���ҿ���
	����--; �Ǵ� --����;
	����++; �Ǵ� ++����;
	*/
	int y = 10;
	int x = y++;
	printf("y�� ���� : %d\n", x);
	printf("y�� ��: %d\n", y);//y���� ����

	x = ++y;//++�� ���� ����
	printf("x�� y�� �־���! : %d", x);

	return 0;
}