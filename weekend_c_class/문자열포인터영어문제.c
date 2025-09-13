#include <stdio.h>
#include <string.h>
int main(void)
{
	const char* questions[] = {
	"'한국'을 영어로 입력하세요",
	"'고양이'을 영어로 입력하세요",
	"'사과'을 영어로 입력하세요"
	};

	const char* answers[] = {
		"korea",
		"cat",
		"apple",
	};

	//int 변수를 만들어 점수를 저장할 것! 초기값은 0
	int score = 0;
	// 내용이 비어있는 input 20칸짜리 배열을 만들기
	int input[20];
	// 포인터 상수를 만들 것 이름은 user
	const int* user;
	// total (문제개수) sizeof 사용
	// sizeof(answers) = 24
	// sizeof(answers[0]) = 8
	//24 / 8 = 3
	int total = sizeof(answers) / sizeof(answers[0]);

	printf("=====영단어 퀴즈 시작=====\n");
	//for문을 사용하여 total보다 i가 작다면 i는 증가
	//문제1: 	"'한국'을 영어로 입력하세요"
	//입력을 input에 받기

	//입력받은 input을 user에 대입(포인터가 입력값을 가리킬 수 있도록)
	for (int i = 0; i < total; i++) {
		printf("문제 %d: %s\n답: ", i+1, questions[i]);
		scanf_s("%s", input,(unsigned)sizeof(input));
		user = input;
		//const char*user = korea

		//만약 user입력값과answers의 i가 같다면(strcmp) 정답입니다 출력 후 score 증가
		//아니라면 틀렸습니다. 정답은 __ 였습니다. 정답 출력하기
		if (strcmp(user, answers[i]) == 0) {
			printf("정답입니다!\n\n");
			score++;
		}
		else {
			printf("틀렸습니다. 정답은 %s였습니다.\n\n", answers[i]);
		}
	}
	

	printf("=====결과발표=====\n");
	printf("총 %d 문제 중 %d 문제 맞혔습니다.\n",total, score);
	/*
	3정답 -완벽해요~
	2정답 - 조금만 더 연습-> 나눗셈
	2문 이상 맞추지 못하면 - 다음에는 더 열심히
	*/

	if (score == total) printf("완벽해요~");
	else if(score >= total / 2)  printf("조금만 더 연습해요~");
	else printf("다음에는 더 열심히 해봐요~");




	return 0;
}