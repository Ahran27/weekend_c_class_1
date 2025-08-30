#include <stdio.h>
int main(void)
{
	/*
	if(조건식){
		조건을 만족할 경우 실행할 코드;
	}

	if(조건식)
		조건을 만족할 경우 실행할 코드
	*/

	int ifNumber = 10;
	if (ifNumber < 500) {
		printf("%d이 500보다 작니? 참입니다", ifNumber);
	}

	if (ifNumber == 3) {
		printf("%d과 3은 같다", ifNumber);
	}

	//하루 걸음 수를 입력받고 조건문으로 걸음수가 10000보 이상일 경우에만
	//하루에 *보 걷다니!! 대단합니다~~ 출력하기
	int walk;
	printf("너 하루에 몇 보 걸음?: ");
	scanf_s("%d", &walk);
	if (walk >= 10000) {
		printf("하루에 %d보 걷다니!! 대단합니다~~",walk);
	}

	char alpha = 'A';
	if (alpha == 'B') {
		printf("alpha는 B와 같습니다.");
	}
	else if (alpha == 'A') {
		printf("alpha는 A입니다..");
	}
	
	else {
		printf("alpha는 B와 다릅니다!");
	}


	/*
	숫자를 입력받아 3보다 크다면 고양이 출력
	1과 같다면 강아지
	3보타 작고 1보다 크다면 햄스터
	*/
	int animal;
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &animal);

	if (animal > 3) {
		printf("고양이");
	}
	else if (animal == 1) {
		printf("강아지");
	}
	else if(animal >1 && animal < 3){
		printf("햄스터");
	}
	else {
		printf("일치하는 동물 없음");
	}
	return 0;
}