// ����) ���� 0~99 ���� 3���� �Է¹ް� ���հ� ����� ���Ѵ��� ����� 60 ������ �հ� �̸��̸� ���հ�
// ����) 9~0 �Ųٷ� ���
// ����) 10~20 ������ �� ���
// ����) 0~9 ������ Ȧ���� ���
// ����) 0~9 ������ Ȧ���� �� ���� ���� ���
// ����) ����Ų ��� 31
/*
		int br31 = 0;
		int myNum = 0;
		int ai = 0;
		1~3 ������ ���� �Է¹ް�, br31 ���� �ش���ڸ�ŭ ������Ų��.
		ai�� �������� 1~3�� �Է¹ް�, br31 ���� �����ؼ� ������Ų��.
		myNum �� ai �� �ݺ��ؼ� br31�� �������Ѽ� 31�� ���� �Ѵ� ���� �й� ���
*/
#include<stdio.h>
#include<stdlib.h> //rand() : ���� �߻� �Լ� (������)
#include<time.h>

void main()
{
	int a, b, c, total;
	double avr;
	int i, sum = 0;
	int br31 = 0, myNum = 0, ai = 0;

	printf("����) ���� 0~99 ���� 3���� �Է¹ް� ���հ� ����� ���Ѵ��� ����� 60 ������ �հ� �̸��̸� ���հ� \n");
	printf("type your score : ");
	scanf("%d %d %d", &a, &b, &c);

	total = a + b + c;
	avr = total / 3;
	if ((a <= 99) && (b <= 99) && (c <= 99)){
		if((a >= 60) && (b >= 60) && (c >= 60))
		{
			if(avr >= 60) {printf("�հ� \n");}
			else {printf("���հ� \n");}
		}
	}

	printf("����) 9~0 �Ųٷ� ��� \n");
	for(i = 9; i >= 0; i--) {printf("%d \n", i);}

	printf("����) 10~20 ������ �� ��� \n");
	for(i = 10; i <= 20; i++) {printf("%d \n", i);}

	printf("����) 0~9 ������ Ȧ���� ��� \n");
	for(i = 0; i < 10; i++)
	{
		if(i % 2 == 1)
		{
			sum = sum + i;
			printf("%d \n", i);
		}
	}

	printf("����) 0~9 ������ Ȧ���� �� ���� ���� ��� \n");
	printf("%d \n", sum);

	printf("����) ����Ų ��� 31 \n");
	/*
		int br31 = 0;
		int myNum = 0;
		int ai = 0;
		1~3 ������ ���� �Է¹ް�, br31 ���� �ش���ڸ�ŭ ������Ų��.
		ai�� �������� 1~3�� �Է¹ް�, br31 ���� �����ؼ� ������Ų��.
		myNum �� ai �� �ݺ��ؼ� br31�� �������Ѽ� 31�� ���� �Ѵ� ���� �й� ���
	*/

	for(br31 = 0; br31 < 31;) //������ �ʼ� �ƴ�
	{
		printf("1~3������ ���ڸ� �Է��Ͻÿ� \n");
		scanf("%d", &myNum);
		br31 = br31 + myNum;
		if(br31 < 31)
		{
			srand(time(0));
			ai = rand() % 3 +1;
			printf("ai�� ���� : %d \n", ai);
			br31 = br31 + ai;
			if (br31 >= 31) {printf("win \n");}
		}
		else {printf("lose \n");}
		printf("br31 : %d \n", br31);
	}
} // end of main