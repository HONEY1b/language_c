#include < stdio.h>

void main(){
	int a;
	long b;
	long long c;
	int num1 , num2 ;  // �������� ==> , ������ؼ� int �� �����Ҽ��ִ�.
	a = 30;
	a = 2000000000;
	a = 3000000000;
	b = 3000000000;
	c = 3000000000;
	printf("a >>> %d\n" , a);
	printf("b >>> %lu\n" , b);
	printf("c >>> %llu\n" , c);
	num1 = 10;
	num2 = 2;
	printf("%d + %d = %d\n" , num1 , num2 , num1 + num2);
	// ���� ���ϱ� ������ ����
	// ���� 1) ���� 2���� �Է¹ް� ����� ����غ�����.
	// ���� 2) ������ �Է¹ް� ������ ����غ�����.


}
