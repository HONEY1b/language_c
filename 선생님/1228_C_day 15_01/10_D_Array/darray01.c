#include <stdio.h>
void main(){
	int darr[4][3]; // 4 ==> 세로  , 3 ==> 가로
	int i , j; int value = 0;
	darr[0][0] = 100;
	darr[1][1] = 200;
	darr[3][1] = 10;
	for(i = 0; i < 4; i++) // 세로 한번에
	{
		for(j = 0; j <3; j++) // 가로 전부
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
	for(i = 0; i < 4; i++){  // 세로
		for(j = 0; j <4; j++){  // 가로
			printf("*");
		}
		printf("\n");
	}
	//문제 1) 바둑판모양으로 출력~
	//문제 2) 별그리기 
}