#include <stdio.h>
int main(void)
{
	for (int i = 0; i <= 10; i++) {//for�� �ȿ��� int �����ϸ�, for�� �ȿ����� ��ȿ��. �׷��� ���� while�̶� ���� �ᵵ ������ �ߺ����� ����
		if (i == 6) {
			break;
		}
		printf("%d\n", i);

	}

	int i = 0;
	while (i <= 10) {
		if (i == 6) {
			break;
		}
		printf("%d\n", i);
		i++;
	}

	return 0;
}