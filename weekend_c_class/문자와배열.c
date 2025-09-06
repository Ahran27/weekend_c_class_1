#include <stdio.h>
int main(void)
{
	char stringText[] = "안녕하세요!";//12바이트. 한글은 2바이트, 기호 1바이트, null1바이트. //
	printf("문자배열 stringText의 길이는 %zu\n", sizeof(stringText));

	char englishText[] = "hello!";//7바이트. 영어는 1바이트, 기호 1바이트, null1바이트. //
	printf("문자배열 englishText의 길이는 %zu\n", sizeof(englishText));

	char longText[50] = "This is long text";//50바이트. 전체 배열을 50으로 해놨기 때메
	printf("문자열 배열 longText의 길이는: %zu\n", sizeof(longText));
	printf("문자열 배열 longText의 컨텐츠 길이는: %d\n", strlen(longText));

	printf("%s\n",longText);
	
	char introduce[30] = "my name is 아란";
	printf("%s",introduce);
	introduce[11] = '\0';//작은 따옴표
	printf("%s", introduce);


	return 0;
}