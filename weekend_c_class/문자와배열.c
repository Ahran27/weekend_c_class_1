#include <stdio.h>
int main(void)
{
	char stringText[] = "�ȳ��ϼ���!";//12����Ʈ. �ѱ��� 2����Ʈ, ��ȣ 1����Ʈ, null1����Ʈ. //
	printf("���ڹ迭 stringText�� ���̴� %zu\n", sizeof(stringText));

	char englishText[] = "hello!";//7����Ʈ. ����� 1����Ʈ, ��ȣ 1����Ʈ, null1����Ʈ. //
	printf("���ڹ迭 englishText�� ���̴� %zu\n", sizeof(englishText));

	char longText[50] = "This is long text";//50����Ʈ. ��ü �迭�� 50���� �س��� ����
	printf("���ڿ� �迭 longText�� ���̴�: %zu\n", sizeof(longText));
	printf("���ڿ� �迭 longText�� ������ ���̴�: %d\n", strlen(longText));

	printf("%s\n",longText);
	
	char introduce[30] = "my name is �ƶ�";
	printf("%s",introduce);
	introduce[11] = '\0';//���� ����ǥ
	printf("%s", introduce);


	return 0;
}