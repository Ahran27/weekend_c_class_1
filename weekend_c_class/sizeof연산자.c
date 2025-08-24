#include<stdio.h>
int main(void)
{
	int num1 = 1;
	printf("%zu",sizeof(num1));// 자료형이 몇바이트 잡아먹는지 물어볼 때. 
	
	printf("%zu\n",sizeof(100));
	printf("%zu\n",sizeof(3.14));
	printf("%zu\n",sizeof(3.14f));
	printf("%zu\n",sizeof(float));
	printf("%zu\n",sizeof(short));
	return 0;
}