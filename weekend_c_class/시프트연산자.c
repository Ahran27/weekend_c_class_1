#include <stdio.h>
int main(void)
{
	/*
	<<: 왼쪽 시프트 연산자(10*2^n승)
		ㄴ오른쪽 비어있는 비트에 0이 채워짐
	>>: 오른쪽 시프트 연산자(10/2^n승)
		ㄴ앞자리 비트가 비어있을 때 부호 비트를 그대로 가져옴
	 >>1:모든 비트들이 1만큼 이동한다
	*/
	int num1 = 10, num2 = 20;
	int shift_left = num1 << 2;//10 * 2 ^ 2
	int shift_right = num2 >> 2;
	prinft("%d << 2 = %d\n", num1, shift_left);
	prinft("%d >> 2 = %d\n", num2, shift_right);

	
	return 0;
}