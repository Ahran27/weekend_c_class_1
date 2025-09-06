#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	/*
	난수를 구해서
	만약 사용자의 입력이 0과 같다면 가위
	1과 같다면 당신:바위
	2와 같다면 당신: 보

	컴퓨터도 똑같이 0=가위/1=바위/1=보 출력

	컴터의 숫자와 사용자가 입력한 숫자가 같다면
	결과: 비겼습니다!

	사용자가 이겼다면
	결과: 당신이 이겼습니다

	컴터가 이겼다면
	결과: 컴터가 이겼습니다
	*/
	int user,com;

	srand((unsigned int)time(NULL));
	printf("가위바위보 게임 시작\n0: 가위 / 1: 바위 / 2: 보 중 하나를 선택하세요: ");
	scanf_s("%d", &user);

	com = rand() % 3;

	if (user == 0) printf("당신: 가위\n");
	else if (user == 1) printf("당신: 바위\n");
	else if (user == 2) printf("당신: 보\n");

	if (com == 0) printf("컴퓨터: 가위\n");
	else if (com == 1) printf("컴퓨터: 바위\n");
	else if (com == 2) printf("컴퓨터: 보\n");

	/*if (user == com) {
		printf("결과: 비겼습니다");
	}
	else if (user > com) {
		printf("결과: 당신이 이겼습니다");
	}
	else if (user < com) {
		printf("결과: 당신이 졌습니다");
	}
	else { printf("유효한 입력이 아닙니다."); }
	*/


	if (user == com) {
		printf("결과: 비겼습니다");
	}
	else if ((user == 0 && com ==2) || (user == 1 && com == 0) || (user == 2 && com == 1)) {
		printf("결과: 당신이 이겼습니다");
	}
	else {
		printf("결과: 당신이 졌습니다");
	}
	
	

	return 0;
}