#include <stdio.h>
// 1. ���� 2. ������ 3. if 4. for 5. array 6. function 7. pointer 8. array�� ������
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
	printf("���������� >>> %d\n" , min);
}
void main(){
	int arr[5] = {100, -10 , 3000, -20000 , -300002};
	int max; int i;
	//c_arr(&arr[0]);
	printf("%d\n" , arr[0]);
	//���� 2) arr �迭���� ���� �������� ã���ִ� �Լ��� ��������.
	min_arr(&arr[0] , sizeof(arr)/sizeof(int));	
	//���� 1) arr �迭���� ���� ū���� ã���ִ� �Լ��� ��������.
	max = arr[0];
	for(i = 0; max < 5; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
}