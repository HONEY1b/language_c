#include <stdio.h>
// 인자를 저장하는 변수를 "매개변수"(parameter) 라고 한다
void print_even(int num){
	if(num % 2 == 0){printf("짝수\n");}
	else{printf("홀수\n");}
}
void print_negative(int num){
	if(num >=0){printf("양수\n");}
	else{printf("음수\n");}
}
void main(){
	//문제 1) 숫자하나를 인자로 사용해서 짝수 홀수 인지 알려주는 함수를 만들어보세요
	// 함수호출시 () 안에 집어넣는 값을 " 인자"(argument) 라고 한다.
	print_even(10); 
	//문제 2) 숫자하나를 인자로 사용해서 음수 양수 인지 알려주는 함수를 만들어보세요
	print_negative(-100); 
}
