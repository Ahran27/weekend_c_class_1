#include <stdio.h>
int main(void)
{
	/*char scanf_string[50];
	printf("scanf_string�� �� ���ڿ��� �Է��ϼ���: ");

	scanf_s("%s", scanf_string,(unsigned int)sizeof(scanf_string));        //-->���������� ��������� �䱸�� �ϴ� ��. Ȥ�ø� ������ ��ó�� �� ����                                                     
	printf("%s\n", scanf_string);*/

	char getString[50];
	printf("getString���ڿ��� �Է��ϼ���: ");
	gets_s(getString, sizeof(getString));//����ε�� ũ�� ���� �� �ʿ� ����. �ٵ� ���ٸ� �ؾ���. 
	printf("%s\n", getString);

	return 0;
}