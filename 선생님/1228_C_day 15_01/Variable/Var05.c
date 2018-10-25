#include <stdio.h>
void main(){
	int a;  // 정수 ==> 소수점이 없는수 (int , long)
	int num2 , num1;
	double b; // 실수 ==> 소수점이 있는수(float , double)
	double total;
	double avr;
	// 정수 와 실수의 연산의 문제점
	// 서로 다른 자료형끼리는 연산을 할수가없다.
	// 그래서 자료형을 변환해야되는데 형변환이라고 한다.
	// 1) 자동형변환 : 저절로 바뀐다. (실수와 정수를 연산하면 정수가 자동으로 실수로 변환된다)
	// 2) 강제형변환 : (바꾸고싶은자료형)변수
	num1 = 20;
	num2 = 17;
	total = num1 + num2;  // 자동형변환  //변환시점 =
	printf("total >>> %lf\n" , total);
	total = num1 + (double)num2; // 강제형변환  // 변환시점 + 
	avr = total/2;
	printf("avr = %.10lf\n" , avr);
	printf("avr = %.3lf\n" , avr);
	printf("avr = %lf\n" , avr);
}