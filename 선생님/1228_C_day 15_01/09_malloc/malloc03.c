#include <stdio.h>
#include <stdlib.h> // malloc() 
// 1. malloc() �Լ��� �̸��� ����. ==> �����ͺ��� �� �ּҸ� �˷�����Ѵ�.
// 2. malloc() �Լ��� size �� �������ߵȴ�.
// 3. malloc() ����ȯ�� ����ߵȴ�.
// 4. mallic() �Լ��� include <stdlib.h> ��  ������Ѵ�.
void main(){
	int customer_size[5]; // �����Ҵ� != �����Ҵ� 
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