#include<stdio.h>
#include<stdlib.h>
#include<malloc.h> // _msize()

void main()
{
	int a;
	double b;
	char c;
	int d[20];
	double e[20];
	int*	p; // 주소를 담는 것으로 기본 4byte임
	double* p1; // double, char는 이동거리를 말함. (8칸씩, 1칸씩 읽음)
	char*	p2;

	printf("%d \n", sizeof(a));
	printf("%d \n", sizeof(b));
	printf("%d \n", sizeof(c));
	printf("%d \n", sizeof(d));
	printf("%d \n", sizeof(d));
	printf("%d \n", sizeof(e));
	printf("%d \n", sizeof(p));
	printf("%d \n", sizeof(p1));
	printf("%d \n", sizeof(p2));

	p = (int*)malloc(10);

	printf("%d \n", _msize(p));
}