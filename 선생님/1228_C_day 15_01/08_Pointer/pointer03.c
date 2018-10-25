#include <stdio.h>
// 일반변수 표현 ==> int a;   a ==>값 , &a ==>주소
// 포인터변수 표현 ==>int* p; p ==>값 , *p ==> 가리키는곳의 값 , &p ==>주소
void test(int *p  , int *p2){
	int temp;
	temp = *p;
	*p = *p2;
	*p2 = temp;
}
void main(){
	int     num1 = 100;
	int*    p1 = 0; 
	int		num2 = 200;
	int*	p2 = 0;
	int temp;
	p1 = &num1;
	p2 = &num2;
	temp = num1;
	num1 = num2;
	num2 = temp;
	//문제 1) p1 , p2 로 해결해보세요.
	printf("num1 >>> %d\n" ,num1);  // 100
	printf("num2 >>> %d\n" ,num2);  // 200
	//심화 문제 2) 함수로 num1 num2 값을 교환해보세요.
	test(&num1 , &num2);
}