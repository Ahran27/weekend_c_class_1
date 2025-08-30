#include <stdio.h>
int main(void)
{
	/*
	입력받은 나이가 0~7이라면 800원
	입력받은 나이가 8~19이라면 1,200원
	입력받은 나이가 20~34이라면 1,600원
	입력받은 나이가 35~59이라면 2,000원
	입력받은 나이가 60~150이라면 무료
	입력받은 나이가 범위에 없다면 사람의 나이를 입력해 주세요 출력
	*/
	int age;
	printf("나이를 입력해주세요: ");
	scanf_s("%d", &age);
	if (age >= 0 && age <= 7) {
		printf("800원입니다");
	}
	else if (age >= 8 && age <= 19) {
		printf("1,200원입니다");
	}
	else if (age >= 20 && age <= 34) {
		printf("1,600원입니다");
	}
	else if (age >= 35 && age <= 59) {
		printf("2,000원입니다");
	}
	else if (age >= 60 && age <= 150) {
		printf("무료입니다");
	}
	else {
		printf("%d는 사람나이 아님~ 사람의 나이를 입력해주세요.",age);
	}

	return 0;
}