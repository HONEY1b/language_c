//����
// ����) int score[10] = {10, 100, 90, 80, 49, 30, 64, 38, 0, 20};
//		 �л������� �ٲ���� -> �ε��� 2���� �Է¹ް�, ���� ��ȯ �� ���
// ����) 4���� �л��� ������ 0~99���� �������� ����
//		 3���� ������ ����� �л����� ���
//		 ���������� ���� ���� �л� ���
//		 3���� ����� ���� ���� �л� ���
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// ����) �¿�����̱�


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	int arr[5] = {0, 10, 20, 30, 40};
	int move, temp, index, i;
	int score[10] = {10, 100, 90, 80, 49, 30, 64, 38, 0, 20};
	int a, b;
	int kor[4], eng[4], mat[4];
	int total = 0, avr[4], maxeng = 0, minavr = 100, k;

	printf("����) �¿� �����̱� \n");
	// 0 �� �÷��̾� �Դϴ�. �¿�� �̵����� ������.
	
	while(1){
		printf("��(1), ��(2) �� �Է��ϼ��� : ");
		scanf("%d", &move);

		for(i = 0; i < 5; i++)
			if (arr[i] == 0) index = i;

		if(index == 0 && move == 1) continue;
		else if(index == 4 && move == 2) continue;
		else{
			if (move == 1){
				temp = arr[index-1];
				arr[index-1] = 0;
				arr[index] = temp;
			}
			else if (move == 2){
				temp = arr[index];
				arr[index] = arr [index+1];
				arr[index+1] = temp;
			}
			else if (move == 0)
				break;
		}
		for(i = 0; i < 5; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}

	printf("����) ��ü ���� �� 50�� �̻� ����غ�����. \n");
	for(i = 0; i < 10; i++)
	{
		if(score[i] > 50){printf("%d ", score[i]);}
	}
	printf("\n");

	printf("����) �л������� �ٲ���� -> �ε��� 2���� �Է¹ް�, ���� ��ȯ �� ��� \n");
	printf("�ٲ� �л����� �ε����� �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);

	printf("�ٲ�� �� : ");
	for(i = 0; i < 10; i++) printf("%d ", score[i]);
	printf("\n");

	temp = score[a];
	score[a] = score[b];
	score[b] = temp;

	printf("�ٲ� �� : ");
	for(i = 0; i < 10; i++) printf("%d ", score[i]);
	printf("\n");

	printf("����) 4���� �л��� ������ 0~99���� �������� ���� \n");
	srand(time(0));

	for(i = 0; i < 4; i++)
	{
		kor[i] = rand() % 100;
		eng[i] = rand() % 100;
		mat[i] = rand() % 100;
	}
	for(i = 0; i < 4; i++){
	printf("�л� : %d -> ���� : %d, ���� : %d, ���� : %d \n", i, kor[i], eng[i], mat[i]);
	}

	printf("����) 3���� ������ ����� �л����� ��� \n");
	for(i = 0; i < 4; i++){
		total = kor[i] + eng[i] + mat[i];
		avr[i] = total / 3;
		printf("�л� : %d -> ���� : %d, ��� : %d \n", i, total, avr[i]);
	}

	printf("����) ���������� ���� ���� �л� ��� \n");
	for(i = 0; i < 4; i++){
		if(eng[i] > maxeng) {
			maxeng = eng[i];
			k = i;
		}
	}
	printf("���������� ���� ���� �л� : %d, ���� : %d \n", k, maxeng);

	printf("����) 3���� ����� ���� ���� �л� ��� \n");
	for(i = 0; i < 4; i++){
		if(avr[i] < minavr) {
			minavr = avr[i];
			k = i;
		}
	}
	printf("����� ���� ���� �л� : %d, ���� : %d \n", k, minavr);


} // end of main