#include <stdio.h>
int main(void)
{
	int choice;
	do {
		printf("\n++++메뉴++++\n");
		printf("1.오늘의 인사말\n");
		printf("2.신입사원 환영멘트\n");
		printf("3. 오늘의 할 일\n");
		printf("0. 종료\n");
		printf("메뉴를 입력해주세요: \n");
		scanf_s("%d", & choice);

		switch (choice) {
		case 1:printf("고생해라\n++나 드림++\n");
			break;
		case 2:printf("환영~ 잘하자~\n++나 드림++\n");
			break;
		case 3:printf("1. 회사 계정 만들기\n2.인수인계 받기\n3.거래처미팅\n++나 드림++\n");
			break;
		case 0: printf("프로그램 종료");
			break;
		default:printf("번호 다시 입력 바람");
		}

	} while (choice != 0);






		return 0;
}