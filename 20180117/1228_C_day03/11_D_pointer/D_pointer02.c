// ����) �����Ҵ��� �Լ��� �غ�����.(��ȯ��, ���̵���)
#include<stdio.h>
#include<stdlib.h> //malloc
// 1. ���� 2. ������ 3. if 4. for, while
// 2. �迭 -> ������ -> �����Ҵ� -> ������
// 6. �Լ� -> ������ -> ������
// 7. 2�߹迭 -> ����������

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

	printf("����) �����Ҵ��� �Լ��� �غ�����.(��ȯ��, ���̵���) \n");

	dmalloc(&p);
	// p = dmalloc_r();

	p[0] = 20;
	printf("%d \n", p[0]);
}