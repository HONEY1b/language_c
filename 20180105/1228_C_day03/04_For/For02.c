// ����) 9~0 �Ųٷ� ���
// ����) 10~20 ������ �� ���
// ����) 0~9 ������ ¦���� ���
// ����) 0~9 ������ ¦���� ���
// ����) 0~9 ������ Ȧ���� ���
// ����) 0~9 ������ Ȧ���� �� ���� ���� ���
// ����) ���������� -> comnum -> (0~2)

#include<stdio.h>
#include <stdlib.h> //rand() : ���� �߻� �Լ� (������)
#include <time.h>

/*
	for�� (�ݺ���)
	1. for		: Ű����
	2. (����)	: ����
	3. i = 0	: �ʱ�� : �� �ѹ��� ����ȴ�.
	4. i < 10	: ���ǽ� : ���ǽ�
	5. i++		: ������ : (i++) -> (i = i +1) -> (i += 1)
	6. {���๮}	: ������ ��(1)�̸� ����ȴ�.
*/

void main()
{
	int i;
	int sum = 0;
	int com_num, my_num;

	for(i = 0; i < 10; i++) // �ʱ�� : 0, ���ǽ� : 10 -> ���ǽ� ������ŭ �ݺ�
	{
		printf("������ ���� \n"); // ���ǽ��� ���̸� ����� -> ������ ���� -> ���ǽ� ���� -> �ݺ�
	} // ���ǽ��� �����̸� for�� ����

	printf("������ �Ѿ��~~~~ \n");

	printf("����) 9~0 �Ųٷ� ��� \n");
	for(i = 9; i >= 0; i--)
		printf("%d \n", i);

	printf("����) 10~20 ������ �� ��� \n");
	for(i = 10; i < 21; i++)
		printf("%d \n", i);

	printf("����) 0~9 ������ ¦���� ��� \n");
	for(i = 0; i < 10; i++)
	{
		if (i % 2 == 0) {printf("%d \n", i);}
	}

	printf("����) 0~9 ������ Ȧ���� ��� \n");
	for(i = 0; i < 10; i++)
	{
		if (i % 2 == 1) 
		{
			sum = sum + i;
			printf("%d \n", i);
			
		}
	}
	printf("����) 0~9 ������ Ȧ���� �� ���� ���� ���\n");
	printf("%d \n", sum);

	printf("����) ���������� -> comnum -> (0~2) \n");

	srand(time(0)); // ���� �ʱ�ȭ �Լ�
	com_num = rand() % 3;

	printf("����(0), ����(1), ��(2) �߿��� �ϳ��� ����ּ���. : ");
	scanf("%d", &my_num);

	printf("com : %d, my : %d \n", com_num, my_num);
	
	if(my_num == com_num) {printf("draw \n");}
	else if((my_num == 0 && com_num == 1) || (my_num == 1 && com_num == 2) || (my_num == 2 && com_num == 0)) {printf("lose \n");}
	else if((my_num == 0 && com_num == 2) || (my_num == 1 && com_num == 0) || (my_num == 2 && com_num == 1)) {printf("win \n");}
}