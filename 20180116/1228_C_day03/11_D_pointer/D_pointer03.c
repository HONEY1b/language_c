#include<stdio.h>
#include<stdlib.h>

void c_a(int *p)
{
	*p = 200;
}

int c_a_r(int n)
{
	n = 400;
	return n;
}

void dmalloc(int **pp)
{
	*pp = (int*)malloc(4);
}

int* dmalloc_r()
{
	int *n = 0;
	n = (int*)malloc(4);
	return n;
}

void main()
{
	int a = 10; // a에 10이 있음
	int* p = 0; // p에 0이 있음
	p = &a; // p에 a의 주소를 넣음
	*p = 100; // *이 붙어있어서 그 주소를 따라가 a에 100을 넣음
	
	// a의 값 변화시키기

	c_a(&a); //a의 주소를 넣는다. -> 값이 바로 변화
	printf("%d \n", a);

	a = c_a_r(a); //함수가 n을 리턴하며, 그 값을 a에 저장
	printf("%d \n", a);

	dmalloc(&p);
	p = dmalloc_r();
	printf("%d \n", p);
}