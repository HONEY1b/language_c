#include <stdio.h>
#include <stdlib.h>
void main(){
	int darr[3][4];
	int**pp =0; int i; int j; int value = 0; int*temp;
	pp = (int**)malloc(12);		//세로
	pp[0] = (int*)malloc(16);	//가로1
	pp[1] = (int*)malloc(16);	// 가로2
	pp[2] = (int*)malloc(16);	//가로3
	pp[0][0] = 0;
	pp[0][1] = 1;
	pp[0][2] = 2;
	for(i = 0; i < 3; i++){
		for(j = 0; j <4; j++){
			pp[i][j] = value;
			value ++;
		}
	}
	temp = pp[1];
	pp[1] = pp[2];
	pp[2] = temp;
	for(i = 0; i < 3; i++){
		for(j = 0; j <4; j++){
			printf("%d\t" , pp[i][j]);
		}
		printf("\n");
	}
	// 0~11 저장후 출력
	// 0,1,2,3
	// 4,5,6,7,
	// 8,9,10,11
	// 0,1,2,3	
	// 8,9,10,11
	// 4,5,6,7,

}