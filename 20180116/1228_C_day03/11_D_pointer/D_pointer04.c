// 문제) 함수를 만들어서 값이 바뀌도록 해보세요.

#include<stdio.h>
#include<stdlib.h>

void change(int **p1, int **p2)
{
	int* temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void main()
{
	int a = 10;
	int b = 20;
	int *p1 = 0;
	int *p2 = 0;

	p1 = &a;
	p2 = &b;

	printf("%d \n", a); //10
	printf("%d \n", b); //20
	printf("%d \n", *p1); //10
	printf("%d \n", *p2); //20

	printf("문제) 함수를 만들어서 값이 바뀌도록 해보세요. \n");

	change(&p1, &p2);

	printf("%d \n", a); //10
	printf("%d \n", b); //20
	printf("%d \n", *p1); //20
	printf("%d \n", *p2); //10



}