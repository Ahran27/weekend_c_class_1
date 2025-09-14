#include <stdio.h>

int max(int pa, int pb) {
	if (pa > pb) {
		return pa;
	}
	else {
		return pb;
	}
}

int main(void)
{
	/*
	두개의 가격 중 더 큰 값을 반환하는 함수
	두개의 값을 매개변수로 받아 더 큰 값이 뭔지 반환하는 함수 만들기

	main에서 첫번째, 두번째 과일 가격 입력받기
	함수를 호출하여 더 비싼 과일의 가격을 출력하기
	*/

	int pa, pb;

	printf("첫번째 과일의 가격을 입력하세요: ");
	scanf_s("%d", &pa);
	printf("두번째 과일의 가격을 입력하세요: ");
	scanf_s("%d", &pb);

	int expensive = max(pa, pb);
	printf("더 비싼 과일의 가격: %d 원\n", expensive);





	return 0;
}