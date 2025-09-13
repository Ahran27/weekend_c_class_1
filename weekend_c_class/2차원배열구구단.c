#include <stdio.h>
int main(void)
{
	int a[8][9];
	int i, j;
	for (int i = 0; i < 8; i++) {
		printf("%d´Ü\n", i + 2);
		for (int j = 0; j < 9; j++) {
			a[i][j] = (i + 2) * (j + 1);
			printf("%d X %d = %d\n", i + 2, j + 1,a[i][j]);
		}
	 }



	return 0;
}