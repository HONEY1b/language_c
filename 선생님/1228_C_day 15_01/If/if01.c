#include <stdio.h>
void main(){
	// 대입연산자( a = b ) >>> b 의값을 a 에 복사저장한다.
	// 산술연산자( + - * / %)
	// 비교연산자( 참이면 1 , 거짓이면 0)
	// 1.  a == b  >>> a 와 b 가 같다
	// 2.  a != b  >>> a 와 b 가 다르다.
	// 3.  a <  b  >>> a 가 b 보다 작다.
	// 4.  a >  b  >>> a 가 b 보다 크다.
	// 5.  a >= b  >>> a 가 b 보다 크거나 같다.
	// 6.  a <= b  >>> a 가 b 보다 작거나 같다.
	// 문제) 전부 1이나오도록 a와 b 값을 바꿔보세요.
	int a;
	int b;
	int result;
	a = 10;
	b = 10;
	result = (a == b);
	printf("%d\n" , result);
	a = 10;
	b = 20;
	result = (a != b);
	printf("%d\n" , result);
	a = 10;
	b = 20;
	result = (a < b);
	printf("%d\n" , result);
	a = 100;
	b = 20;
	result = (a > b);
	printf("%d\n" , result);
}