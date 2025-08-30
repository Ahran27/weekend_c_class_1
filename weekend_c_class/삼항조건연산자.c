#include <stdio.h>
int main(void)
{
	//조건식?? 맞으면 이게 출력됨(true):틀리면 이게 출력됨(flase);

	int ten = 10, twenty = 20;
	int max;
	max = ten > twenty ? ten : twenty;//10이 20보다 작니 맞다면 텐, 아니라면 twenty
	printf("결과 값은 : %d\n", max);
	
	//사용자에게 나이를 입력받아서 그 나이가 19 이상이라면 성인(1), 미성년자라면 (0)출력
	int age, result;
	printf("나이를 입력하세요: ");
	scanf_s("%d",&age);
	result = age >= 19 ? 1 : 0;
	printf("결과: %d\n", result);


	int score = 85;
	char grade = (score >= 90) ? 'A' : (score >= 80) ? 'B' : (score >= 70) ? 'C' : 'D';
	printf("학점: %d/ 등급: %c\n", score, grade);

	int number;
	printf("숫자를 입력하세요: ");
	scanf_s("%d", &number);

	printf("결과: %s\n", (number == 0) ? "0은 특별함":
		(number > 0) ?
		((number % 2 == 0)?"양수이면서 짝수":"양수이면서 홀수"):
		(number % 2 == 0) ? "음수이면서 짝수" : "음수이면서 홀수");//%s는



	return 0;
}