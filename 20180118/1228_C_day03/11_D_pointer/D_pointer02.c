// 문제) 동적할당을 함수로 해보세요.(반환형, 보이드형)
#include<stdio.h>
#include<stdlib.h> //malloc
// 1. 변수 2. 연산자 3. if 4. for, while
// 2. 배열 -> 문제점 -> 동적할당 -> 포인터
// 6. 함수 -> 문제점 -> 포인터
// 7. 2중배열 -> 더블포인터

void dmalloc(int **pp)
{
	*pp = (int*)malloc(4);
}

int* dmalloc_r()
{
	int *p = 0;
	p = (int*)malloc(4);
	return p;
}
void main()
{
	int* p = 0;
	// p &a;
	// p = (int*)malloc(4);

	printf("문제) 동적할당을 함수로 해보세요.(반환형, 보이드형) \n");

	dmalloc(&p);
	// p = dmalloc_r();

	p[0] = 20;
	printf("%d \n", p[0]);
}