//나머지 활용문제
#include <stdio.h>

void main()
{
	// 문제 1) 초를 입력받고 분 초로 출력하세요
	// 문제 2) 변수 abc를 이용해서 a와 b의 값을 교환하세요


	int sec = 0, minute = 0;
	int a = 20, b = 30, c = 0;

	// 문제 1) 초를 입력받고 분 초로 출력하세요

	printf("초 입력 : ");
	scanf("%d", &sec);

	printf ("%d 분 %d 초 \n", sec/60, sec%60);

	// 문제 2) 변수 abc를 이용해서 a와 b의 값을 교환하세요
	printf("교환 전 -> a : %d, b : %d \n", a, b);
	c = a;
	a = b;
	b = c;
	printf("교환 후 -> a : %d, b : %d \n", a, b);
}