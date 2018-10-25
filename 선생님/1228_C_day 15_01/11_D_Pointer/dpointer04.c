#include <stdio.h>

void main(){
	int a = 10;
	int b = 20;
	int*p1 = 0;
	int*p2 = 0;
	p1 = &a;
	p2 = &b;
	printf("%d\n" , a); //10
	printf("%d\n" , b); //20
	printf("%d\n" , *p1); //10
	printf("%d\n" , *p2); //20

	printf("%d\n" , a); //10
	printf("%d\n" , b); //20
	printf("%d\n" , *p1); //10 ==> 20
	printf("%d\n" , *p2); //20 ==> 10
}