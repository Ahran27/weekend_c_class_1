#include<stdio.h>
int main(void)
{
	//자동형 변환
	double change_number = 10;
	printf("%.15f\n", change_number);// "%출력할 소수점 수f\n"

	int change_number2 = 5.1234;
	printf("%d\n", change_number2);//5로 나옴.소수부의 손실

	//명시적형변환
	printf("%d\n", (int)1.1234);
	printf("%d\n", (short)1.1234);//short: 2바이트16비트.32. 메모리 절약 필요할 때
	printf("%f\n", (float)22);

	float f = 3.14f;//소수점은 더블로 인식.
	printf("%f\n", f);


	unsigned char ch;//값의 범위0-128~127(0~255)
	unsigned short sh;//값의 범위-32,000~32,000(0~65,000)
	unsigned int in;//값의 범위-21억~21억(0~42억)

	ch = 1238;
	sh = 50000;
	in = 4100000000;

	printf("%d\n", ch);
	printf("%d\n", sh);
	printf("%u\n", in);

	char num = 255;
	printf("%d\n", num);
	//255/2 = 127...1
	//127/2 = 63...1
	//63/2 = 31...1
	//31/2 = 15...1
	//15/2 = 7...1
	//7/2 = 3...1
	//3/2 = 1...1
	//1/2 = 0...1
	//--> 11111111(부호비트 음성)->2의 보수 -> 00000000+1 -> 1000001 -> -1

	/*
	01011001 --> 89
	00110100 --> 52
	*/
	return 0;
}