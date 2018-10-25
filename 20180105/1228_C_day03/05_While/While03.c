#include<stdio.h>
// *** 코리아 ATM ***
// 1. 입금
// 2. 출금 -> 비밀번호 == 1234
// 3. 조회 -> 비밀번호 == 1234
// 4. 종료
// 잔액 : 10000
// 함수를 배우고 나서 -> 비밀번호 3번 틀리는 경우, 비밀번호 재설정

void main()
{
	int a, b, pw, compw, money =10000;
	compw = 1234;

	while(1)
	{
		printf("*** 코리아 ATM *** \n 1. 입금 \n 2. 출금 \n 3. 조회 \n 4. 종료 \n");
		scanf("%d", &a);
		if(a == 1) 
		{
			printf("입금할 금액을 입력해주세요. \n: ");
			scanf("%d", &b);
			money = money + b;
			printf("현재 잔액은 %d 원 입니다. \n", money);
		}
		else if(a == 2)
		{
			printf("비밀번호를 입력하세요. \n");
			scanf("%d", &pw);
			if(pw == compw)
			{
				printf("출금할 돈을 입력하세요. \n");
				scanf("%d", &b);
				if(money < b) {
					printf("잔액이 부족합니다. \n");
				}
				else 
				{
					money = money - b;
					printf("현재 잔액은 %d 원 입니다. \n", money);
				}
			}
			else {printf("틀렸습니다. \n");}
		}
		else if(a == 3)
		{
			printf("비밀번호를 입력하세요. \n");
			scanf("%d", &pw);
			if(pw == compw) {printf("현재 잔액은 %d 원 입니다. \n", money);}
			else {printf("틀렸습니다. \n");}
		}
		else if (a == 4)
		{
			printf("감사합니다. 안녕히 가세요 \n");
			break;
		}
	} // end of while
} // end of main