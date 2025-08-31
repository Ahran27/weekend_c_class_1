#include <stdio.h>
int main(void)
{
	/*
	구매금액과 회원 여부에 따라 혜_택을 적용할 것
	*/
	int member;
	int spent;
	printf("구매한 금액을 입력하세요 : ");
	scanf_s("%d", &spent);

	printf("회원이신가요?(회원이면 1 아니면 0 입력): ");
	scanf_s("%d", &member);

	if (spent >= 100000) {
		printf("100,000이상 구매로 사은품이 증정됩니다. 50,000이상 구매 회원은 배송비도 무료입니다!");
		if (member == 1) {
			printf(" 50,000이상 구매 회원은 배송비 무료입니다!");
		}
		else {
			printf("비회원은 배송비 5,000원부과됩니다.");
		}
	}
	else if (spent >= 50000) {
		if (member == 1) {
			printf(" 50,000이상 구매 회원은 배송비 무료입니다!");
		}
		else {
			printf("비회원은 배송비 5,000원부과됩니다.");
		}
	}	
	else {
		printf("구매금액이 50,000원입니다. 비회원은 배송비 5,000원부과됩니다.");
	}

	return 0;
}