#include <stdio.h>
#define NULL1 0
void swap_pointer(int*    p1 , int*   p2){
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
void swap_num(int num1 , int num2){
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}
void main(){
	int	num1 = 10; int	num2 = 20; int*  p1 = 0; int*  p2 = NULL; int*	p3 = NULL1; int	temp = 0;
	// NULL1 = 20; 디파인문은 변수가 아니다.
	printf("%d , %d \n" , num1 , num2); // 10 , 20
	swap_num(num1 ,num2);
	//swap_pointer(&num1 , &num2);
	printf("%d , %d \n" , num1 , num2); // 20 , 10

	p1 = &num1;
	p2 = &num2;

	swap_pointer(p1, p2);
	printf("%d , %d \n" , num1 , num2);
}
