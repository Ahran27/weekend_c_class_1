#include <stdio.h>
void  sayHello() {
	printf("hello world\n");
}

int add(int a, int b) {
	return a + b;

}

void c_class(char* name) {
	printf("Hello,%s\n", name);
}

int main(void)
{
	/*
	�Լ�: Ư�� �۾��� �����ϴ� �ڵ��� / ���� ����

	��ȯ�� �Լ��̸�(�Ű�����){
	return ?;
	}
	��ȯ��: �Լ��� ó������� ������ �� �˸��� �ڷ����� �������(int, float,void)
	�Լ� �̸�: �����ڰ� ���� ����(ȣ���� �� ����� �̸�)
			*ȣ���̶�? ����� �۵��� �� �ֵ��� �������ִ� ��
	�Ű�����: �Լ��� ����� ���� ���(�� �ִ����� ���� ��°��� �޶���)
	return: �Լ��� �۾��� �P�� �� ȣ���� ������ ���� �����ִ� ��ɾ�
			*��ȯ����  void��� ���� ����
	
	������ ��� ���� / �Լ� �̸��� ��ɿ� �°� �����־����. �׷��� �̸��� ���� �˱� ����, �ڵ��� ������ ������ / ���������� ������
	*/
	sayHello();
	int sum = add(5, 3);
	printf("%d\n", sum);

	//c_class("ahran");
	//c_class("user");
	
	char name[20];
	printf("�̸��� �Է��� �ּ��� : ");
	scanf_s("%s", name, (unsigned)sizeof(name));
	c_class(name);
	//12�� ���Ҵ�~

	return 0;
}