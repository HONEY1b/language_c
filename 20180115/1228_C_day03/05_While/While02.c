// ����) ���ٿ� ���� comnum�� 0~99 ������ ���� �������� ���´�.
//		 mynum�� 0~99 ������ ���� �Է��� ������ comnum���� ũ�� �۴ٸ� ����Ѵ�.(���ٰ� ���ö����� �ݺ�)
// ����) mynum �� ai�� �ٲ㺸����.
// ������ ���������� ��������.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	int comnum = 0, mynum = 0, ai = 0, maxai = 100, minai = 0;

	srand(time(0));
	comnum = rand() % 100; // 0~99 ������ ����

	printf("����) ���ٿ� ���� comnum�� 0~99 ������ ���� �������� ���´�. \n");
	printf("ġƮ : %d \n", comnum);
	while(1) {
		printf("0~99 ������ ���ڸ� �Է��ϼ��� : \n");
		scanf("%d", &mynum);
		if(mynum < 0 || mynum > 99) continue;
		if(comnum < mynum) {printf("down \n");}
		else if(comnum > mynum) {printf("up \n");}
		else{
			printf("correct! \n");
			break;
		}
	}

	printf("����) mynum �� ai�� �ٲ㺸����. \n");
	ai = rand() % 100;
	printf("ġƮ : %d \n", comnum);
	while(1) {
		printf("ai number : %d \n", ai);
		if (comnum > ai) {
			printf("up \n");
			if(ai > minai) minai = ai;
			while(ai >= maxai || ai <= minai)
				ai = rand() % maxai; // min�� max ���̰� �ǵ��� �ؾ���
			
		}
			
		else if (comnum < ai){
			printf("down \n");
			if(ai < maxai) maxai = ai;
			while(ai >= maxai || ai <= minai)
			ai = rand() % maxai; // min�� max ���̰� �ǵ��� �ؾ���
			
		}
		else if(ai == comnum){
			printf("correct! answer is %d \n", comnum);
			printf("exit \n");
			break;
		}
		printf("max : %d, min : %d \n", maxai, minai);
	}
////////////////////////////////////////////////////////////////////////
	/*
	int comnum = -1;
	int mynum = -1;
	int high;
	int low;

	srand(time(0));
	comnum = rand() % 100;
	high = 100;
	low = -1;

	printf("ġƮ : %d \n", comnum);
	while(1)
	{
		mynum = rand() % 100;
		if(mynum < high && mynum > low && mynum > comnum){
		high = mynum;
		printf("high : %d\n", high);
		}
		else if(mynum < high && mynum > low && mynum < comnum){
		low = mynum;
		printf("low : %d\n", low);
		else if(mynum == comnum) {
			printf("mynum : %d \n", mynum;
			printf("exit \n");
			break;
			}
	
	}


	
	*/


}