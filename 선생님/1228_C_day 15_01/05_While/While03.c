#include <stdio.h>
// ***코리아 ATM***
// 1. 입금  
// 2. 출금  ==> 비밀번호 == 1234 ;
// 3. 조회  ==> 비밀번호 == 1234 ;
// 4. 종료
// 잔액 >>> 10000
void main(){
	int num = 0;int pw = 1234;int money = 10000;
	int deposit;
	while(1){
		printf("*** 코리아 atm ***\n");
		printf("1.입금\n");
		printf("2.출금\n");
		printf("3.조회\n");
		printf("4.종료\n");
		printf("번호를 입력하세요 >>> ");
		scanf("%d" , &num);
		if (num ==1) {
			printf("입금할 금액을 입력하세요 >>> ");
			scanf("%d" , &deposit);
			money = money + deposit;
		} 
		if (num ==2) {}
	}
}