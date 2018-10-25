#include <stdio.h>
#include <stdlib.h>
void dma(int** pp){
	*pp = (int*)malloc(12);
}
int* damr(){
	int * p = (int*)malloc(12);
	return p;
}
int** ddma(){
	int ** pp =(int**)malloc(12);
	return pp;
}
void main(){
	int * p;
	int **pp;
	dma(&p);
	p[0] = 10;

	p = damr();
	p[0] = 10;

	pp = ddma();
}