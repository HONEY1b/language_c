// ���� Ȱ�� ����
#include <stdio.h>
// ��α׳� ī�信 ����
void main()
{
	// ���� 1) ���� 2���� �Է¹ް� ����� ����غ�����.
	// ���� 2) ������ �Է��ϸ� ������ ����غ�����.
	// ���� 3) ���� ���θ� �Է¹ް�, �簢���� ���̸� ���غ�����.
	// ���� 4) ���� ���μ����� �ﰢ�� ���̸� ���غ�����
	int n1 = 0, n2 = 0;
	
	int salary_m = 0, salary_y = 0;

	int width = 0, height = 0, 
	double area = 0;

	// ���� 1) ���� 2���� �Է¹ް� ����� ����غ�����.
	printf("���� 1 �Է� : ");
	scanf("%d", &n1);

	printf("���� 2 �Է� : ");
	scanf("%d", &n2);

	printf ("%d �� %d �� ��� : %d \n", n1, n2, (n1+n2)/2);

	// ���� 2) ������ �Է��ϸ� ������ ����غ�����.

	printf("���� �Է�(���� : ����) : ");
	scanf("%d", &salary_m);

	salary_y = 12 * salary_m;

	printf("���� : %d ���� \n", salary_y);

	// ���� 3) ���� ���θ� �Է¹ް�, �簢���� ���̸� ���غ�����.
	printf("���� �Է� : ");
	scanf("%d", &width);

	printf("���� �Է� : ");
	scanf("%d", &height);

	printf("���� %d, ���� %d�� �簢���� ���� : %d \n", width, height, width*height);

	// ���� 4) ���� ���μ����� �ﰢ�� ���̸� ���غ�����
	area = width*height;
	area = area/2;
	printf("���� %d, ���� %d�� �ﰢ���� ���� : %d \n", width, height, area);
}


