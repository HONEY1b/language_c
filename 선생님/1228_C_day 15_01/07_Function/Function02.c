#include <stdio.h>
void line_deco(); // �Լ����漱��
void lines_deco(int count);
void sum(int num1 , int num2);
void main(){
	//printf("����ҳ���\n");
	//line_deco();
	sum(10,2);
	//line_deco();
	//lines_deco(10);
	//���� 1) ���� ���ϱ� ������ ������ �Լ��� ��������.
	//���빮�� ) line_deco() �Լ��� ���ڸ� ������ ���ڸ�ŭ ������ �׷��ִ� �Լ��� �ٲ㺸��.
	//ex) line_deco(3);
	// printf("============================\n");
	// printf("============================\n");
	// printf("============================\n");	
	// �Լ��� �⺻������ main() �Լ� ���� �־�ߵȴ�. 
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
	lines_deco(2);
	printf("%d + %d = %d\n" , num1 , num2 , num1 + num2);
	printf("%d %% %d = %d\n" , num1 , num2 , num1 % num2);
	line_deco();
}