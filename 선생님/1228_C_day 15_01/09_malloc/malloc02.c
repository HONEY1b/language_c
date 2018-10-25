#include <stdio.h>
// 1. 변수 2. 연산자 3. if 4. for 5. array 6. function 7. pointer 8. array의 사이즈
void c_arr(int* p){
	p[0] = 100;
	p[1] = 200;
	p[2] = 300;
}
void max_arr() {}
void min_arr(int*p , int arrSize) {
	int min = p[0];
	int i;
	for (i = 0; i < arrSize; i++){
		if(p[i] < min){
			min = p[i];
		}
	}
	printf("가장작은수 >>> %d\n" , min);
}
void main(){
	int arr[5] = {100, -10 , 3000, -20000 , -300002};
	int max; int i;
	//c_arr(&arr[0]);
	printf("%d\n" , arr[0]);
	//문제 2) arr 배열안의 가장 작은수를 찾아주는 함수를 만들어보세요.
	min_arr(&arr[0] , sizeof(arr)/sizeof(int));	
	//문제 1) arr 배열안의 가장 큰수를 찾아주는 함수를 만들어보세요.
	max = arr[0];
	for(i = 0; max < 5; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
}