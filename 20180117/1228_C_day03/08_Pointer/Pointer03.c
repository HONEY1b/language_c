// ����) p1, p2�� ��ȯ�� �ذ��� ������.
// ����) �Լ��� num1, num2 ���� ��ȯ�� ������.
// &&&&&&&&&&&&&&&�������ڤ�����������&&&&&&&&&&&&&
#include<stdio.h>

void swap_r(int *num1, int *num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;

}
void main()
{
	int		num1 = 100;
	int*	p1 = 0; // ȭ��ǥ�� ����
	int		num2 = 200;
	int*	p2 = 0;

	int temp;
	p1 = &num1;
	p2 = &num2;

	temp = num1;
	num1 = num2;
	num2 = temp;

	printf("num1 : %d \n", num1);
	printf("num2 : %d \n", num2);

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	printf("num1 : %d \n", num1);
	printf("num2 : %d \n", num2);

	swap_r(p1, p2);
	printf("num1 : %d \n", num1);
	printf("num2 : %d \n", num2);

}