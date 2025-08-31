#include <stdio.h>
int main(void)
{
	//오늘 날짜의 월, 일을 저장할 변수
	int month, day;
	//연말(12/31)까지 남은 총일수를 누적 저장할 변수(초기값:0)
	int daysLeft = 0;
	//월을 증가시키며 순회할 때 사용할 임시 변수
	int m;
	
	printf("오늘 날짜를 입력해주세요(월 일): ");
	scanf_s("%d %d", &month, &day);
	//8 30 --> month: 8 / day : 30

	//만약 월 입력이 1~12 범위를 넘어가는지 확인 //유효성 검사
	if (month < 1 || month > 12) {
		printf("월 입력이 올바르지 않습니다.\n");
		return 0;
	}
	
	//현재 달의 마지막 날짜(해당 달이 며칠까지 존재하는지 저장)
	int maxDay;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		maxDay = 31;
	}
	else if (month == 4 || month == 6 || month == 11) {
		maxDay = 30;
	}
	else {
		maxDay = 28;
	}

	//12월이라면 연말달과 같은 달이므로 31-18(오늘 일자만 빼줌)
	if (month == 12) {
		daysLeft += 31 - day;
	}
	else {//현재 달이 12월이 아니라면
		daysLeft += maxDay - day;//이번 달 남은 일수
		m = month + 1;//8월 30일에서는 1일만 남았으니 8월을 포함하면 한달을 더 포함하는 것

		while (m <= 12) {//12월이 될 때 까지 달의 일수를 더해주기
			if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
				daysLeft += 31;
			}
			else if (m == 4 || m == 6 || m == 9 || m == 11) {
				daysLeft += 30;
			}
			else {
				daysLeft += 28;
			}
			m++;

		}

		printf("연말(12/31)까지 남은 D day : %d일\n", daysLeft);


	}


	return 0;
}