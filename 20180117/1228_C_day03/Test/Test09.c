#include <stdio.h>
// ���ڸ� �����ϴ� ������ "�Ű�����"(parameter) ��� �Ѵ�
void print_even(int num){
	if(num % 2 == 0){printf("¦��\n");}
	else{printf("Ȧ��\n");}
}
void print_negative(int num){
	if(num >=0){printf("���\n");}
	else{printf("����\n");}
}
void main(){
	//���� 1) �����ϳ��� ���ڷ� ����ؼ� ¦�� Ȧ�� ���� �˷��ִ� �Լ��� ��������
	// �Լ�ȣ��� () �ȿ� ����ִ� ���� " ����"(argument) ��� �Ѵ�.
	print_even(10); 
	//���� 2) �����ϳ��� ���ڷ� ����ؼ� ���� ��� ���� �˷��ִ� �Լ��� ��������
	print_negative(-100); 
}
