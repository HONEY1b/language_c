// 문제) 빼기, 곱하기, 나누기, 나머지 함수도 만들어보세요.
// 문제) line_deco 함수에 숫자를 넣으면 숫자만큼 라인을 그려주는 함수로 바꿔보자.

#include<stdio.h>
void line_deco();// 함수 전방선언 -> main 함수 뒤에 들어가도 괜찮다.
void lines_deco(int num);

void sum(int num1, int num2)
{
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
	line_deco();
}

void sub(int num1, int num2)
{
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
}

void mul(int num1, int num2)
{
	printf("%d * %d = %d \n", num1, num2, num1 * num2);
}

void div(int num1, int num2)
{
	printf("%d / %d = %d \n", num1, num2, num1 / num2);
}

void rem(int num1, int num2)
{
	printf("%d %% %d = %d \n", num1, num2, num1 % num2);
}

// main함수도 어딘가에 호출되어있는 것,,,,
// main();
void main()
{
	line_deco();
	sum(10,2);
	mul(10,2);
	div(10,2);
	rem(10,2);
	lines_deco(2);



}//end of main

void line_deco()
{
	printf("-------------------------------------------------------\n");
}

void lines_deco(int num)
{
	int i;
	for(i = 0; i < num; i++)
		printf("-------------------------------------------------------\n");
}