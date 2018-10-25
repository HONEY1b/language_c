#include <stdio.h>
void main(){
	int i , j;
	for(i = 0; i < 3; i++){
		printf("i >> %d\t" , i);
		for(j=0; j <5; j++)
		{
			printf("j >> %d\t" , j);
		}
		printf("\n");
	}
}