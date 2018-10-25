#include <stdio.h>
#include <stdlib.h> // malloc() 
// 1. malloc() 함수는 이름이 없다. ==> 포인터변수 에 주소를 알려줘야한다.
// 2. malloc() 함수는 size 를 계산해줘야된다.
// 3. malloc() 형변환을 해줘야된다.
// 4. mallic() 함수라서 include <stdlib.h> 을  해줘야한다.
void main(){
	int customer_size[5]; // 정적할당 != 동적할당 
	int*     p;
	double*  p1;
	char*    p2;
	malloc(5);
	malloc(5 * 4);
	malloc(5 * sizeof(int));
	p = malloc(5 * sizeof(int));
	p = (int*)malloc(5 * sizeof(int));
	p[0];//a1
	p[1];//a5
	p1 = (double*)malloc(5 * sizeof(int));
	p1[0];//a1
	p1[1];//a9
	p2 = (char*)malloc(5 * sizeof(int));
	p2[0];//a1
	p2[1];//a2
	free(p);free(p1);free(p2);
	p = 0;p1 = 0;p2 = 0;
}