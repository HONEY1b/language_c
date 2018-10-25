#include <stdio.h>
#include <stdlib.h>

void main(){
	int		a = 10;
	int     b = 20;
	int*    p = NULL;
	int*	p1 = NULL;
	int*	p2 = NULL;
	int*	p3 = NULL;
	int**   pp = NULL;
	//int***  ppp = NULL;
	//int**** pppp = NULL;
	b = a;
	//b = &a;
	p = &a;
	//pp = &a;
	//pp = p;
	pp = &p;	
	p1 = (int*) malloc(12);
	p2 = (int*) malloc(12);
	p3 = (int*) malloc(12);
	pp = (int**)malloc(12);
	pp[0] = p1;
	pp[1] = p2;
	pp[2] = p3;

}