// 문제) 데이터를 0~11 까지 저장 후 출력
// 문제) 데이터를 교환
/*
	0, 1, 2, 3
	4, 5, 6, 7
	8, 9, 10, 11

	->

	0, 1, 2, 3
	8, 9, 10, 11
	4, 5, 6, 7

*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int darr[3][4];
	int i, j, a = 0;
	int**pp = 0;
	int*temp;

	pp = (int**)malloc(12);
	pp[0] = (int*)malloc(16);
	pp[1] = (int*)malloc(16);
	pp[2] = (int*)malloc(16);
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			pp[i][j] = a;
			a++;
		}
	}
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			printf("%d ", pp[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	printf("문제) 데이터를 교환 \n");

	temp = pp[1];
	pp[1] = pp[2];
	pp[2] = temp;

	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			printf("%d ", pp[i][j]);
		}
		printf("\n");
	}

}