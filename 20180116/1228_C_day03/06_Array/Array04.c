// ����) �ε����� 2�� �л��� ������ ����غ�����.
// ����) ������ 100���� �л��� �ε����� ����غ�����.
// ����) ��ü ������ ����غ�����
// ����) ��ü ���� �� 50�� �̻� ����غ�����.
// ����) ��ü ���� �� �ε��� 4�̻� ����غ�����.
// ����) ����� ����غ�����.
// ����) ������ ���� ���� �л��� ����غ�����.
// ����) 4���� �л��� ������ 0~99���� �������� ���� 
//		 3���� ������ ����� �л����� ���
//		 ���������� ���� ���� �л� ���
//		 3���� ����� ���� ���� �л� ���

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	int score[10] = {10, 100, 90, 80, 49, 30, 64, 38, 0, 20};
	int i, total, avr, temp, tempI = 0;
	int korScore[4];
	int mathScore[4];
	int engScore[4];
	int total2[4] = {0}, avr2[4] = {0};
	// �̸��� ��ġ���ʵ��� Ȯ���� ��

	printf("����) �ε����� 2�� �л��� ������ ����غ�����. \n"); //�ε����� 0~9���� ����
	printf("�ε��� : %d -> ���� : %d \n", 2, score[2]);

	printf("����) ������ 100���� �л��� �ε����� ����غ�����. \n");
	for(i = 0; i < 10; i++)
		if(score[i] == 100) 
			printf("�ε��� : %d -> ���� : %d \n", i, score[i]);
			//printf("��ȣ : %d -> ���� : %d \n", i+1 , score[i]);

	printf("����) ��ü ������ ����غ����� \n");
	for(i = 0; i < 10; i++)
		//printf("�ε��� : %d -> ���� : %d \n", i, score[i]);
		printf("��ȣ : %d -> ���� : %d \n", i+1 , score[i]);

	printf("����) ��ü ������ 50�� �̻� ����غ�����. \n");
	for(i = 0; i < 10; i++)
		if(score[i] >=50 ) 
			//printf("�ε��� : %d -> ���� : %d \n", i, score[i]);
			printf("��ȣ : %d -> ���� : %d \n", i+1 , score[i]);

	printf("����) ��ü ���� �� �ε��� 4�̻�(��ȣ 5�̻�)�� ����غ�����. \n");
	for(i = 0; i < 10; i++)
		if(i >=4 ) 
			//printf("�ε��� : %d -> ���� : %d \n", i, score[i]);
			printf("��ȣ : %d -> ���� : %d \n", i+1 , score[i]);

	printf("����) ����� ����غ�����. \n");
	total = 0;
	for(i = 0; i < 10; i++)
		total = total + score[i];
	avr = total / 10;
	printf("��� : %d \n", avr);

	printf("����) ��� ������ ������ ����غ�����. \n");
	for(i = 0; i < 10; i++)
		if(score[i] <= avr ) 
			//printf("�ε��� : %d -> ���� : %d \n", i, score[i]);
			printf("��ȣ : %d -> ���� : %d \n", i+1 , score[i]);

	printf("����) ������ ���� ���� �л��� ����غ�����. \n");
	temp = score[0];
	for(i = 0; i < 10; i++) {
		if(temp > score[i]) {
			temp = score[i];
			tempI = i;
		}
	}
	//printf("�ε��� : %d -> ���� : %d \n", i, score[i]);
	printf("��ȣ : %d -> ���� : %d \n", tempI+1 , score[tempI]);

	printf("����) 4���� �л��� ������ 0~99���� �������� ���� \n");
	srand(time(0));
	for(i = 0; i < 4; i++) {
		korScore[i] = rand() % 100;
		mathScore[i] = rand() % 100;
		engScore[i] = rand() % 100;
	}

	printf("����) 4���� �л��� ������ ����� ���ʷ� ��� \n");
	for(i = 0; i < 4; i++) {
		total2[i] = korScore[i] + mathScore[i] + engScore[i];
		avr2[i] = total2[i] / 3;
		printf("���� : %d, ��� : %d \n", total2[i], avr2[i]);
	}

	printf("����) ���������� ���� ���� �л� ��� \n");
	temp = engScore[0];
	for(i = 0; i < 4; i++) {
		if(temp < engScore[i]) {
			temp = engScore[i];
			tempI = i;
		}
	}
	//printf("�ε��� : %d -> ���� : %d \n", i, score[i]);
	printf("��ȣ : %d -> ����� : %d \n", tempI+1 , engScore[tempI]);

	printf("����) 3���� ����� ���� ���� �л� ��� \n");
	temp = avr2[0];
	for(i = 0; i < 4; i++) {
		if(temp > avr2[i]) {
			temp = avr2[i];
			tempI = i;
		}
	}
	//printf("�ε��� : %d -> ���� : %d \n", i, score[i]);
	printf("��ȣ : %d -> ��� : %d \n", tempI+1 , avr2[tempI]);



}//end of main