#include <stdio.h>
int main(void)
{
	for (int i = 0; i <= 10; i++) {//for문 안에서 int 선언하면, for문 안에서만 유효함. 그래서 밑의 while이랑 같이 써도 변수가 중복되지 않음
		if (i == 6) {
			break;
		}
		printf("%d\n", i);

	}

	int i = 0;
	while (i <= 10) {
		if (i == 6) {
			break;
		}
		printf("%d\n", i);
		i++;
	}

	return 0;
}