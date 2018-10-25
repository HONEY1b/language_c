#include<stdio.h>
// 일반 변수 표현 -> int a;		a-> 값, &a -> 주소 //*a; -> 일반 변수는 불가능
// 포인터 변수 표현 -> int* p;	p-> 값, *p -> 가리키는 곳의 값, &p -> 주소

void main()
{
	int		a = 100;
	int*	p = 0; // 화살표라 생각
	int b = 200;

	b = a;
	p = &a;
	
	printf("%d \n",p);
	printf("%d \n",&a);
	printf("%d \n",a);
	printf("%d \n",*p);

	*p = 200; // p가 가리키는 곳(a)의 값을 200으로 바꿈

	printf("%d \n",p);
	printf("%d \n",&a);
	printf("%d \n",a);
	printf("%d \n",*p);

}