#include <stdio.h>
#include <stdlib.h>
void c_a(int * p){
	*p = 200;
}
int c_a_r(int a){
	a = 400;
	return a;
}
void dmalloc(int **pp){
	*pp = (int*)malloc(4);
}
int* dmalloc_r(){
	int *p =0;
	p = (int*)malloc(4);
	return p;
}
void main()
{
	int a = 10;
	/*int* p = 0;
	p = &a;
	*p = 100;*/
	//c_a(&a);
	a = c_a_r(a);
	int *p = 0;
	dmalloc(&p);
	p = dmalloc_r();

}