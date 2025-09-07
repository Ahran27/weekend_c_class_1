#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	char nickname[20];
	int job;

	srand((unsigned int)time(NULL));
	printf("게임 닉네임을 입력하세여: ");
	scanf_s("%s", nickname, (unsigned)sizeof(nickname));

	
		
		//1~3까지 랜덤값 넣기
		//프린트 환영합니다 닉네임님
		//프린트 당신의 직업은
		//스위치문을 사용하여 job에 들어온 랜덤값이 1이라면전사
		//2라면 마법사
		//3이라면 궁수
	job = rand() % 3 + 1;
	printf("환영합니다 %s 님!\n",nickname);
	printf("당신의 직업은.. ");

	switch (job) {
	case 1:printf("전사입니다!");
		break;
	case 2:printf("마법사입니다!");
		break;
	case 3:printf("궁수입니다!");
		break;
	}


	return 0;
}