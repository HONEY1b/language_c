//ȫ�����
// ��ȭ ���� : break �������� �ܾ��� �����ϸ� for�� �����Ű��
// ��ȭ ���� : money == 100000, ¥����� 3�׸��ۿ� ����. ���ȸ��� �����Ű��
#include<stdio.h>

void main()
{
	int money = 10000;
	int number = 0;
	int i = 0, j = 0;

	for(i = 0; i < 20; i++)
	{
		printf("***ȫ�����*** \n 1. ¥��� 6000�� \n 2. «�� 8000�� \n 3. ������ 12000�� \n");
		printf("�ֹ���ȣ�� ����ּ��� : ");
		scanf("%d", &number);
		if(number == 1)
		{
			if(money < 6000)
			{
				printf("�ݾ��� �����մϴ�. ���� ���� %d �Դϴ�. \n", money);
				break;
			}
			money = money - 6000;
			printf("�޴��� ¥����Դϴ�. \n");
		}
		else if(number == 2)
		{
			if(money < 8000)
			{
				printf("�ݾ��� �����մϴ�. ���� ���� %d �Դϴ�. \n", money);
				break;
			}
			money = money - 8000;
			printf("�޴��� «���Դϴ�. \n");
		}
		else if(number == 3)
		{
			if(money < 12000) 
			{
				printf("�ݾ��� �����մϴ�. ���� ���� %d �Դϴ�. \n", money);
				break;
			}
			money = money - 12000;
			printf("�޴��� �������Դϴ�. \n");
		}
	}

	//�ݾ��� �����մϴ�. �Ž����� ���Դϴ�.

	// ��ȭ  ���� : break �������� �ܾ��� �����ϸ� for�� �����Ű��
	
	money = 100000;
	for(i = 0; i < 20, j < 3; i++)
	{
		printf("***ȫ�����2*** \n 1. ¥��� 6000�� \n 2. «�� 8000�� \n 3. ������ 12000�� \n");
		printf("�ֹ���ȣ�� ����ּ��� : ");
		scanf("%d", &number);
		if(number == 1)
		{
			if(money < 6000) 
			{
				i = 20;
				printf("�ݾ��� �����մϴ�. ���� ���� %d �Դϴ�. \n", money);
			}
			else if(i < 20)
			{
				money = money - 6000;
				j++;
				printf("�޴��� ¥����Դϴ�. \n");
			}
		}
		else if(number == 2)
		{
			if(money < 8000)
			{
				i = 20;
				printf("�ݾ��� �����մϴ�. ���� ���� %d �Դϴ�. \n", money);
			}
			else if(i < 20)
				{
					money = money - 8000;
					printf("�޴��� «���Դϴ�. \n");
			}
		}
		else if(number == 3)
		{
			if(money < 12000)
			{
				i = 20;
				printf("�ݾ��� �����մϴ�. ���� ���� %d �Դϴ�. \n", money);
			}
			else if(i < 20)
			{
					money = money - 12000;
					printf("�޴��� �������Դϴ�. \n");
			}
		}
	}
}// end of main