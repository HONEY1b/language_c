#include<stdio.h>

void test(){
	int a;
}
void test2(int a){}

int test_ret()
{
	int a = 10;
	return a;
}

void main()
{
	// ������ �����ֱ�
	// int a; -> �ߺ� �ȵ�. ������
	int a = 10;
	printf("�� : %d \n", a);
	printf("�ּ� : %d \n", &a);
	{
		int a;
		a = 20;
		printf("�� : %d \n", a);
		printf("�ּ� : %d \n", &a);
	} // �߰�ȣ�� ������ a �Ҹ�
	printf("�� : %d \n", a);
	printf("�ּ� : %d \n", &a);
	test(); // a�� ���� -> �Ҹ�
	test2(10); // a�� ����鼭 10�� �� -> �Ҹ�
	test_ret(); // return ������ ������鼭 10���� �ٲ�
	a = test_ret(); // return ������ ������鼭 10���� �ٲ� -> a�� ����
} // end of main