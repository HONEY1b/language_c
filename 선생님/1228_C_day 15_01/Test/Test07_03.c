#include <stdio.h>

//�Լ� ���� ==> ���赵
//�Լ� ȣ�� ==> ���
void test() // ����
{
	printf("test �Լ� ȣ��!\n");
}
void line_deco(){
	printf("=========================\n");
}
void show_num(int num){
	printf("%d\n" , num);
}
void sum(int num1 , int num2){
	printf("%d + %d = %d\n" , num1 , num2 , num1 + num2);
}
int sum_return(int num1 ,int num2){
	int result = num1 + num2;
	return result;
}
void main()
{
	int a = 10;
	int b = 20;
	a = b;
	int total;
	printf("~~\n");
	test(); //ȣ��
	line_deco();
	show_num(100);
	//���� 1) 100 + 200 �Լ��� ������.
	sum(100, 200);
	//���� 2) (100 + 200) + 300  �Լ��� ��������.
	total = sum_return(100, 200);
	//total = 
	total = sum_return(total , 300);
}