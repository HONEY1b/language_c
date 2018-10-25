#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define arr_size 10
void main(){
	int size = 10;
	//	int arr1[size]; // 할당받을때 변수를 사용할수 없다.(오직 상수만 가능)
	int arr1[arr_size];
	int arr[10] = {0};
	int i;
	int rand_index;
	int temp;
	srand(time(0));
	printf("arr 갯수 : %d\n" , sizeof(arr)/sizeof(int) ); // 40 / 4 = 10
	//arr_size = 20;
	for(i = 0; i < arr_size; i++){
	}
	for(i = 0; i < sizeof(arr)/sizeof(int); i++){
		arr[i] = i;
	}
	for(i  = 0; i < sizeof(arr)/sizeof(int); i++){
		printf("arr[%d] == %d \n" , i , arr[i]);
	}
	//문제 1) 인덱스 3번의 값 과 8번의 값 을 교환해보세요. (이걸여러번하면된다) 100번
	temp = arr[3];
	arr[3] = arr[rand_index];
	arr[rand_index] = temp;
	//문제 2) arr 안의 값들을 섞어보세요. 
	//	  예) 현재 0,1,2,3,4,5,6,7,8,9 ==> 섞은후 4,3,5,1,8,0,9,2,6,7
	// 숫 자 야 구 게임 ( com_num[3] = {2,1,7})
	//					 my_num[3] = {0,1,2}
	//   // 1스 , 1볼 

}