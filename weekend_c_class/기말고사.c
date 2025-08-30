#include<stdio.h>
int main(void)
{
	//국어: 68,수학: 75,과학: 88,윤리: 60,미술: 96
	//기말고사 평균 구하기(소수점 한자리까지 출력)
	/*
	int korean, math, science, moral, art, result;
	korean = 68;
	math = 75;
	science = 88;
	moral = 60;
	art = 96;
	result = (korean + math + science + moral + art) / 5;
	printf("(%d + %d + %d + %d+ %d) / 5", korean, math, science, moral, art, result);
	*/
	int total = 68 + 75 + 88 + 60 + 96;
	float avg = total / 5.0f;
	printf("기말고사 평균은 :: %.1f점 입니다",avg);//%.1f -> 소수점 1자리만
	
	//64/58/87.5/768/96.9
	//2째 자리까지 출력
	float total_2 = 64 + 56 + 87.5f + 76.8f + 96.9f;
	float avg_2 = total_2 / 5.0f;
	printf("기말고사 평균2은 : %.2f점 입니다", avg_2);
	return 0;
}