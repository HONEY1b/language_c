#include<stdio.h>
#include<stdlib.h>


void main()
{
	int size;
	int* p;
	int i;

	printf("�����ڴ� ����Դϱ�? : ");
	scanf("%d", &size);

	p = (int*)malloc(sizeof(int) * size);
	for(i = 0; i < size; i++) {p[i] = i;}
	for(i = 0; i < size; i++)
	{
		printf("%d �� ������ \n", p[i]+1);
	}

}