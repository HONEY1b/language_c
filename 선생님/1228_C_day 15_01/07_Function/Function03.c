#include <stdio.h>
void line_deco(); // �Լ����漱��
void lines_deco(int count);
void sum(int num1 , int num2);
void main(){
	//���� 1) 10 + 2 �����ϴ� �Լ��� ��������.  ==> sum(10,2);	
	int total;	
	//���� 2) 10 + 2 + 3 
	total = sum_return(10 , 2);
	total = sum_return(total , 3);
	printf("%d\n" , total);
	//���� 3) 10 + 2 + 3 / 4 * 5
}
void line_deco(){
	printf("============================\n");
}
void lines_deco(int count){
	int i;
	for( i =0; i < count; i++)
	{printf("============================\n");}
}
void sum(int num1 ,int num2){
	lines_deco(1);
	printf("%d + %d = %d\n" , num1 , num2 , num1 + num2);
	line_deco();
}
int sum_return(int num1 ,int num2){
	int result;
	result = num1 + num2;
	return result;
}