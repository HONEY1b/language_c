#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define arr_size 10
void main(){
	int size = 10;
	//	int arr1[size]; // �Ҵ������ ������ ����Ҽ� ����.(���� ����� ����)
	int arr1[arr_size];
	int arr[10] = {0};
	int i;
	int rand_index;
	int temp;
	srand(time(0));
	printf("arr ���� : %d\n" , sizeof(arr)/sizeof(int) ); // 40 / 4 = 10
	//arr_size = 20;
	for(i = 0; i < arr_size; i++){
	}
	for(i = 0; i < sizeof(arr)/sizeof(int); i++){
		arr[i] = i;
	}
	for(i  = 0; i < sizeof(arr)/sizeof(int); i++){
		printf("arr[%d] == %d \n" , i , arr[i]);
	}
	//���� 1) �ε��� 3���� �� �� 8���� �� �� ��ȯ�غ�����. (�̰ɿ������ϸ�ȴ�) 100��
	temp = arr[3];
	arr[3] = arr[rand_index];
	arr[rand_index] = temp;
	//���� 2) arr ���� ������ �������. 
	//	  ��) ���� 0,1,2,3,4,5,6,7,8,9 ==> ������ 4,3,5,1,8,0,9,2,6,7
	// �� �� �� �� ���� ( com_num[3] = {2,1,7})
	//					 my_num[3] = {0,1,2}
	//   // 1�� , 1�� 

}