#include<stdio.h>
// 1. �Ϲݺ��� -> int a -> a, &a
// 2. �����ͺ��� -> int* p -> p, &p, *p
// 3. ���������ͺ��� -> int** pp -> pp, *pp, **pp
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