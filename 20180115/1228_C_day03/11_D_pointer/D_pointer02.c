// ����) �����Ҵ��� �Լ��� �غ�����.(��ȯ��, ���̵���)

#include<stdio.h>
#include<stdlib.h> //malloc
// 1. ���� 2. ������ 3. if 4. for, while
// 2. �迭 -> ������ -> �����Ҵ� -> ������
// 6. �Լ� -> ������ -> ������
// 7. 2�߹迭 -> ����������

void mall(int n, int* p)
{
	p = (int*)malloc(n);
}

int* mall_2(int n)
{
	return (int*)malloc(n);
}
void main()
{
	int* p = 0;

	// p = (int*)malloc(12);

	/*
	p = mall_2(12);

	p[0] = 10;
	printf("%d \n", p[0]);
	*/

	mall(12, p);

	p[0] = 20;
	printf("%d \n", p[0]);
}