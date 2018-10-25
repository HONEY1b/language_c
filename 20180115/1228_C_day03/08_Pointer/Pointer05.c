#include <stdio.h>

// int a  ==>   a   ,   &a  
// int *p ==>   p   ,   &p   ,   *p   ,   p[0]
void main()
{
	int		a = 10;
	int*	p = 0;
	int   arr[5] = {0};
	p = &a;
	printf("%d\n" , p);
	printf("%d\n" , *p);
	printf("%d\n" , p[0]);
	printf("%d\n" , arr[0]);  


}