// ����) ���ٿ� ���� comnum�� 0~99 ������ ���� �������� ���´�.
//		 mynum�� 0~99 ������ ���� �Է��� ������ comnum���� ũ�� �۴ٸ� ����Ѵ�.(���ٰ� ���ö����� �ݺ�)
// ����) mynum �� ai�� �ٲ㺸����. 
// ������ ���������� ��������.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	int comnum = 0, mynum = 0, ai = 0;

	srand(time(0));
	comnum = rand() % 100; // 0~99 ������ ����

	printf("����) ���ٿ� ���� comnum�� 0~99 ������ ���� �������� ���´�. \n");
	while(1)
	{
		printf("0~99 ������ ���ڸ� �Է��ϼ��� : \n");
		scanf("%d", &mynum);
		if(comnum < mynum) {printf("down \n");}
		else if(comnum > mynum) {printf("up \n");}
		else 
		{
			printf("correct! \n");
			break;
		}
	}

	printf("����) mynum �� ai�� �ٲ㺸����. ");
	ai = rand() % 100;
	printf("ġƮ : %d", comnum);
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