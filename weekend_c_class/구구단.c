#include <stdio.h>
int main(void)
{
	int dan, number;
	for (dan = 2; dan < 10; dan++) {
		for (number = 1; number < 10; number++) {
			printf("%d X %d = %d",dan,number,dan*number);
		}
		printf("\n");
	}

	



	return 0;
}