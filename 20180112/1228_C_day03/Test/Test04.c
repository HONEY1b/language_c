// 문제) 점수 0~99 까지 3개를 입력받고 총합과 평균을 구한다음 평균이 60 넘으면 합격 미만이면 불합격
// 문제) 9~0 거꾸로 출력
// 문제) 10~20 사이의 값 출력
// 문제) 0~9 사이의 홀수만 출력
// 문제) 0~9 사이의 홀수를 다 더한 수를 출력
// 문제) 베스킨 라빈스 31
/*
		int br31 = 0;
		int myNum = 0;
		int ai = 0;
		1~3 사이의 값을 입력받고, br31 값을 해당숫자만큼 증가시킨다.
		ai도 랜덤으로 1~3을 입력받고, br31 값을 누적해서 증가시킨다.
		myNum 과 ai 가 반복해서 br31을 증가시켜서 31을 먼저 넘는 쪽이 패배 출력
*/
#include<stdio.h>
#include<stdlib.h> //rand() : 난수 발생 함수 (랜덤값)
#include<time.h>

void main()
{
	int a, b, c, total;
	double avr;
	int i, sum = 0;
	int br31 = 0, myNum = 0, ai = 0;

	printf("문제) 점수 0~99 까지 3개를 입력받고 총합과 평균을 구한다음 평균이 60 넘으면 합격 미만이면 불합격 \n");
	printf("type your score : ");
	scanf("%d %d %d", &a, &b, &c);

	total = a + b + c;
	avr = total / 3;
	if ((a <= 99) && (b <= 99) && (c <= 99)){
		if((a >= 60) && (b >= 60) && (c >= 60))
		{
			if(avr >= 60) {printf("합격 \n");}
			else {printf("불합격 \n");}
		}
	}

	printf("문제) 9~0 거꾸로 출력 \n");
	for(i = 9; i >= 0; i--) {printf("%d \n", i);}

	printf("문제) 10~20 사이의 값 출력 \n");
	for(i = 10; i <= 20; i++) {printf("%d \n", i);}

	printf("문제) 0~9 사이의 홀수만 출력 \n");
	for(i = 0; i < 10; i++)
	{
		if(i % 2 == 1)
		{
			sum = sum + i;
			printf("%d \n", i);
		}
	}

	printf("문제) 0~9 사이의 홀수를 다 더한 수를 출력 \n");
	printf("%d \n", sum);

	printf("문제) 베스킨 라빈스 31 \n");
	/*
		int br31 = 0;
		int myNum = 0;
		int ai = 0;
		1~3 사이의 값을 입력받고, br31 값을 해당숫자만큼 증가시킨다.
		ai도 랜덤으로 1~3을 입력받고, br31 값을 누적해서 증가시킨다.
		myNum 과 ai 가 반복해서 br31을 증가시켜서 31을 먼저 넘는 쪽이 패배 출력
	*/

	for(br31 = 0; br31 < 31;) //증감식 필수 아님
	{
		printf("1~3사이의 숫자를 입력하시오 \n");
		scanf("%d", &myNum);
		br31 = br31 + myNum;
		if(br31 < 31)
		{
			srand(time(0));
			ai = rand() % 3 +1;
			printf("ai의 숫자 : %d \n", ai);
			br31 = br31 + ai;
			if (br31 >= 31) {printf("win \n");}
		}
		else {printf("lose \n");}
		printf("br31 : %d \n", br31);
	}
} // end of main