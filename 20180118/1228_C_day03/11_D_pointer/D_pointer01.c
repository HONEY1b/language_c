#include<stdio.h>
// 1. 일반변수 -> int a -> a, &a
// 2. 포인터변수 -> int* p -> p, &p, *p
// 3. 더블포인터변수 -> int** pp -> pp, *pp, **pp
void main()
{
	int		a = 10;
	int*	p = 0;
	int**	pp = 0;

	p = &a;
	pp = &p;

	printf("%d \n", &a);
	printf("%d \n", p);
	printf("%d \n", a);
	printf("%d \n", *p);
	printf("%d \n", *pp);
	printf("%d \n", **pp);
	printf("%d \n", &p);
	printf("%d \n", pp);
}