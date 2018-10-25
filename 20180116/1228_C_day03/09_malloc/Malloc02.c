// 문제) arr 배열안의 가장 큰 수를 찾아주는 함수를 만들어보세요.
// 문제) arr 배열안의 가장 작은 수를 찾아주는 함수를 만들어보세요.

#include <stdio.h>

void c_arr(int* p)
{
	p[0] = 100;
	p[1] = 200;
	p[2] = 300;
}

void max_arr(int*p, int arrSize)
{
	int i;
	int max = p[0];
	for(i = 0; i < arrSize; i++){
		if (max < p[i]) {max = p[i];}
	}
	printf("가장 큰 수 : %d \n", max);

}

void min_arr(int*p, int arrSize)
{
	int i;
	int min = p[0];
	for(i = 0; i < arrSize; i++){
		if (min > p[i]) {min = p[i];}
	}
	printf("가장 작은 수 : %d \n", min);

}

void main()
{
	int arr[3] = {30000, -100, 2};
	//c_arr(&arr[0]);
	printf("%d \n", arr[0]);

	printf("문제) arr 배열안의 가장 큰 수를 찾아주는 함수를 만들어보세요. \n");
	max_arr(&arr[0], sizeof(arr)/sizeof(int));

	printf("문제) arr 배열안의 가장 작은 수를 찾아주는 함수를 만들어보세요. \n");
	min_arr(&arr[0], sizeof(arr)/sizeof(int));
}