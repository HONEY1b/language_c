#include<stdio.h>

void main()
{
	int second = 0;
	int a = 0, b = 0, c = 0;
	int num1 = 0, num2 = 0, num3 = 0;
	int total = 0, avr = 0;

	//문제) +, -, *, / 를 사용하고 출력해보자
	printf("%d + %d = %d \n", 20, 170, 20+170);
	printf("%d - %d = %d \n", 20, 170, 20-170);
	printf("%d * %d = %d \n", 20, 170, 20*170);
	printf("%d / %d = %d \n", 20, 170, 20/170);
	
	//문제) 초를 입력받고, 분 초로 출력하세요.
	printf("type the second : ");
	scanf("%d", &second);
	printf("second : %d -> %d minutes %d second \n", second, second/60, second%60);

	//문제) 변수 a, b, c를 이용해서 a와 b의 값을 서로 교환해보세요.
	printf("type the number a : ");
	scanf("%d", &a);
	printf("type the number b : ");
	scanf("%d", &b);

	c = a;
	a = b;
	b = c;

	printf("before : a = %d, b = %d \n after : a = %d, b = %d \n", b, a, a, b);

	//문제) 숫자 3개를 입력받고, 총합과 평균을 출력해보세요.

	printf("type the number num1 : ");
	scanf("%d", &num1);
	printf("type the number num2 : ");
	scanf("%d", &num2);
	printf("type the number num3 : ");
	scanf("%d", &num3);

	total = num1 + num2 + num3;
	avr = (num1 + num2 + num3)/3;

	printf("total : %d, avrage : %d", total, avr);
}