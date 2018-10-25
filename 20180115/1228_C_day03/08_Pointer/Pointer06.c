#include <stdio.h>


void main()
{
	int i;
	int arr[5] = {0};
	int * p = 0;
	p = &arr[0];
	p[3] = 100;
	for(i = 0; i <5; i++)
	{
		printf("%d\t" , arr[i]);
	}
	printf("\n====================================\n");
	printf("\n====================================\n");
	for(i = 0; i <5; i++)
	{
		printf("%d\t" , p[i]);
	}
}