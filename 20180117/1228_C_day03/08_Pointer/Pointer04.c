// 문제) 인덱스2인곳 주소를 p에 저장하고 , 값을 300으로 바꾸는 함수를 만드세요.

#include <stdio.h>
void abc(int *p){
	*p = 300;
}
void main(){
	// 변수 한개
	int arr[5] = {0};
	int i;
	int a =10;
	int* p;
	p = &a;
	// 인덱스가 0 인 곳의 주소를 p 에 저장하세요.
	p = &arr[0];
	*p = 100;
	// 인덱스가 3 인 곳의 주소를 p 에 저장하고 , 값을 200 으로 바꿔보세요.
	p = &arr[3];
	*p = 200;
	printf("문제) 인덱스2인곳 주소를 p에 저장하고 , 값을 300으로 바꾸는 함수를 만드세요. \n");
	abc(&arr[2]);

	for(i = 0; i < 5; i++){
		printf("%d\t" , arr[i]);
	}
	printf("\n");
}