#include <stdio.h>
int main(void)
{
	char good[] = "good";
	char* bad = "hello";

	printf("%s %s", good, bad);

	good[0] = 'H';//������ �Ҵ�� �迭�� ��ü�ϴ� ���̱� ���� ����
	//good = "new Good!";

	//bad[0] = 's';//�ȸ���. �б� ���뿡 ���־
	bad = "new bad";
	printf("%s %s", good, bad);


	return 0;
}