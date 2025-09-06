#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	/*
	난수를 담을 변수와 입력을 받아올 변수를 만든다.
	시도횟수를 담을 변수를 만든다(초기값은 0)
	랜덤시드를 타임으로 받는다.
	생성했던 변수에 1~50까지의 난수를 넣어준다

	while문을 사용하여 시도횟수가 5보다 작다면
	(*번째 입력 시도)
	guess에 사용자의 입력을 받아올 것

	만약 사용자가 입력한 값이 0과 같다면 
	게임을 포기했습니다 출력 후 코드 종료하기

	만약 1보다 작거나 50보다 큰 수를 입력했다면
	범위 밖입니다.(1~50사이의 숫자를 입력하세요) 출력 후 
	다시 반복으로 이동
	
	유효한 입력이라면 시도횟수를 증가시킨 후

	정답일 경우
	정답! 숫자는 %d 였습니다(*번 만에 성곡)

	정답이 아니라면 (입력받은 값이 랜덤한 수보다 크다면)
	down을 출력

	입력받은 값이 랜덤한 수보다 작다면
	up을 출력

	시도횟수 5번을 다 사용했다면
	5번의 기회를 다사용했다는 문구 출력 후 정답 알려주기
	*/
	int target, guess;
	int tries=0;
	srand((unsigned int)time(NULL));
	target = rand() % 50 + 1;
	printf("업다운 게임 시작[1~50사이 숫자 맞추기, 0입력시 종료]\n");
	printf("총 5번의 기회가 있습니다\n");

	while (tries < 5) {
		printf("(%d번째 입력시도)\n", tries+1);
		printf("숫자를 입력하세요: ");
		scanf_s("%d", &guess);
		
		if (guess == 0) {
			printf("게임을 포기했습니다\n");
			break;
		}
		if (guess < 1 || guess > 50) {
			printf("범위 밖입니다.(1~50사이의 숫자를 입력하세요.)");
			continue;
		}
		tries++;
		if (guess == target) {
			printf("정답!숫자는 % d 였습니다.(%d번 만에 성공!)", target,tries);
			break;
		}
		else if (guess > target) {
			printf("DOWN\n");
			
		}
		else {
			printf("UP\n");
			
		}
		if (tries == 5) {
			printf("5번의 기회를 다사용했습니다\n");
			printf("정답은 %d 입니다.", target);
			
		}
	}
		

	
	return 0;
}