// ����) i�� 5�� ���� ����غ�����.
// ����) ���ٿ� ���� comnum�� 0~99 ������ ���� �������� ���´�.
//		 mynum�� 0~99 ������ ���� �Է��� ������ comnum���� ũ�� �۴ٸ� ����Ѵ�.(���ٰ� ���ö����� �ݺ�)

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//���� ��� : break : �ݺ����� ��� �����Ų��.
void main()
{
	int i;
	int comnum = 0, mynum;
	/*
	for(i = 0; i < 10; i++)
	{
		if(i == 5) printf("%d \n", i);
		else printf("�ݺ��� \n");
			
	}
	*/

	for(i = 0; i < 10; i++)
	{
		if(i == 5) 
			{
				printf("%d \n", i);
				break;
		}
		else printf("�ݺ��� \n");
	}

	printf("����) ���ٿ� ���� comnum�� 0~99 ������ ���� �������� ���´�. \n");
	// mynum�� 0~99 ������ ���� �Է��� ������ comnum���� ũ�� �۴ٸ� ����Ѵ�.(���ٰ� ���ö����� �ݺ�)

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