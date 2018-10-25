// 문제) 정수 한개를 입력받고, 짝수,홀수/양수,음수 출력
// 문제) 정수 두개를 입력받고, 대소비교를 출력
// 문제) 정수 두개를 입력받고, 나눈 몫과 나머지를 출력 만약에 둘중하나라도 0이라면 "0으로 나눌 수 없다" 출력
// 문제) 지하철요금이 얼마인지 계산해보자.
/* [규칙]
	기본 : 1~5 정거장 -> 600원
	기본 : 6~10 정거장 -> 700원
	추가요금 : 10정거장이후 2정거장 추가할때마다 50원 추가
	ex) 13 -> 800원, 8 -> 700원



*/

#include<stdio.h>

void main()
{
	int temperature;
	int a, b;
	int a_line = 600, b_line = 700, ad, ad2, ad3, cost;

	printf("온도를 입력하세요 : ");
	scanf("%d", &temperature);

	if(temperature > 100) printf("기체 \n");
	else if (temperature <= 100 && temperature > 50) printf("따뜻한 물 \n"); //추가조건
	else if (temperature <= 50 && temperature > 0) printf("미지근한 물 \n"); //추가조건
	else printf("얼음 \n"); // 위의 조건이 전부 거짓일 때

	printf("문제) 정수 한개를 입력받고, 짝수,홀수/양수,음수 출력 \n");
	printf("type a number :");
	scanf("%d", &a);

	if(a > 0)
	{
		if(a % 2 == 0) printf ("양수/짝수 \n");
		else printf("양수/홀수 \n");
	}
	else
	{
		if(a % 2 == 0) printf ("음수/짝수 \n");
		else printf("음수/홀수 \n");
	}
	
	printf("문제) 정수 두개를 입력받고, 대소비교를 출력 \n");
	printf("type two numbers : ");
	scanf("%d %d", &a, &b);

	if (a == b) printf("%d 와 %d 는 같다. \n", a, b);
	else if (a < b) printf("%d 가 %d 보다 작다. \n", a, b);
	else if (a > b) printf("%d 가 %d 보다 크다. \n", a, b);

	printf("문제) 정수 두개를 입력받고, 나눈 몫과 나머지를 출력 만약에 둘중하나라도 0이라면 \"0으로 나눌 수 없다\" 출력 \n");

	if((a == 0) || (b == 0)) printf("0으로 나눌 수 없다. \n");
	else 
	{
		if (a < b)
			printf("%d 를 %d 로 나눈 몫 : %d, 나머지 : %d \n", b, a, b/a, b%a);
		else
			printf("%d 를 %d 로 나눈 몫 : %d, 나머지 : %d \n", a, b, a/b, a%b);
	}

	printf("문제) 지하철요금이 얼마인지 계산해보자. \n");
	printf("몇 정거장 갈것인지 입력하시오 : ");
	scanf("%d", &a);

	if ((a >= 1) && (a <= 5))
		printf("%d원", a_line);
	else if ((a >= 6) && (a <= 10))
		printf("%d원", b_line);
	else
	{
		ad = a - 10;
		ad2 = ad / 2;
		ad3 = ad % 2;
		cost = ad2 * 50;

		if(ad3 == 0)
			printf("요금 : %d \n", cost+b_line);
		else
			printf("요금 : %d \n", cost+b_line+50);
	}
}// end of main