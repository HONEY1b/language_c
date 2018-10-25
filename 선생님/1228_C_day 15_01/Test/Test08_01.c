#include <stdio.h>
void line_deco(){
	printf("=========================\n");
}
void print_num(int num)
{
	printf("%d\n" , num);
}
void print_sum(int num1 ,int num2){
	//printf("%d + %d = %d\n" , num1 ,num2 ,num1+ num2);
}
int return_sum(int num1 , int num2){
	return num1 + num2;
}
int swap_num(int num1 , int num2){ // 함수의 문제점 ==> 리턴값이 1개밖에 안된다.
	int temp;
	temp = num1;
	num1 =num2;
	num2 = temp;
	return num1;
	return num2;
}
void main(){
	//line_deco();
	//print_num(100);
	int total;
	int num1 , num2;
	num1 = 100;
	num2 = 200;
	//print_sum(100,200);
	//return_sum(100,200);
	//total = print_sum(100,200);
	//total = return_sum(100,200);
	printf("%d ,%d \n" , num1 ,num2); // 100 , 200
	swap_num(num1 ,num2);
	printf("%d ,%d \n" , num1 ,num2); // 100 , 200 ==> 200 , 100
}