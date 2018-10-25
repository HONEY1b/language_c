//변수활용
#include <stdio.h>
// 블로그나 카페에 복습
void main()
{
	int a;
	long b;
	long long c;
	int num1, num2; // 변수선언 -> , 를 사용해서 int를 생략할 수 있다.
	int n1 = 0, n2 = 0;
	a = 30;
	b = 3000000000;
	c = 30000000000000;
	printf("a >>> %d \n", a);
	printf("b >>> %lu \n", b);
	printf("c >>> %llu \n", c);
	
	num1 = 10;
	num2 = 2;
	printf ("%d + %d = %d \n", num1, num2, num1+num2);
	printf ("%d - %d = %d \n", num1, num2, num1-num2);
	printf ("%d * %d = %d \n", num1, num2, num1*num2);
	printf ("%d / %d = %d \n", num1, num2, num1/num2);

}