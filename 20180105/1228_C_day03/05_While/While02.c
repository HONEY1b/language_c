// 문제) 업다운 게임 comnum은 0~99 사이의 값을 랜덤으로 갖는다.
//		 mynum에 0~99 사이의 값을 입력을 받으면 comnum보다 크다 작다를 출력한다.(같다가 나올때까지 반복)
// 문제) mynum 을 ai로 바꿔보세요. 
// 범위를 좁혀가도록 만들어보세요.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	int comnum = 0, mynum = 0, ai = 0;

	srand(time(0));
	comnum = rand() % 100; // 0~99 사이의 숫자

	printf("문제) 업다운 게임 comnum은 0~99 사이의 값을 랜덤으로 갖는다. \n");
	while(1)
	{
		printf("0~99 사이의 숫자를 입력하세요 : \n");
		scanf("%d", &mynum);
		if(comnum < mynum) {printf("down \n");}
		else if(comnum > mynum) {printf("up \n");}
		else 
		{
			printf("correct! \n");
			break;
		}
	}

	printf("문제) mynum 을 ai로 바꿔보세요. ");
	ai = rand() % 100;
	printf("치트 : %d", comnum);
	while(1)
	{
		printf("ai number : %d \n", ai);
		if (comnum > ai) 
		{
			printf("up \n");
			ai = rand() % 100 + ai;
		}
		else if (comnum < ai)
		{
			printf("down \n");
			ai = rand() % ai;
		}
		else 
		{
			printf("correct! answer is %d", comnum);
			break;
		}
	}



}