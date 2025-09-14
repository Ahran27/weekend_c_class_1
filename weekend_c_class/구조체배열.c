#include <stdio.h>
#define SIZE 50

typedef struct Book {
	char title[SIZE];
	char author[SIZE];
	int price;
}Book;
int main(void)
{
	Book book[3] = { 0 };
	int maxIndex = 0;
	/*
	for문으로scanf_s로 책 정보를 받아 올 것
	*번째 책 제목 
	*번째 책 저자
	*번째 책 가격
	*/
	for (int i = 0; i < 3; i++) {
		printf("\n%d번째 책 제목을 입력하시오: ",i+1);
		scanf_s("%s", &book[i].title,(unsigned)sizeof(book[i].title));
		printf("%d번째 책 저자를 입력하시오: ",i+1);
		scanf_s("%s", &book[i].author, (unsigned)sizeof(book[i].author));
		printf("%d번째 책 가격을 입력하시오: ",i+1);
		scanf_s("%d", &book[i].price);
	}

	for (int i = 1; i < 3; i++) {
		if (book[i].price > book[maxIndex].price) {//1,2번째의 가격을 비교 했을 때 maxIndex(0)번째 가격보다 크다면
			maxIndex = i;//maxIndex에 i를 넣음
		}
	}
	printf("\n가장 비싼 책 정보\n");
	printf("제목: %s\n",book[maxIndex].title);
	printf("저자: %s\n",book[maxIndex].author);
	printf("가격: %d\n",book[maxIndex].price);




	return 0;
}