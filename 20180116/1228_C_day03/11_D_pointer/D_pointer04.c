// ����) �Լ��� ���� ���� �ٲ�� �غ�����.

#include<stdio.h>
#include<stdlib.h>

void change(int **p1, int **p2)
{
	int* temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void main()
{
	int a = 10;
	int b = 20;
	int *p1 = 0;
	int *p2 = 0;

	p1 = &a;
	p2 = &b;

	printf("%d \n", a); //10
	printf("%d \n", b); //20
	printf("%d \n", *p1); //10
	printf("%d \n", *p2); //20

	printf("����) �Լ��� ���� ���� �ٲ�� �غ�����. \n");

	change(&p1, &p2);

	printf("%d \n", a); //10
	printf("%d \n", b); //20
	printf("%d \n", *p1); //20
	printf("%d \n", *p2); //10



}