#include <stdio.h>
void input_money(int * p) {
	int money;
	printf("입금할 금액을 입력하세요 >>> " );
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
		printf("*** 코리아ATM *** \n");
		printf("1. 입금 \n");
		printf("2. 출금 \n");
		printf("3. 조회 \n");
		printf("번호를 입력하세요 >>> ");
		scanf("%d" , &input_num);
		if(input_num == 1){
			input_money(&money);
		}
		if(input_num == 3){
			printf("잔액 >>> %d\n" , money);
		}
	}
	//문제 ) 입금함수를 만들어보세요.
	//심화문제 ) 비밀번호 3회 실패시 재설정 , 메뉴함수 만들기
}