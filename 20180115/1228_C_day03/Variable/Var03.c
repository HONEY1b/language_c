// ���� 1) ���� 2���� �Է¹ް� ����� ����غ�����.
// ���� 2) ������ �Է¹ް� ������ ����غ�����.
// ���� 3) ���� ���θ� �Է¹ް� ������� ���̸� ���غ�����.
// ���� 4) ���� ���μ����� ��������̸�  ���غ�����

#include < stdio.h>
void main(){	
	
	int num1;
	int num2;
	int sal_m;
	int sal_y;
	int height, width;
	
	printf("���� 1) ���� 2���� �Է¹ް� ����� ����غ�����. \n");
	printf("type two numbers : ");
	scanf("%d %d", &num1, &num2);

	printf("avrage : %d \n", (num1 + num2)/2);

	printf("���� 2) ������ �Է¹ް� ������ ����غ�����. \n");
	printf("type your salary : ");
	scanf("%d", &sal_m);

	sal_y = 12 * sal_m;
	printf("���� :  %d \n", sal_y);

	printf("���� 3) ���� ���θ� �Է¹ް�, ���̸� ���غ�����. \n");
	printf("type height and width : ");
	scanf("%d %d", &height, &width);

	printf("area if it is square : %d \n", height * width);

	// ���� 4) ���� ���μ����� ��������̸�  ���غ�����
	printf("area if it is triangle : %d \n", (height * width)/2);
}
