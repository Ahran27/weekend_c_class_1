#include <stdio.h>

int max(int pa, int pb) {
	if (pa > pb) {
		return pa;
	}
	else {
		return pb;
	}
}

int main(void)
{
	/*
	�ΰ��� ���� �� �� ū ���� ��ȯ�ϴ� �Լ�
	�ΰ��� ���� �Ű������� �޾� �� ū ���� ���� ��ȯ�ϴ� �Լ� �����

	main���� ù��°, �ι�° ���� ���� �Է¹ޱ�
	�Լ��� ȣ���Ͽ� �� ��� ������ ������ ����ϱ�
	*/

	int pa, pb;

	printf("ù��° ������ ������ �Է��ϼ���: ");
	scanf_s("%d", &pa);
	printf("�ι�° ������ ������ �Է��ϼ���: ");
	scanf_s("%d", &pb);

	int expensive = max(pa, pb);
	printf("�� ��� ������ ����: %d ��\n", expensive);





	return 0;
}