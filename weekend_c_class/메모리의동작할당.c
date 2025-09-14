#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	/*
	시스템이 관리
	data: 메모리를 유지해야하는 전역과 static 변수 들어감. 언제 쓰일지 모르니 대기
	stack: {}가 끝나면 종료되는 것들이 저장됨

	개발자가 관리
	heap: 동적메모리.  
	*/

	int num;
	printf("숫자입력 : ");
	scanf_s("%d", &num);

	if (num < 2) {
		printf("숫자는 최소 2 이상 입력해라.");
		return 1;
	}

	//int numLength[num];
	//ㄴ배열의 값이 상수여서 바뀌지 않아야 실행됨. 
	int *numLength = (int*)malloc(num*sizeof(int));//(num*sizeof(int) -> num 1개당 바이트 4)바이트를 할당할거야
	//	ㄴ포인터 변수.     ㄴ동적 할당으로 접근
	if (numLength == NULL) { //만약에 할당에 실패해서 공간이 없다면(null)
		printf("메모리 할당 실패\n");
		return 1;//함수를 종료하고 1을 반환해라. 1의 반환은 에러난 것을 보여주는 것.
	}
	numLength[1] = 3;
	printf("%d\n", numLength[1]);
	//넘이 1이라고 가정했을 때 값이 들어갈 수 없음. 그래서 

	free(numLength);//끝나고 삭제할게(메모리 누수를 막기 위해malloc 사용 후 꼭 써야함)

	return 0;
}