#include <stdio.h>
#include <stdlib.h> // malloc()
void main()
{
	int size;
	int *p ;
	int i ;
	printf("참가자는 몇명입니까 >>> ");
	scanf("%d" , &size);
	p = (int*)malloc(sizeof(int) * size);
	for(i = 0; i < size; i++)
	{
		p[i] = i + 1;
	}
	for(i = 0; i < size; i++)
	{
		printf("%d 번 참가자 \n" , p[i]);
	}
}