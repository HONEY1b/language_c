// 문제) 10 + 2 를 구해보세요. -> sum(10, 2);
// 문제) 10 + 2 + 3 을 구해보세요.
// 문제) 10 + 2 + 3 / 4 * 7

#include<stdio.h>
void line_deco();// 함수 전방선언 -> main 함수 뒤에 들어가도 괜찮다.
void lines_deco(int num);
int sum_return(int num1, int num2);
int div_return(int num1, int num2);
int mul_return(int num1, int num2);

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

void main()
{
	int total;

	printf("문제) 10 + 2 + 3 을 구해보세요. \n");
	total = sum_return(10, 2);
	total = sum_return(total, 3);
	printf("%d \n", total);

	printf("문제) (10 + 2 + 3) / 4 * 7 를 구해보세요. \n");
	total = div_return(total, 4);
	total = mul_return(total, 7);
	printf("%d \n", total);


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

int sum_return(int num1, int num2)
{
	int result;
	result = num1 + num2;
	return result;
}

int div_return(int num1, int num2)
{
	int result;
	result = num1 / num2;
	return result;
}

int mul_return(int num1, int num2)
{
	int result;
	result = num1 * num2;
	return result;
}