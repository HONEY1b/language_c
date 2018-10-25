//홍콩반점
// 심화 조건 : break 쓰지말고 잔액이 부족하면 for문 종료시키기
// 심화 조건 : money == 100000, 짜장면은 3그릇밖에 없음. 다팔리면 종료시키기
#include<stdio.h>

void main()
{
	int money = 10000;
	int number = 0;
	int i = 0, j = 0;

	for(i = 0; i < 20; i++)
	{
		printf("***홍콩반점*** \n 1. 짜장면 6000원 \n 2. 짬뽕 8000원 \n 3. 탕수육 12000원 \n");
		printf("주문번호를 골라주세요 : ");
		scanf("%d", &number);
		if(number == 1)
		{
			if(money < 6000)
			{
				printf("금액이 부족합니다. 남은 돈은 %d 입니다. \n", money);
				break;
			}
			money = money - 6000;
			printf("메뉴는 짜장면입니다. \n");
		}
		else if(number == 2)
		{
			if(money < 8000)
			{
				printf("금액이 부족합니다. 남은 돈은 %d 입니다. \n", money);
				break;
			}
			money = money - 8000;
			printf("메뉴는 짬뽕입니다. \n");
		}
		else if(number == 3)
		{
			if(money < 12000) 
			{
				printf("금액이 부족합니다. 남은 돈은 %d 입니다. \n", money);
				break;
			}
			money = money - 12000;
			printf("메뉴는 탕수육입니다. \n");
		}
	}

	//금액이 부족합니다. 거스름돈 얼마입니다.

	// 심화  조건 : break 쓰지말고 잔액이 부족하면 for문 종료시키기
	
	money = 100000;
	for(i = 0; i < 20, j < 3; i++)
	{
		printf("***홍콩반점2*** \n 1. 짜장면 6000원 \n 2. 짬뽕 8000원 \n 3. 탕수육 12000원 \n");
		printf("주문번호를 골라주세요 : ");
		scanf("%d", &number);
		if(number == 1)
		{
			if(money < 6000) 
			{
				i = 20;
				printf("금액이 부족합니다. 남은 돈은 %d 입니다. \n", money);
			}
			else if(i < 20)
			{
				money = money - 6000;
				j++;
				printf("메뉴는 짜장면입니다. \n");
			}
		}
		else if(number == 2)
		{
			if(money < 8000)
			{
				i = 20;
				printf("금액이 부족합니다. 남은 돈은 %d 입니다. \n", money);
			}
			else if(i < 20)
				{
					money = money - 8000;
					printf("메뉴는 짬뽕입니다. \n");
			}
		}
		else if(number == 3)
		{
			if(money < 12000)
			{
				i = 20;
				printf("금액이 부족합니다. 남은 돈은 %d 입니다. \n", money);
			}
			else if(i < 20)
			{
					money = money - 12000;
					printf("메뉴는 탕수육입니다. \n");
			}
		}
	}
}// end of main