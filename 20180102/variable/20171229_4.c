//����Ȱ��
#include <stdio.h>
// ��α׳� ī�信 ����
void main()
{
	int a;
	long b;
	long long c;
	int num1, num2; // �������� -> , �� ����ؼ� int�� ������ �� �ִ�.
	int n1 = 0, n2 = 0;
	a = 30;
	b = 3000000000;
	c = 30000000000000;
	printf("a >>> %d \n", a);
	printf("b >>> %lu \n", b);
	printf("c >>> %llu \n", c);
	
	num1 = 10;
	num2 = 2;
	printf ("%d + %d = %d \n", num1, num2, num1+num2);
	printf ("%d - %d = %d \n", num1, num2, num1-num2);
	printf ("%d * %d = %d \n", num1, num2, num1*num2);
	printf ("%d / %d = %d \n", num1, num2, num1/num2);

}