#include <stdio.h>

int multiple(int num1, int num2) {
	return num1 * num2;
}

int main(void)
{
	//숫자 2개 입력받은 후
	//곱하기 함수를 선언한다
	//입력받은 2개로 곱하기함수를 사용한다.
	int a, b;
	printf("첫번째 숫자를 입력해라: ");
	scanf_s("%d", &a);
	printf("두번째 숫자를 입력해라: ");
	scanf_s("%d",  &b);
	
	int result = multiple(a, b);
	printf("곱하기 연산 결과: %d * %d = %d\n", a,b,result);

	return 0;
}