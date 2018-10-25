#include < stdio.h>

void main(){
	int a;
	long b;
	long long c;
	int num1 , num2 ;  // 변수선언 ==> , 를사용해서 int 를 생략할수있다.
	a = 30;
	a = 2000000000;
	a = 3000000000;
	b = 3000000000;
	c = 3000000000;
	printf("a >>> %d\n" , a);
	printf("b >>> %lu\n" , b);
	printf("c >>> %llu\n" , c);
	num1 = 10;
	num2 = 2;
	printf("%d + %d = %d\n" , num1 , num2 , num1 + num2);
	// 빼기 곱하기 나누기 연습
	// 문제 1) 정수 2개를 입력받고 평균을 출력해보세요.
	// 문제 2) 월급을 입력받고 연봉을 출력해보세요.


}
