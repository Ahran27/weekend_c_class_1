#include<stdio.h>
int main(void)
{
	//����: 68,����: 75,����: 88,����: 60,�̼�: 96
	//�⸻��� ��� ���ϱ�(�Ҽ��� ���ڸ����� ���)
	/*
	int korean, math, science, moral, art, result;
	korean = 68;
	math = 75;
	science = 88;
	moral = 60;
	art = 96;
	result = (korean + math + science + moral + art) / 5;
	printf("(%d + %d + %d + %d+ %d) / 5", korean, math, science, moral, art, result);
	*/
	int total = 68 + 75 + 88 + 60 + 96;
	float avg = total / 5.0f;
	printf("�⸻��� ����� :: %.1f�� �Դϴ�",avg);//%.1f -> �Ҽ��� 1�ڸ���
	
	//64/58/87.5/768/96.9
	//2° �ڸ����� ���
	float total_2 = 64 + 56 + 87.5f + 76.8f + 96.9f;
	float avg_2 = total_2 / 5.0f;
	printf("�⸻��� ���2�� : %.2f�� �Դϴ�", avg_2);
	return 0;
}