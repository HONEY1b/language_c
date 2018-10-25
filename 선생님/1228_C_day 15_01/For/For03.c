#include <stdio.h>
void main(){
	int money = 10000;
	int number = 0;
	int i=0;
	for(i = 0; i < 20; i++){
		printf("***홍콩반점***\n 1. 짜장면 6000원 \n 2. 짬뽕   8000원 \n 3. 탕수육 12000원\n");
		printf("주문번호를 골라주세요 >>> ");
		scanf("%d" , &number);
		if(number == 1){
			if(money > 6000){
				money = money - 6000;
			}else{
				printf("%d 만큼 금액이 부족합니다" , 6000- money);
			}
		}
		else if(number == 2){
			if(money > 8000){
				money = money - 8000;
			}
		}
		else if(number ==3){
		}
	}
	printf("종료\n");
	// 금액이 부족합니다. 거스름돈 얼마입니다 . 짜장면 1개를 주문했습니다.
	// 심화조건 )) break 쓰지말고 잔액이 부족하면 for문을 종료시켜보세요.
	// 심화조건 )) money == 십만 , 짜장면이 3그릇이 다팔리면 종료시켜보세요.

}