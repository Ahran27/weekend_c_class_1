#include <stdio.h>
int main(void)
{
	char good[] = "good";
	char* bad = "hello";

	printf("%s %s", good, bad);

	good[0] = 'H';//기존에 할당된 배열을 대체하는 것이기 때메 가능
	//good = "new Good!";

	//bad[0] = 's';//안먹음. 읽기 전용에 들어가있어서
	bad = "new bad";
	printf("%s %s", good, bad);


	return 0;
}