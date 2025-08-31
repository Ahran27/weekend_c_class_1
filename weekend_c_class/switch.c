#include <stdio.h>
int main(void)
{
	/*
	int 변수 = 초기값;
	switch(변수){
		case 값1;코드1;
		break;
		case 값2;코드2;
		break;
		case 값3;코드3;
		break;
		case 값4;코드4;
		break;
		}
	변수가 값1과 같다면 코드 1 실행
	*/
	int day;
	printf("요일을 선택해 주세여(1~7중 택 1/ 1:월욜 ~ 7:일욜): ");
	scanf_s("%d", &day);

	switch(day){
	case 1:printf("월욜입니다.\n");
		break;
	case 2:printf("화욜입니다.\n");
		break;
	case 3:printf("수욜입니다.\n");
		break;
	case 4:printf("목욜입니다.\n");
		break;
	case 5:printf("금욜입니다.\n");
		break;
	case 6:printf("토욜입니다.\n");
		break;
	case 7:printf("일욜입니다.\n");
		break;
	default:printf("유효하지 않은 입력입니다.");
	}


	return 0;
}