#include <stdio.h>
void main(){
	int darr[4][3]; // 4 ==> ����  , 3 ==> ����
	int i , j; int value = 0;
	darr[0][0] = 100;
	darr[1][1] = 200;
	darr[3][1] = 10;
	for(i = 0; i < 4; i++) // ���� �ѹ���
	{
		for(j = 0; j <3; j++) // ���� ����
		{
			darr[i][j] = value;
			value++; // value += 1 , value = value + 1
		}
	}	
	for(i = 0; i < 4; i++){
		for(j = 0; j <3; j++){
			printf("%d\t" , darr[i][j]);
		}
		printf("\n");
	}
	for(i = 0; i < 4; i++){  // ����
		for(j = 0; j <4; j++){  // ����
			printf("*");
		}
		printf("\n");
	}
	//���� 1) �ٵ��Ǹ������ ���~
	//���� 2) ���׸��� 
}