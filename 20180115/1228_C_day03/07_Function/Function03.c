// ����) 10 + 2 �� ���غ�����. -> sum(10, 2);
// ����) 10 + 2 + 3 �� ���غ�����.
// ����) 10 + 2 + 3 / 4 * 7

#include<stdio.h>
void line_deco();// �Լ� ���漱�� -> main �Լ� �ڿ� ���� ������.
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

	printf("����) 10 + 2 + 3 �� ���غ�����. \n");
	total = sum_return(10, 2);
	total = sum_return(total, 3);
	printf("%d \n", total);

	printf("����) (10 + 2 + 3) / 4 * 7 �� ���غ�����. \n");
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