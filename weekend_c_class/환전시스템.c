#include <stdio.h>
int main(void)
{
	//달러1,390
	//엔화 9
	//유로화 1,622

	double won;
	int menu;
	printf("환전할 금액(원)을 입력하세요: ");
	scanf_s("%lf", &won);

	printf("1.달러(1USD = 1,390원)\n2.엔화(1JPY = 9원)\n3.유로(1EUR = 1,622원)\n선택: ");
	scanf_s("%d", &menu);

	switch (menu) {
	case 1:printf("달러: %.2f USD\n",won/1390);
		break;
	case 2:printf("엔화: %.2f JPY\n", won / 9);
		break;
	case 3:printf("유로화: %.2f EUR\n", won / 1626.34);
		break;
	default:printf("잘못된 입력입니다");
	}




	return 0;
}