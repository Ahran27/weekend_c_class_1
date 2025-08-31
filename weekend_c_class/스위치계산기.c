#include <stdio.h>
int main(void)
{
	/*
	1:더하기
	2:빼기
	3:곱하기
	4:나누기

	번호를 선택하세요:
	번호를 저장할 변수 2개 만들기

	두개의 정수를 입력하세요:
	정수를 받을 변수를 1개 만들어 놓은 후 scanf_s로 넣어주기
	
	스위치 시작
	- 나눗셈을 할 땐 두번째 받아온 숫자가 0이라면 0으로 나눌 수 없습니다 라는 문구 출력
	- 2번째 들어온 숫자가 0이 아니라면 나눠주기
	*/
	int calculate, number1, number2;

	printf("번호를 선택하세요.\n1:더하기\n2:빼기\n3 : 곱하기\n4 : 나누기: ");
	scanf_s("%d",&calculate);

	printf("두개의 정수를 입력하세요(띄어쓰기로 구분)");
	scanf_s("%d %d", &number1,&number2);

	switch (calculate){
	case 1:printf("결과: %d + %d = %d",number1,number2,number1+number2);
		break;
	case 2:printf("결과: %d - %d = %d", number1, number2,number1-number2);
		break;
	case 3:printf("결과: %d x %d = %d", number1, number2,number1*number2);
		break;
	case 4:
		if (number2 == 0) {
			printf("0으로 나눌 수 없습니다.");
		}
		else {
		printf("결과: %d / %d = %d", number1, number2,number1%number2);
		}
		break;
	default:printf("유효하지 않은 입력입니다.");
	}
	return 0;
}