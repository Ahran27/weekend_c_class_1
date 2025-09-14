#include <stdio.h>
#define NAME_LEN 10
#define PHONE_LEN 20//매크로 상수
typedef int integer;//타입을 재정의하겠다. int를 integer로 쓰겠다.
//typedef struct student stu;
#define BRAND_NAME 20

typedef struct student//구조체 안에 이름, 번호, 학번 들어간 묶음
{
	char name[NAME_LEN];
	char phone[PHONE_LEN];//전화는 연산이 필요 없고, 0으로 시작하니까(맨앞0을 생략해서 읽음) 문자열로 처리
	integer number;
}stu;//정의하면서 별명붙이기

typedef struct car
{
	char brand[BRAND_NAME];
	int year;
	
}car;

int main(void)
{
	/*
	struct{}; : 구조체의 자료형을 만들 때 사용
	구조체 : 관련 데이터 다 넣기 위한 가방 같은 것
	*/
	//stu s1,s2;//34*2 = 68바이트
	//printf("이름: ");
	//gets_s(s1.name,NAME_LEN);

	//printf("저나번호: ");
	//gets_s(s1.phone, PHONE_LEN);//gets 는 문자열 받아오는거

	//printf("학번: ");
	//scanf_s("%d",&s1.number);//숫자받아올거니까

	//while (getchar() != '\n');//엔터값이 남아있다면 엔터값을 비우는 코드  /   getchar 한글자를 입력하는거

	//printf("이름: ");
	//gets_s(s2.name, NAME_LEN);

	//printf("저나번호: ");
	//gets_s(s2.phone, PHONE_LEN);

	//printf("학번: ");
	//scanf_s("%d", &s2.number);

	//printf("\n\n=====학생 정보 출력=====\n\n");
	//printf("%3d %-20s %-20s %8d\n", 1, s1.name, s1.phone, s1.number);
	//printf("%3d %-20s %-20s %8d\n", 2, s2.name, s2.phone, s2.number);

	//============================================================================

	car myCar = { "Tesla",2023 };//선언 동시에 초기화
	car* ptr = &myCar;//ptr에 mycar의 주소 넘겨줄게
	printf("브랜드: %s\n", (*ptr).brand);//포인터 사용해서 역참조
	printf("연식: %d\n", ptr->year);//역참조하지 않고 화살표         둘 다 사용 가능




	return 0;
}