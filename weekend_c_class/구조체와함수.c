#include <stdio.h>

struct Person {
	char name[20];
	int age;
};

void printPerson(struct Person p);//이름 정의. 밑의 sum 함수와 같은 형식
int sum(int a);

int main(void)
{
	struct Person me = { "홍길동",25 };
	printPerson(me);//밑의 sum 함수와 다르게 프린트 할 필요 없는 이유는 밑에 void 함수에 프린트가 들어가있기 때문

	int a = 5;
	int result = sum(a);
	printf("%d", result);


	return 0;
}

void printPerson(struct Person p) {
	printf("이름: %s, 나이: %d\n", p.name, p.age);
}//밑의 sum 함수와 같은 형식. 얘는 void니까 return 필요 없음.

int sum(int a) {
	return 5 + a;
}