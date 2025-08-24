#include <stdio.h>
int main(void)
{
	printf("%d", 42);
	printf("%d", 42);
	printf("%10d", 42);//오른정렬

	printf("%5d", 12345);
	printf("%5d\n", 123456);
	printf("%-10d", 123456);//왼정렬
	printf("%d\n", 1);
	
	printf("%010d\n", 123456);//공백을 0으로

	printf("%8.4f", 3.14159);
	//8: 데이터칸 개수
	//.2: 소수점 자릿수. 그 다음자리 수 반올림



	return 0;
}