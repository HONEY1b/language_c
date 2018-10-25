#include<stdio.h>
#include<stdlib.h>

void main()
{
	int		a = 10;
	int*	p = 0;
	int**	pp = 0;

	p = &a;
	pp = &p;

	printf("%d \n", pp);	// a1
	printf("%d \n", *pp);	// x1
	printf("%d \n", **pp);	// 10

	printf("%d \n", p);		// x1
	printf("%d \n", *p);	// 10
	printf("%d \n", &p);	// a1

	printf("%d \n", a);		// 10
	printf("%d \n", &a);	// x1

	p = (int*)malloc(4);
	//*pp = (int*)malloc(4);

	*p = 20;

	printf("%d \n", *p);
}