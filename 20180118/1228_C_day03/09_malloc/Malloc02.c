// ����) arr �迭���� ���� ū ���� ã���ִ� �Լ��� ��������.
// ����) arr �迭���� ���� ���� ���� ã���ִ� �Լ��� ��������.

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
	printf("���� ū �� : %d \n", max);

}

void min_arr(int*p, int arrSize)
{
	int i;
	int min = p[0];
	for(i = 0; i < arrSize; i++){
		if (min > p[i]) {min = p[i];}
	}
	printf("���� ���� �� : %d \n", min);

}

void main()
{
	int arr[3] = {30000, -100, 2};
	//c_arr(&arr[0]);
	printf("%d \n", arr[0]);

	printf("����) arr �迭���� ���� ū ���� ã���ִ� �Լ��� ��������. \n");
	max_arr(&arr[0], sizeof(arr)/sizeof(int));

	printf("����) arr �迭���� ���� ���� ���� ã���ִ� �Լ��� ��������. \n");
	min_arr(&arr[0], sizeof(arr)/sizeof(int));
}