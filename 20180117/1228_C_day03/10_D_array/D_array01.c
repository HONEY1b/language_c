// ����) �ٵ��� ������� ���
// ����) �ϳ��� �����ϵ��� ���׸���
// ����) �ﰢ�� ����� ���׸��� \\\\\\\\\\\\\\\\\
// ����) ���ﰢ�� ����� ���׸��� \\\\\\\\\\\\\\\\\

#include <stdio.h>

void main()
{
	int darr[4][3];
	int i, j, value = 0;

	darr[0][0] = 100;
	darr[2][1] = 200;
	darr[3][1] = 10;

	for(i = 0; i < 4; i++){ // ���� �� ����
		for(j = 0; j < 3; j++){ // ���� ����
			darr[i][j] = value;
			value++;
		}
	}

	printf("����) �ٵ��� ������� ��� \n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			printf("%d\t", darr[i][j]);
		}
		printf("\n");
	}
	printf("����) �ϳ��� �����ϵ��� ���׸��� \n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			if(j <= i){printf("*\t");}
			else{printf("\t");}
		}
		printf("\n");
	}

	printf("����) �ﰢ�� ����� ���׸��� \n");
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){

		}
		printf("\n");
	}

	printf("����) ���ﰢ�� ����� ���׸��� \n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			if(darr[i][j] <= darr[i][i]){printf("*");}
		}
		printf("\n");
	}


}