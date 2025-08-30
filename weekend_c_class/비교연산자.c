#include <stdio.h>
int main(void)
{
  //a > b
  //a < b
  //a >= b
  //a <= b
  //a == b
  //a != b

	//참(정수1)/거짓(0)으로 나눌 수 있음

	int a = 1, b = 10;
	printf("a > b : %d\n",a > b);
	printf("a < b : %d\n",a < b);
	printf("a >= b : %d\n",a >= b);
	printf("a <= b : %d\n",a <= b);
	printf("a == b : %d\n",a == b);
	printf("a != b : %d\n",a != b);

	/*
	증감연산자
	감소연산
	변수--; 또는 --변수;
	변수++; 또는 ++변수;
	*/
	int y = 10;
	int x = y++;
	printf("y의 증가 : %d\n", x);
	printf("y의 값: %d\n", y);//y값이 먼저

	x = ++y;//++이 먼저 실행
	printf("x에 y를 넣었다! : %d", x);

	return 0;
}