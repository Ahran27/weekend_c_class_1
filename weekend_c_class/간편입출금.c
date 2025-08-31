#include <stdio.h>
int main(void)
{
	//초기 잔액
	int money = 10000;
	int menu, amount;

	while (1) {
		printf("\n====ATM====\n");
		printf("1. 잔액조회 \n2. 입금 \n3. 출금 \n4. 종료\n");
		printf("메뉴선택");
		scanf_s("%d", &menu);

		//잘못된 메뉴를 입력받았다면
		if (menu < 1 || menu>4) {
			printf("잘못된 입력입니다");
			continue;
		}
		if (menu == 1) {
			printf("현재 잔액:%d\n", money);
		}
		
		//만약 입금을 눌렀다면 입금 금액을 amount에다가 넣은 후 money에 합쳐주기
		//잘못된 값(-)을 입력했다면 다시 반복으로 돌아감
		else if (menu == 2) {
			printf("입금얼마?: ");
			scanf_s("%d", &amount);
			printf("%d 입금 후 잔액: %d", amount, amount+money );
			if (amount < 0) {
				prinf("잘못된 금액임\n");
				continue;
			}
			money += amount;
		}

		//3번 출금을 입력했다면
		//amount에 출금금액을 넣어주기
		//만약 잔약보다 더 큰 출금액을 입력했다면 잔액이 부족하다고 알린 후 다시 반복
		//잔액보다 작은 금액을 출금하려 한다면 잔액에서 빼주기
		else if (menu == 3) {
			printf("출금얼마?: ");
			scanf_s("%d", &amount);
			printf("%d 출금 후 잔액: %d", amount, amount - money);
			if (amount > money) {
				printf("잔액이 부족함\n");
				continue;
			}
			money -= amount;
		}
		
		//4번을 눌러 종료를 선택했다면 atm종료하기
		else if (menu == 4) {
			printf("ATM 종료함");
			break;
		}
	}


	return 0;
}