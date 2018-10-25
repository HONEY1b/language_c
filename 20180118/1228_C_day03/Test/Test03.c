// 문제) 숫자 3개를 입력받고, 총합과 평균을 출력해보세요.
// 문제) 숫자 하나를 입력받고, "양수", "음수"를 출력해보세요.
// 문제) 숫자 하나를 입력받고, "홀수", "짝수"를 출력해보세요.
// 문제) 점수 0~99 까지 3개를 입력받고 총합과 평균을 구한다음 평균이 60 넘으면 합격 미만이면 불합격
// 문제) (조건) 한과목이라도 60미만이면 불합격 (70 70 59)==> 불합격
// 문제) 가위바위보 게임

#include<stdio.h>

void main()
{
	
	int num1;
	int a, b, c, total; 
	double avr;
	int com_num, my_num;

	printf("문제) 숫자 3개를 입력받고, 총합과 평균을 출력해보세요. \n");
	printf("type three numbers : ");
	scanf("%d %d %d", &a,&b,&c);

	total = a + b + c;
	avr = total/3;

	printf("total : %d, avrage : %.1lf \n", total, avr);

	printf("문제) 숫자 하나를 입력받고, 양수, 음수를 출력해보세요. \n");
	printf("type the number : ");
	scanf("%d", &num1);

	if (num1 > 0){printf("양수 \n");}
	else {printf("음수 \n");}

	printf("문제) 숫자 하나를 입력받고, 홀수, 짝수를 출력해보세요. \n");
	if (num1%2 == 0) {printf("짝수 \n");}
	else {printf("홀수 \n");}

	printf("점수 0~99 까지 3개를 입력받고 총합과 평균을 구한다음 평균이 60 넘으면 합격 미만이면 불합격 \n");
	printf("type your three scores : ");
	scanf("%d %d %d", &a,&b,&c);

	total = a + b + c;
	avr = total/3;

	if((a >= 60)&&(b >= 60)&&(c >= 60))
	{
		if(avr >= 60) {printf("합격 \n");}
		else {printf("불합격 \n");}
	}//1번 if
	else {printf("불합격 \n");}
	
	printf("문제) 가위바위보게임 \n");
	// 조건1) com_num은 항상 바위(1) 입니다.
	// com_num 과 my_num을 비교해서 승패를 출력해주세요.

	com_num = 1;

	printf("가위(0), 바위(1), 보(2) 중에서 하나를 골라주세요. : ");
	scanf("%d", &my_num);

	if(my_num > com_num) {printf("win \n");}
	else if(my_num = com_num) {printf("draw \n");}
	else if(my_num < com_num) {printf("lose \n");}
}