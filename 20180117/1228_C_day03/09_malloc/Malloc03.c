// ���� :�迭�� ������ -> �����ŭ�� �迭�� ����� ����

#include<stdio.h>
#include<stdlib.h> // malloc()

/*
	1. malloc() �Լ��� �̸��� ����.				-> �����ͺ����� �ּҸ� �˷�����Ѵ�.
	2. malloc() �Լ��� size�� ���������Ѵ�.
	3. malloc() �Լ��� ����ȯ�� ����ߵȴ�.
	4. malloc() �Լ��� include <stdlib.h> �� ����� �Ѵ�.
	// ������ �ȵȴ�.
*/

void main()
{
	int aud_size[500]; // �����Ҵ� != �����Ҵ�
	int*	p;
	double* p1;
	char*	p2;
	// int customer_size[size];
	malloc(5); // �׳� �ټ�ĭ�� ���� (5byte)
	malloc(5 * 4); // 4byte�� �Ҵ��������.
	malloc(5 * sizeof(int)); 
	//p = malloc(5 * sizeof(int)); // ó������ �ּҸ� ��ȯ�ϴ� �Լ� -> ��ĭ�� �о���ϴ��� ��
	
	// �޸𸮴� �׻� �״�� �ִµ� ��輱�� ġ�°���
	// �� ������ ���̻� ��������� �˸��� ��

	p = (int*)malloc(5 * sizeof(int)); // �װ͵� �����������.
	p[0]; //a1
	p[1]; //a5

	p1 = (double*)malloc(5 * sizeof(double));
	p1[0]; //a1
	p1[1]; //a9

	p2 = (char*)malloc(5 * sizeof(char));
	p2[0]; //a1
	p2[1]; //a2

	free(p); free(p1); free(p2);//����
	p[0]; // �׷��� ����� ���� -> �������,,,?

	p = 0; p1 = 0; p2 = 0; // -> ���� ���ϵ��� �ּҸ� ����
}