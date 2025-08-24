#include<stdio.h>
#define PI = 3.14
//매크로상수는 선언 끝에 ;을 붙이지 않음
//친구가 주소를 포스트잇에 적어놓은 것과 같다. 단순한 글자와 같음
#define FRIEND_HOME "서울시 강남구 테헤란로112"
int main(void)
{
	printf("약속장소: %s",FRIEND_HOME);//%s -->문장

	/*
	✔변수: 프로그램이 실행되는 동안 값을 변경할 수 있다.
	✔상수: 프로그램이 실행되는 동안 값이 변할 수 없다.선언과 초기화가 동시에 되어야 함
		리터럴: 값 고정된 상수
		심볼릭: 상숫값대신 사용하도록 상수에 이름 붙인 것
		매크로:선언을 밖에다 함 main이 실행되기 전에 미리 선언
	*/

	//리터럴상수
	//10
	//-10/2.2, 3.14/'A', 'B'

	//심볼릭 상수
	const int MY_CONST = 55;
	const char* FRIEND_HOME2 = "서울시 강남구 테헤란로112";
	printf("약속장소: %s=n", FRIEND_HOME2);


	//const int YOUR_CONST;//상수는 대문자로 쓰는게 국룰


	return 0;
}