#include<stdio.h>

void line_deco()
{
	printf("--------------------------\n");
} // end of line_deco()

void print_num(int num)
{
	printf("%d \n");
} //end of print_num

void print_sum(int num1, int num2)
{
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
} //end of print_sum

int ret_sum(int n1, int n2)
{
	return n1 + n2;
}

int swap_num(int n1, int n2){ // �Լ��� ������ -> ���ϰ��� 1���ۿ� �ȵȴ�.
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
	return n1;
	return n2;
}

void main()
{
	int total;
	line_deco();
	print_num(100);
	print_sum(100, 200);
	ret_sum(100, 200); // ��� �׸��� �������� ������ ������ ������.

	// total = print_sum(100, 200); // void �Լ��� ��±׸��� ����.
	total = ret_sum(100, 200);

	
	swap_num(100, 200); // ���ϴ´�� �ȳ���
	
} // end of main