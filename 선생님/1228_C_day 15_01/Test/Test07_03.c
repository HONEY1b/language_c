#include <stdio.h>

//함수 정의 ==> 설계도
//함수 호출 ==> 사용
void test() // 정의
{
	printf("test 함수 호출!\n");
}
void line_deco(){
	printf("=========================\n");
}
void show_num(int num){
	printf("%d\n" , num);
}
void sum(int num1 , int num2){
	printf("%d + %d = %d\n" , num1 , num2 , num1 + num2);
}
int sum_return(int num1 ,int num2){
	int result = num1 + num2;
	return result;
}
void main()
{
	int a = 10;
	int b = 20;
	a = b;
	int total;
	printf("~~\n");
	test(); //호출
	line_deco();
	show_num(100);
	//문제 1) 100 + 200 함수를 만들어세요.
	sum(100, 200);
	//문제 2) (100 + 200) + 300  함수를 만들어보세요.
	total = sum_return(100, 200);
	//total = 
	total = sum_return(total , 300);
}