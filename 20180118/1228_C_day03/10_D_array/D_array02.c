#include <stdio.h>

void main()
{
	int i, j;

	for(i = 0; i < 3; i++){
		printf("%d \n",i);
		for(j = 0; j < 2; j++){
			printf("%d \t",j);
		}
		printf("\n");
	}

}