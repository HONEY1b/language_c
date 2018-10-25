// 문제) 9~0 거꾸로 출력
// 문제) 10~20 사이의 값 출력
// 문제) 0~9 사이의 짝수만 출력
// 문제) 0~9 사이의 짝수만 출력
// 문제) 0~9 사이의 홀수만 출력
// 문제) 0~9 사이의 홀수를 다 더한 수를 출력
// 문제) 가위바위보 -> comnum -> (0~2)

#include<stdio.h>
#include <stdlib.h> //rand() : 난수 발생 함수 (랜덤값)
#include <time.h>

/*
	for문 (반복문)
	1. for		: 키워드
	2. (조건)	: 조건
	3. i = 0	: 초기식 : 딱 한번만 실행된다.
	4. i < 10	: 조건식 : 조건식
	5. i++		: 증감식 : (i++) -> (i = i +1) -> (i += 1)
	6. {실행문}	: 조건이 참(1)이면 실행된다.
*/

void main()
{
	int i;
	int sum = 0;
	int com_num, my_num;

	for(i = 0; i < 10; i++) // 초기식 : 0, 조건식 : 10 -> 조건식 정수만큼 반복
	{
		printf("나무를 찍자 \n"); // 조건식이 참이면 실행됨 -> 증감식 실행 -> 조건식 실행 -> 반복
	} // 조건식이 거짓이면 for문 종료

	printf("나무가 넘어간다~~~~ \n");

	printf("문제) 9~0 거꾸로 출력 \n");
	for(i = 9; i >= 0; i--)
		printf("%d \n", i);

	printf("문제) 10~20 사이의 값 출력 \n");
	for(i = 10; i < 21; i++)
		printf("%d \n", i);

	printf("문제) 0~9 사이의 짝수만 출력 \n");
	for(i = 0; i < 10; i++)
	{
		if (i % 2 == 0) {printf("%d \n", i);}
	}

	printf("문제) 0~9 사이의 홀수만 출력 \n");
	for(i = 0; i < 10; i++)
	{
		if (i % 2 == 1) 
		{
			sum = sum + i;
			printf("%d \n", i);
			
		}
	}
	printf("문제) 0~9 사이의 홀수를 다 더한 수를 출력\n");
	printf("%d \n", sum);

	printf("문제) 가위바위보 -> comnum -> (0~2) \n");

	srand(time(0)); // 랜덤 초기화 함수
	com_num = rand() % 3;

	printf("가위(0), 바위(1), 보(2) 중에서 하나를 골라주세요. : ");
	scanf("%d", &my_num);

	printf("com : %d, my : %d \n", com_num, my_num);
	
	if(my_num == com_num) {printf("draw \n");}
	else if((my_num == 0 && com_num == 1) || (my_num == 1 && com_num == 2) || (my_num == 2 && com_num == 0)) {printf("lose \n");}
	else if((my_num == 0 && com_num == 2) || (my_num == 1 && com_num == 0) || (my_num == 2 && com_num == 1)) {printf("win \n");}
	/*
	result = my_num - com_num;
	if(result == 1 || result == -2) printf("win \n");
	else if(result == 0) printf("draw \n");
	else printf("lose \n");
	
	*/

}