#include <stdio.h>

struct Person {
	char name[20];
	int age;
};

void printPerson(struct Person p);//�̸� ����. ���� sum �Լ��� ���� ����
int sum(int a);

int main(void)
{
	struct Person me = { "ȫ�浿",25 };
	printPerson(me);//���� sum �Լ��� �ٸ��� ����Ʈ �� �ʿ� ���� ������ �ؿ� void �Լ��� ����Ʈ�� ���ֱ� ����

	int a = 5;
	int result = sum(a);
	printf("%d", result);


	return 0;
}

void printPerson(struct Person p) {
	printf("�̸�: %s, ����: %d\n", p.name, p.age);
}//���� sum �Լ��� ���� ����. ��� void�ϱ� return �ʿ� ����.

int sum(int a) {
	return 5 + a;
}