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
	int a = 10; // a�� 10�� ����
	int* p = 0; // p�� 0�� ����
	p = &a; // p�� a�� �ּҸ� ����
	*p = 100; // *�� �پ��־ �� �ּҸ� ���� a�� 100�� ����
	
	// a�� �� ��ȭ��Ű��

	c_a(&a); //a�� �ּҸ� �ִ´�. -> ���� �ٷ� ��ȭ
	printf("%d \n", a);

	a = c_a_r(a); //�Լ��� n�� �����ϸ�, �� ���� a�� ����
	printf("%d \n", a);

	dmalloc(&p);
	p = dmalloc_r();
	printf("%d \n", p);
}