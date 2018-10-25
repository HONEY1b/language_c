#include <stdio.h>


void main()
{
	printf("15세");
	printf("홍길동");
	printf("call@naver.com");
	printf("010-1234-5455\n");

	// 이스케이프 문자 -> \n (new line)
	printf("15세\n");
	printf("홍길동\n");
	printf("call@naver.com\n");
	printf("010-1234-5455\n");

	//문제 1) 사칙연산 사용하여 출력
	printf("홍길동의 나이는 %d살이고 키는 %d cm 입니다.\n", 20, 170);
	// 10 + 2 = 12
	printf("%d + %d = %d \n",10, 2, 10+2);
	// 10 - 2 = 8
	printf("%d - %d = %d \n",10, 2, 10-2);
	// 10 * 2 = 20
	printf("%d * %d = %d \n",10, 2, 10*2);
	// 10 / 2 = 5
	printf("%d / %d = %d \n",10, 2, 10/2);
}
	
	