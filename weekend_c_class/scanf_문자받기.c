#include <stdio.h>
int main(void)
{
	/*char scanf_string[50];
	printf("scanf_string에 들어갈 문자열을 입력하세요: ");

	scanf_s("%s", scanf_string,(unsigned int)sizeof(scanf_string));        //-->복잡하지만 명시적으로 요구를 하는 놈. 혹시모를 오류를 대처할 수 있음                                                     
	printf("%s\n", scanf_string);*/

	char getString[50];
	printf("getString문자열을 입력하세여: ");
	gets_s(getString, sizeof(getString));//언사인드로 크기 정의 할 필요 없음. 근데 한줄만 해야함. 
	printf("%s\n", getString);

	return 0;
}