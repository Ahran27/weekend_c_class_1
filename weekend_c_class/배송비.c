#include <stdio.h>
int main(void)
{
	/*
	구매금액과 회원 여부에 따라 혜_택을 적용할 것
	*/
	int user = 20163, userCheck;
	int spent;
	printf("회원 번호를 입력하세요 : ");
	scanf_s("%d", &userCheck);

	printf("구매한 금액을 입력하세요 : ");
	scanf_s("%d", &spent);

	if (user == userCheck) {
		if (spent >= 100000) {
			printf("100,000이상 구매로 사은품이 증정됩니다. 50,000이상 구매 회원은 배송비도 무료입니다!");
		}
		else ("100,000이상 구매로 사은품이 증정됩니다. 비회원은 배송비 5,000원부과됩니다.");
	}
	else if (user == userCheck) {
		if (spent >= 50000) {
			printf(" 50,000이상 구매 회원은 배송비 무료입니다!");

		}
		else ("비회원은 배송비 5,000원부과됩니다.");
	}
	else {
		printf("비회원은 배송비 5,000원부과됩니다.");
	}

	return 0;
}