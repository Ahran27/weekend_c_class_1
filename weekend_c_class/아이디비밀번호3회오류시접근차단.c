#include <stdio.h>
int main(void)
{
	//������ id����: 1234
	//pw�� ����: 5678
	//������� �Է��� ���� inputid / inputpw����
	//�õ�Ƚ���� ���� tries = 0;
	//while�� ����Ͽ� 3������ �õ� �����ϰ� �� ����
	//���̵�� ��й�ȣ�� �Է¹޾� �� �ּҿ� �־��ֱ�
	//���࿡ 1234�� ��ǲ���̵� ����, 5678�� ��ǲpw�� ���ٸ� �α��� ����(�ݺ� ����)
	//�α��ο� �ǻu�ߴٸ� ���� ��ȸ �˷��ֱ�
	//�õ� Ƚ�� ����
	//�õ� Ƚ���� 3�� �������ٸ�print3ȸ ���� �����̵Ǿ����ϴ�.
	
	int id = 1234;
	int pw = 5678;
	int inputid,inputpw;
	int tries = 0;

	while (tries < 3) {
		printf("���̵� �Է��ϼ���: ");
		scanf_s("%d", &inputid);
		printf("����� �Է��ϼ���: ");
		scanf_s("%d", &inputpw);

		if (inputid == id || inputpw == pw) {
			printf("�α��� ����");
			break;
		}

		else {
			printf("�α��� ����. ���� ��ȸ�� %d���Դϴ�\n", 2-tries);
			tries++;
		}
	}

	if (tries == 3) {
		printf("3ȸ ���� ������ ���ܵǾ����ϴ�.");
	}


	return 0;
}