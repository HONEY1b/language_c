// ����) �Ա��Լ��� ��������. \\\\\\\\\\\\\
// ����) ��й�ȣ 3ȸ ���н� �缳�� , �޴��Լ� �����

#include <stdio.h>
void input_money(int * p) {
	int money;
	printf("�Ա��� �ݾ��� �Է��ϼ��� : " );
	scanf("%d" , &money);
	*p += money;
}

void out_money(int * p) {
	int money;
	printf("����� �ݾ��� �Է��ϼ��� : " );
	scanf("%d" , &money);
	if(*p > money) {*p -= money;}
	else {printf("�ܾ��� �����մϴ�. \n");}
}

void renew(int *pw, int *id)
{
	int pw2, id2;
	printf("����Ȯ���� ���� ��ȭ��ȣ�� �Է��ϼ���. :");
	scanf("%d", &id2);

	if (id2 == *id){
		printf("�缳���� ��й�ȣ�� �Է��ϼ���. : ");
		scanf("%d", &pw2);
		*pw = pw2;
	}
}

void ch_pw(int *pw, int *count) {
	int in_pw;
	while(*count < 3){
		printf("��й�ȣ�� �Է��ϼ��� : ");
		scanf("%d", &in_pw);
		if(*pw != in_pw){
			*count += 1;
			printf("Ʋ�Ƚ��ϴ�. \n");
			printf("���� Ƚ�� : %d \n", 3 - *count);
		}
		else if(*pw == in_pw){
			printf("�¾ҽ��ϴ�. \n");
			break;
		}
	}
}

void menu(){}
void main(){
	int money = 1000;
	int pw = 1234;
	int input_num;
	int count = 0;
	int id = 12345678;
	menu();
	while(1){
		printf("*** �ڸ���ATM *** \n");
		printf("1. �Ա� \n");
		printf("2. ��� \n");
		printf("3. ��ȸ \n");
		printf("��ȣ�� �Է��ϼ��� : ");
		scanf("%d" , &input_num);
		if(input_num == 1){
			input_money(&money);
			printf("%d \n", money);
		}
		else if(input_num == 2){
			ch_pw(&pw, &count);
			if (count < 3){
				out_money(&money);
				printf("%d \n", money);
			}
			else {
				printf("��й�ȣ�� �缳�� �մϴ�.");
				renew(&pw, &id);
				count = 0;
			}
		}
		else if(input_num == 3){
			ch_pw(&pw, &count);
			if (count < 3){
				printf("�ܾ� : %d \n" , money);
			}
			else {
				printf("��й�ȣ�� �缳�� �մϴ�.");
				renew(&pw, &id);
			}
		}
	}
	//��ȭ���� ) ��й�ȣ 3ȸ ���н� �缳�� , �޴��Լ� �����
}