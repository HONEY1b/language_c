// ����) ����, ���ϱ�, ������, ������ �Լ��� ��������.
// ����) line_deco �Լ��� ���ڸ� ������ ���ڸ�ŭ ������ �׷��ִ� �Լ��� �ٲ㺸��.

#include<stdio.h>
void line_deco();// �Լ� ���漱�� -> main �Լ� �ڿ� ���� ������.
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

// main�Լ��� ��򰡿� ȣ��Ǿ��ִ� ��,,,,
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