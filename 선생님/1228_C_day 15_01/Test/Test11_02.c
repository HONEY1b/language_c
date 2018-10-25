#include <stdio.h>
#include <stdlib.h>
//동적할당 : 메모리가 필요한시점에서 할당하겠다.
// 1. 이름이 없다    ==> 
// 2. 자료형이 없다  ==>
// 3. 삭제 가능 ==> free
void main(){
	int arr[500]; // 정적할당 
	int size =0;
	int* p;
	double* p1;
	char* p2 ;
	printf("학생수를 입력하세요 >>> ");
	scanf("%d" , &size);	
	malloc(100);
	p = (int*)malloc(100*4);
	p = (int*)malloc(size*4);
	p1 = (double*)malloc(100*8);
	p2 = (char*)malloc(100);
	free(p);
	p[10] = 100;
	p = NULL;
}