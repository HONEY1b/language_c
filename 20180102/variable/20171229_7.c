//������ Ȱ�빮��
#include <stdio.h>

void main()
{
	// ���� 1) �ʸ� �Է¹ް� �� �ʷ� ����ϼ���
	// ���� 2) ���� abc�� �̿��ؼ� a�� b�� ���� ��ȯ�ϼ���


	int sec = 0, minute = 0;
	int a = 20, b = 30, c = 0;

	// ���� 1) �ʸ� �Է¹ް� �� �ʷ� ����ϼ���

	printf("�� �Է� : ");
	scanf("%d", &sec);

	printf ("%d �� %d �� \n", sec/60, sec%60);

	// ���� 2) ���� abc�� �̿��ؼ� a�� b�� ���� ��ȯ�ϼ���
	printf("��ȯ �� -> a : %d, b : %d \n", a, b);
	c = a;
	a = b;
	b = c;
	printf("��ȯ �� -> a : %d, b : %d \n", a, b);
}