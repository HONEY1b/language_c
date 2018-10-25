#include <stdio.h>
// 일반변수 표현 ==> int a;   a ==>값 , &a ==>주소
// 포인터변수 표현 ==>int* p; p ==>값 , *p ==> 가리키는곳의 값 , &p ==>주소
void main(){
	int     a = 100;
	int*    p = 0;  // ->
	int		b;
	b = a;
	p = &a;

	printf("%d\n" , p);
	printf("%d\n" , &a);
	printf("%d\n" , a);
	printf("%d\n" , *p);

	*p = 200;

	printf("%d\n" , p);
	printf("%d\n" , &a);
	printf("%d\n" , a);
	printf("%d\n" , *p);

}