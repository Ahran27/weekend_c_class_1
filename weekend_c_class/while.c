#include <stdio.h>
int main(void)
{
	int hi = 1;
	while (hi <= 10) {
		printf("안녕하세요 %d\n",hi);//숫자는 반복시키고 싶은 횟수
		hi++;//hi가 증가하다 10이 되면 멈춤
	}
	//구구6단에 해당하는 값들만 뽑기
	int gugudan1 = 1;
	while (gugudan1 <= 60) {
		if(gugudan1 % 6 == 0)
		printf("%d\n", gugudan1);
		gugudan1++;
	}

	return 0;
}