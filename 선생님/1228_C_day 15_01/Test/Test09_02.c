#include <stdio.h>
void input_money(int * p) {
	int money;
	printf("�Ա��� �ݾ��� �Է��ϼ��� >>> " );
	scanf("%d" , &money);
	*p += money;
}
void menu(){}
void main(){
	int money = 1000;
	int pw = 1234;
	int input_num;
	menu();
	while(1){
		printf("*** �ڸ���ATM *** \n");
		printf("1. �Ա� \n");
		printf("2. ��� \n");
		printf("3. ��ȸ \n");
		printf("��ȣ�� �Է��ϼ��� >>> ");
		scanf("%d" , &input_num);
		if(input_num == 1){
			input_money(&money);
		}
		if(input_num == 3){
			printf("�ܾ� >>> %d\n" , money);
		}
	}
	//���� ) �Ա��Լ��� ��������.
	//��ȭ���� ) ��й�ȣ 3ȸ ���н� �缳�� , �޴��Լ� �����
}