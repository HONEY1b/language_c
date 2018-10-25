// 문제) 구구단 2단을 출력해보세요.
// 문제) 값이 6일 때와 8일 때를 제외하고 출력
// 문제) while문과 for문을 사용해서 구구단 전체를 출력해보세요.

#include<stdio.h>

/*
	1. while -> 키워드
	2. (조건) -> 조건이 참이면 {실행문 실행}
	3. {실행문}

*/

// 1 -> 참, 0 -> 거짓
// 보조제어문 : break -> 반복문을 즉시 종료시킨다.
// 보조제어문 : continue -> 반복문의 조건으로 바로 이동한다. 즉, continue 아래있는 실행문들을 무시한다.

void main()
{
	int num1 = 0;
	int a, b;
	while(1) // 무한반복
	{
		printf("반복 \n");
		num1 += 1; // num1++; // num1 = num1 + 1;
		if(num1 >= 10){
			break;
		}
	}

	printf("문제) 구구단 2단을 출력해보세요. \n");
	a = 2; b = 1;
	while(1)
	{
		if(b>9) break;
		printf("%d * %d = %d \n", a, b, a*b);
		b++;
	}

	/*
	while(1)
	{
		b += 1;
		printf("%d * %d = %d \n", a, b, a*b);
		if(b >= 9) {break;}
	}
	*/

	printf("문제) 값이 6일 때와 8일 때를 제외하고 출력 \n");
	b = 1;

	while(1)
	{
		if(b>9) break;
		else if((a * b != 6) && (a * b != 8)) 
		{
			printf("%d * %d = %d \n", a, b, a*b);
		}
		b++;
	}
	
	/*
		while(1)
		{
			b += 1;
			if((a * b == 6) || (a * b == 6)) {continue;}
			printf("%d * %d = %d \n", a, b, a*b);
			if(b >= 9) {break;}
		}
	
	*/

	printf("문제) while문과 for문을 사용해서 구구단 전체를 출력해보세요. \n");
	a = 2; b = 1;

	while(1)
	{
		for(b = 1; b <10; b++)
		{
			printf("%d * %d = %d \n", a, b, a*b);
		}
		a++;
		if(a>9) break;
	}


} // end of main