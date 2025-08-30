#include <stdio.h>
int main(void)
{
	/*
	if(조건식1){
	  조건식1을 만족하면 실행할 코드
		if(조건식2){
		  조건식1,2를 만족하면 실행할 코드
		  조건식 1을 만족해야만 검사할 수 있는 권한이 생김
		}
	}
	*/

	int studentNum = 201631, studentCheckNum;
	int passward = 8321, passwardCheck;
	printf("학번을 입력해주세요: ");
	scanf_s("%d", & studentCheckNum);

	printf("비밀번호를 입력해주세요: ");
	scanf_s("%d", &passwardCheck);

	if (studentNum == studentCheckNum) {
		if (passward == passwardCheck) {
			printf("%d님 로그인 되었습니다.", studentCheckNum);
		}
		else {
			printf("비밀번호가 일치하지 않습니다.");
		}
	}
	else {
		printf("아이디가 일치하지 않습니다~");
	}


	return 0;
}