// 문제) 입금함수를 만들어보세요. \\\\\\\\\\\\\
// 문제) 비밀번호 3회 실패시 재설정 , 메뉴함수 만들기

#include <stdio.h>
void input_money(int * p) {
	int money;
	printf("입금할 금액을 입력하세요 : " );
	scanf("%d" , &money);
	*p += money;
}

void out_money(int * p) {
	int money;
	printf("출금할 금액을 입력하세요 : " );
	scanf("%d" , &money);
	if(*p > money) {*p -= money;}
	else {printf("잔액이 부족합니다. \n");}
}

void renew(int *pw, int *id)
{
	int pw2, id2;
	printf("본인확인을 위한 전화번호를 입력하세요. :");
	scanf("%d", &id2);

	if (id2 == *id){
		printf("재설정할 비밀번호를 입력하세요. : ");
		scanf("%d", &pw2);
		*pw = pw2;
	}
}

void ch_pw(int *pw, int *count) {
	int in_pw;
	while(*count < 3){
		printf("비밀번호를 입력하세요 : ");
		scanf("%d", &in_pw);
		if(*pw != in_pw){
			*count += 1;
			printf("틀렸습니다. \n");
			printf("남은 횟수 : %d \n", 3 - *count);
		}
		else if(*pw == in_pw){
			printf("맞았습니다. \n");
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
		printf("*** 코리아ATM *** \n");
		printf("1. 입금 \n");
		printf("2. 출금 \n");
		printf("3. 조회 \n");
		printf("번호를 입력하세요 : ");
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
				printf("비밀번호를 재설정 합니다.");
				renew(&pw, &id);
				count = 0;
			}
		}
		else if(input_num == 3){
			ch_pw(&pw, &count);
			if (count < 3){
				printf("잔액 : %d \n" , money);
			}
			else {
				printf("비밀번호를 재설정 합니다.");
				renew(&pw, &id);
			}
		}
	}
	//심화문제 ) 비밀번호 3회 실패시 재설정 , 메뉴함수 만들기
}