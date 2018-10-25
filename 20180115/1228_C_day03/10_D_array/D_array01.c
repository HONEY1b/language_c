// 문제) 바둑판 모양으로 출력
// 문제) 하나씩 증가하도록 별그리기 \\\\\\\\\\\\\\\\\
// 문제) 삼각형 모양의 별그리기 \\\\\\\\\\\\\\\\\
// 문제) 역삼각형 모양의 별그리기 \\\\\\\\\\\\\\\\\

#include <stdio.h>

void main()
{
	int darr[4][3];
	int i, j, value = 0;

	darr[0][0] = 100;
	darr[2][1] = 200;
	darr[3][1] = 10;

	for(i = 0; i < 4; i++){ // 세로 한 번에
		for(j = 0; j < 3; j++){ // 가로 전부
			darr[i][j] = value;
			value++;
		}
	}

	printf("문제) 바둑판 모양으로 출력 \n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			printf("%d\t", darr[i][j]);
		}
		printf("\n");
	}
	printf("문제) 하나씩 증가하도록 별그리기 \n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			if(j <= i){printf("*\t");}
			else{printf("\t");}
		}
		printf("\n");
	}

	printf("문제) 삼각형 모양의 별그리기 \n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			if(darr[i][j] <= darr[i][i]){printf("*");}
		}
		printf("\n");
	}

	printf("문제) 역삼각형 모양의 별그리기 \n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			if(darr[i][j] <= darr[i][i]){printf("*");}
		}
		printf("\n");
	}


}