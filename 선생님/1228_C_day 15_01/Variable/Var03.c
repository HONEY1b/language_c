#include < stdio.h>
void main(){	
	// ���� 1) ���� 2���� �Է¹ް� ����� ����غ�����.
	// ���� 2) ������ �Է¹ް� ������ ����غ�����.
	// ���� 3) ���� ���θ� �Է¹ް� ������� ���̸� ���غ�����.
	// ���� 4) ���� ���μ����� ��������̸�  ���غ�����
	int input_num1;
	int input_num2;
	int salary;
	int year_salary;
	printf("1�������� �Է��ϼ��� >>> ");
	scanf("%d" , &input_num1);
	printf("2�������� �Է��ϼ��� >>> ");
	scanf("%d" , &input_num2);
	printf("��� >>> %d" , (input_num1 + input_num2) / 2 );
}
