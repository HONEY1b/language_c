// 문제) i가 5일 때만 출력해보세요.
// 문제) 업다운 게임 comnum은 0~99 사이의 값을 랜덤으로 갖는다.
//		 mynum에 0~99 사이의 값을 입력을 받으면 comnum보다 크다 작다를 출력한다.(같다가 나올때까지 반복)

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//보조 제어문 : break : 반복문을 즉시 종료시킨다.
void main()
{
	int i;
	int comnum = 0, mynum;
	/*
	for(i = 0; i < 10; i++)
	{
		if(i == 5) printf("%d \n", i);
		else printf("반복문 \n");
			
	}
	*/

	for(i = 0; i < 10; i++)
	{
		if(i == 5) 
			{
				printf("%d \n", i);
				break;
		}
		else printf("반복문 \n");
	}

	printf("문제) 업다운 게임 comnum은 0~99 사이의 값을 랜덤으로 갖는다. \n");
	// mynum에 0~99 사이의 값을 입력을 받으면 comnum보다 크다 작다를 출력한다.(같다가 나올때까지 반복)

	srand(time(0));
	comnum = rand() % 100;

	for(mynum = 0; mynum != comnum;)
	{
		printf("guess the number : ");
		scanf("%d", &mynum);
		if(mynum < comnum) {printf("up \n");}
		else if(mynum > comnum) {printf("down \n");}
	}
	if(mynum == comnum) {printf("correct! \n");}



} //end of main