#include <stdio.h>
#define NAME_LEN 10
#define PHONE_LEN 20//��ũ�� ���
typedef int integer;//Ÿ���� �������ϰڴ�. int�� integer�� ���ڴ�.
//typedef struct student stu;
#define BRAND_NAME 20

typedef struct student//����ü �ȿ� �̸�, ��ȣ, �й� �� ����
{
	char name[NAME_LEN];
	char phone[PHONE_LEN];//��ȭ�� ������ �ʿ� ����, 0���� �����ϴϱ�(�Ǿ�0�� �����ؼ� ����) ���ڿ��� ó��
	integer number;
}stu;//�����ϸ鼭 ������̱�

typedef struct car
{
	char brand[BRAND_NAME];
	int year;
	
}car;

int main(void)
{
	/*
	struct{}; : ����ü�� �ڷ����� ���� �� ���
	����ü : ���� ������ �� �ֱ� ���� ���� ���� ��
	*/
	//stu s1,s2;//34*2 = 68����Ʈ
	//printf("�̸�: ");
	//gets_s(s1.name,NAME_LEN);

	//printf("������ȣ: ");
	//gets_s(s1.phone, PHONE_LEN);//gets �� ���ڿ� �޾ƿ��°�

	//printf("�й�: ");
	//scanf_s("%d",&s1.number);//���ڹ޾ƿðŴϱ�

	//while (getchar() != '\n');//���Ͱ��� �����ִٸ� ���Ͱ��� ���� �ڵ�  /   getchar �ѱ��ڸ� �Է��ϴ°�

	//printf("�̸�: ");
	//gets_s(s2.name, NAME_LEN);

	//printf("������ȣ: ");
	//gets_s(s2.phone, PHONE_LEN);

	//printf("�й�: ");
	//scanf_s("%d", &s2.number);

	//printf("\n\n=====�л� ���� ���=====\n\n");
	//printf("%3d %-20s %-20s %8d\n", 1, s1.name, s1.phone, s1.number);
	//printf("%3d %-20s %-20s %8d\n", 2, s2.name, s2.phone, s2.number);

	//============================================================================

	car myCar = { "Tesla",2023 };//���� ���ÿ� �ʱ�ȭ
	car* ptr = &myCar;//ptr�� mycar�� �ּ� �Ѱ��ٰ�
	printf("�귣��: %s\n", (*ptr).brand);//������ ����ؼ� ������
	printf("����: %d\n", ptr->year);//���������� �ʰ� ȭ��ǥ         �� �� ��� ����




	return 0;
}