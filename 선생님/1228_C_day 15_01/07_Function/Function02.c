#include <stdio.h>
void line_deco(); // 함수전방선언
void lines_deco(int count);
void sum(int num1 , int num2);
void main(){
	//printf("출력할내용\n");
	//line_deco();
	sum(10,2);
	//line_deco();
	//lines_deco(10);
	//문제 1) 빼기 곱하기 나누기 나머지 함수도 만들어보세요.
	//응용문제 ) line_deco() 함수에 숫자를 넣으면 숫자만큼 라인을 그려주는 함수로 바꿔보자.
	//ex) line_deco(3);
	// printf("============================\n");
	// printf("============================\n");
	// printf("============================\n");	
	// 함수는 기본적으로 main() 함수 위에 있어야된다. 
}
void line_deco(){
	printf("============================\n");
}
void lines_deco(int count){
	int i;
	for( i =0; i < count; i++)
	{printf("============================\n");}
}
void sum(int num1 ,int num2){
	lines_deco(2);
	printf("%d + %d = %d\n" , num1 , num2 , num1 + num2);
	printf("%d %% %d = %d\n" , num1 , num2 , num1 % num2);
	line_deco();
}