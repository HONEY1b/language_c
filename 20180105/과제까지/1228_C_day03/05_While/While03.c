#include<stdio.h>
// *** �ڸ��� ATM ***
// 1. �Ա�
// 2. ��� -> ��й�ȣ == 1234
// 3. ��ȸ -> ��й�ȣ == 1234
// 4. ����
// �ܾ� : 10000
// �Լ��� ���� ���� -> ��й�ȣ 3�� Ʋ���� ���, ��й�ȣ �缳��

void main()
{
	int a, b, pw, compw, money =10000;
	compw = 1234;

	while(1)
	{
		printf("*** �ڸ��� ATM *** \n 1. �Ա� \n 2. ��� \n 3. ��ȸ \n 4. ���� \n");
		scanf("%d", &a);
		if(a == 1) 
		{
			printf("�Ա��� �ݾ��� �Է����ּ���. \n: ");
			scanf("%d", &b);
			money = money + b;
			printf("���� �ܾ��� %d �� �Դϴ�. \n", money);
		}
		else if(a == 2)
		{
			printf("��й�ȣ�� �Է��ϼ���. \n");
			scanf("%d", &pw);
			if(pw == compw)
			{
				printf("����� ���� �Է��ϼ���. \n");
				scanf("%d", &b);
				if(money < b) {
					printf("�ܾ��� �����մϴ�. \n");
				}
				else 
				{
					money = money - b;
					printf("���� �ܾ��� %d �� �Դϴ�. \n", money);
				}
			}
			else {printf("Ʋ�Ƚ��ϴ�. \n");}
		}
		else if(a == 3)
		{
			printf("��й�ȣ�� �Է��ϼ���. \n");
			scanf("%d", &pw);
			if(pw == compw) {printf("���� �ܾ��� %d �� �Դϴ�. \n", money);}
			else {printf("Ʋ�Ƚ��ϴ�. \n");}
		}
		else if (a == 4)
		{
			printf("�����մϴ�. �ȳ��� ������ \n");
			break;
		}
	} // end of while
} // end of main