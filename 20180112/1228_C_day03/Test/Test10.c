// ����) �ε��� 3���� 8���� ������ ��ȯ�غ�����.
// ����) arr���� ������ �������.
// ����) ���� �߱� ���� \\\\\\\\\\\\\\\\

/*
	comnum[3] = {0~9 �߿� 3�� ���� �Է�}	ex 2, 1, 7 -> ���� �迭���� 3�� �Է¹ޱ�
	mynum[3] �Է� �ޱ�						ex 0, 1, 2
	���ڿ� �ڸ��� ������ -> ��Ʈ����ũ		ex 1��Ʈ����ũ, 1��
	���ڸ� ������ -> ��

*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *p1, int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}//end of swap


void main()
{
	// int size = 10;
	// int arr1[size]; : �Ҵ������ ������ ����� �� ����.(���� ����� ����)
	int arr[10] = {0};
	int a, b, rand_index;
	int i;
	srand(time(0));
	printf("arr ���� : %d \n", sizeof(arr)/sizeof(int));
	for(i = 0; i < sizeof(arr)/sizeof(int); i++) {arr[i] = i;}
	for(i = 0; i < sizeof(arr)/sizeof(int); i++) {printf("arr[%d] = %d \n", i, arr[i]);}

	printf("����) �ε��� 3���� 8���� ������ ��ȯ�غ�����. \n");
	swap(&arr[3], &arr[8]);
	for(i = 0; i < sizeof(arr)/sizeof(int); i++) {printf("arr[%d] = %d \n", i, arr[i]);}

	printf("����) arr���� ������ �������. \n");
	for(i = 0; i < 100; i++){
		a = rand() % 10;
		b = rand() % 10;
		swap(&arr[a], &arr[b]);
	/*
	rand_index = rand() % 10;
	swap(&arr[3], &arr[rand_index]);
	*/
	}
	for(i = 0; i < sizeof(arr)/sizeof(int); i++) {printf("arr[%d] = %d \n", i, arr[i]);}

}//end of main