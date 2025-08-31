#include <stdio.h>
int main(void)
{
	//임의의 id생성: 1234
	//pw도 생성: 5678
	//사용자의 입력을 받을 inputid / inputpw생성
	//시도횟수를 담을 tries = 0;
	//while을 사용하여 3번까지 시도 가능하게 할 것임
	//아이디와 비밀번호를 입력받아 각 주소에 넣어주기
	//만약에 1234와 인풋아이디가 같고, 5678과 인풋pw가 같다면 로그인 성공(반복 종료)
	//로그인에 실퍂했다면 남은 기회 알려주기
	//시도 횟수 증가
	//시도 횟수가 3과 같아졌다면print3회 실패 접근이되었습니다.
	
	int id = 1234;
	int pw = 5678;
	int inputid,inputpw;
	int tries = 0;

	while (tries < 3) {
		printf("아이디를 입력하세요: ");
		scanf_s("%d", &inputid);
		printf("비번을 입력하세요: ");
		scanf_s("%d", &inputpw);

		if (inputid == id || inputpw == pw) {
			printf("로그인 성공");
			break;
		}

		else {
			printf("로그인 실패. 남은 기회는 %d번입니다\n", 2-tries);
			tries++;
		}
	}

	if (tries == 3) {
		printf("3회 실패 접근이 차단되었습니다.");
	}


	return 0;
}