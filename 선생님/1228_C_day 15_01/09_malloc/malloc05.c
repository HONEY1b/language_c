#include <stdio.h>
#include <stdlib.h>
#include <malloc.h> // _msize()
void main(){
	int a;
	double b;
	char c;
	int d[20];
	double e[20];
	int*		p;
	double*		p1;
	char*		p2;
	printf("%d \n" , sizeof(a));
	printf("%d \n" , sizeof(b));
	printf("%d \n" , sizeof(c));
	printf("%d \n" , sizeof(d));
	printf("%d \n" , sizeof(e));
	printf("%d \n" , sizeof(p));
	printf("%d \n" , sizeof(p1));
	printf("%d \n" , sizeof(p2));
	p = (int*)malloc(10);
	printf("%d \n" , _msize(p));

}