// 문제) 성적(0~99) 3개를 입력받고, 평균이 90~99면 "A", 80~89면 "B", 이하 "재시험"을 출력하세요
// 문제) 96~99 면 A+, 93~90 면 A-를 출력하세요.
// 문제) 0~10까지 출력해보세요
// 문제) 0~10 사이중 짝수만 출력 and 홀수만 다 더한 값 출력
// 문제) 일을 입력받고, 개월, 일로 출력(한달은 30일)
// 문제) 화폐매수를 구해보세요. 
// 65700원 : 5만원 -> 1, 1만원 -> 1, 5천원 -> 1, 1천원 -> 0, 5백원 -> 1, 1백원 -> 2

#include<stdio.h>

void main()
{
	int a, b, c;
	double avr;
	int i;

	printf("문제) 성적(0~99) 3개를 입력받고, 평균이 90~99면 \"A\", 80~89면 \"B\", 이하 \"재시험\"을 출력하세요. \n");
	printf("문제) 96~99 면 A+, 93~90 면 A-를 출력하세요. \n");

	printf("type your scores : ");
	scanf("%d %d %d", &a, &b, &c);

	avr = (a + b + c) / 3;

	if((avr >= 90) && (avr <= 99))
	{
		if((avr >= 96) && (avr <= 99))
		{
			printf("A+ \n");
		}
		else if((avr >= 90) && (avr <= 93))
		{
			printf("A- \n");
		}
		else {printf("A \n");}
	}
	else if((avr >= 80) && (avr <= 89)) {printf("B \n");}
	else {printf("재시험 \n");}

	// else if () {} -> 단독으로 쓰일 수가 없다. (if가 필요하다.)
	// else {} -> 단독으로 쓰일 수가 없다. (if가 필요하다.)
	// if() {} else if () {} else {} -> 한개의 식 : 세개의 조건 중 한 조건의 실행문만 실행된다.

	printf("문제) 0~10까지 출력해보세요. \n");
	for(a= 0; a < 11; a++) {printf("%d \n", a);}
	printf("문제) 0~10 사이중 짝수만 출력 and 홀수만 다 더한 값 출력 \n");
	b = 0;
	for(a= 0; a < 11; a++)
	{
		if(a % 2 == 0) {printf("%d \n", a);}
		else {b = b + a;}
	}
	printf("홀수들의 합 : %d \n", b);

	printf("문제) 일을 입력받고, 개월, 일로 출력(한달은 30일) \n");
	printf("enter the days : ");
	scanf("%d", &a);
	printf("%d 일 -> %d 개월 %d 일 \n", a, a / 30, a % 30);

	printf("문제) 화폐매수를 구해보세요. \n");
	a = 0; b = 0; c = 0;
	printf("enter the money : ");
	scanf("%d", &a);

	for(i = 50000; i > 100;) 
	{
		b = a % i;
		printf("%d 원-> %d \n", i, a / i);
		i = i / 5;
		c = b % i;
		printf("%d 원-> %d \n", i, b / i);
		i = i / 2;
		a = c;
	}

}