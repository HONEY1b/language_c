#include <stdio.h>
#include <stdlib.h>
//�����Ҵ� : �޸𸮰� �ʿ��ѽ������� �Ҵ��ϰڴ�.
// 1. �̸��� ����    ==> 
// 2. �ڷ����� ����  ==>
// 3. ���� ���� ==> free
void main(){
	int arr[500]; // �����Ҵ� 
	int size =0;
	int* p;
	double* p1;
	char* p2 ;
	printf("�л����� �Է��ϼ��� >>> ");
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