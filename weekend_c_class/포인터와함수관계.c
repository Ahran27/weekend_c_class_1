#include <stdio.h>

int swap(int *x,int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int a = 3, b = 5;
	//swap이라는 함수를 사용하여 a와 b의 값을 바꿔치기 하기

	swap(&a, &b);
	printf("%d %d", a, b);
	//call by value: 함수 전달 원리: swap(a, b); 가 복사되어서 위에 함수로 전달을 하는 거니까 원본에 영향을 안줌. 
	//swap을 사용해 a와 b에게 직접 영향을 주어야 함. --> swap(&a, &b);주소를 바로 전달
	//temp = *x;   역참조 해서 값에 직접 접근
	//*x = *y;
	//*y = temp;

	//call by value: 복제의 개념
	//call by reference: 주소 전달
	



	return 0;
}