#include <stdio.h>

void staticFunction(){
	int num = 0;
	num++;
	printf("num: %d\n", num);//void라 return값 필요 없음
}

int number = 50;//전역변수. 모든 곳에서 쓸 수 있는 함수 변수

int localFunction(int a) {
	int result = 5;//지역변수. 우선순위로 지역변수가 먼저 사용됨
	return number + a;
}

int main(void)
{
	int a = 100;
	printf("%d\n", a);

	int result = localFunction(a);//위에 함수의 result랑 다름. 중복해서 이름 쓰기 가능. 
	printf("%d\n", result);

	//int number = 40;
	printf("%d\n", number);//이름이 중복되면 지역변수 먼저 사용

	// static은 지역, 전역변수 모두에 선언 가능. 함수는 실행될 때만 자리를 차지. 쓰임이 다하면 소멸함.
	// 그런데 스테틱은 할당하고나서도 계속 남아있음

	staticFunction();
	staticFunction();
	staticFunction();
	staticFunction();
	staticFunction();

	/*
	====== 정리!!!!! ======
	1. 지역 변수: 함수 스코프{} 내에서 선언된 모든 변수는 함수 안에서만 사용 가능하다.
				ㄴ함수를 실행할 때 사용하는 재료인 매개변수도 결국 지역변수이다. 이름 중복 불가(다른 함수에서는 중복 가능)

	2. 전역 변수: 모든지역(함수)에서 사용 가능 / 지역 변수와 이름이 동일하다면 지역변수가 우선적으로 사용된다.
				ㄴ프로그램의 시작과 동시에 메모리 공간을 할당받으며, 프로그램이 종료할 때까지 존재한다.

	3.스테틱 변수: static이라는 키워드를 사용하여 선언하며, 지역 변수와 함께 사용하면 함수를 호출하고 기능이 끝나도
				   스테틱으로 선언한 메모리가 사라지지 않는다
				 ㄴ프로그램이 종료될 때 까지 메모리 공간을 유지한다.(그래서 공간차지 많이함. 꼭 필요할 때에만 사용)
	*/


	return 0;
} 