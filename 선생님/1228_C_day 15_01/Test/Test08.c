#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
	////��ȭ����
	//int arr[5] = {0,10,20,30,40};
	//int move;
	//// 0�� �÷��̾��̰� �¿�� �̵����Ѻ�����.
	//printf("��(1), ��(2) �� �Է��ϼ��� >>> ");
	//scanf("%d" , &move);
	//ex) �Է� 2  , ��� ==> 10 ,0 , 20 ,30 ,40
	//ex) �Է� 2  , ��� ==> 10 , 20 , 0 , 30 ,40
	//**************************** ���� **********************************
	int korScore[4];int mathScore[4];int engScore[4];
	//4-1) 3���� ���� ��� �л��������
	int i = 0; 
	int maxEng; // ���� �ְ�����
	int maxEngIndex; // �����ְ����� �л�
	int minAvr; // ��� ��������
	int minAvrIndex; // ����������� �л�
	int avrScore[4]; // ��� 4��
	srand(time(0));
	for(i = 0; i < 4; i++){
		korScore[i] = rand()%100;
		mathScore[i] = rand()%100;
		engScore[i] = rand() %100;
		avrScore[i] = (korScore[i] + mathScore[i] + engScore[i]) / 3; // ��հ� ����
	}
	for(i = 0; i < 4; i++){
		printf("%d ��  ���� >> %d , ��� >> %d \n" ,i , // �л���ȣ
			korScore[i] + mathScore[i] + engScore[i], // ����
			(korScore[i] + mathScore[i] + engScore[i]) / 3); // ���
	}	
	//4-2) ���������� ���� ���� �л���� (�ε���)
	maxEng = engScore[0];
	for(i = 0; i < 4; i++){
		if(maxEng < engScore[i]){  // 10 , 100 , 70 , 20
			maxEng = engScore[i]; 
			maxEngIndex = i;
		}
	}
	printf("%d >>> �������� ž >> %d \n" , maxEngIndex , maxEng);
	//4-3) 3���� ����� ���� �����л� ���
	minAvr = avrScore[0];
	for(i = 0; i < 4; i++){
		if(minAvr > avrScore[i]){
			minAvr = avrScore[i];
			minAvrIndex = i;
		}
	}
	printf("%d >>> ������� �ٿ� >> %d \n" , minAvrIndex, minAvr);
}