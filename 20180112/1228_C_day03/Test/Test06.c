// 문제) 숫자 2개를 입력받고, 몫과 나머지를 출력해보세요.
// 조건 : 만약 둘중하나라도 0이라면 예외를 출력하세요.
// %d %% %d = %d
// 문제) 0~10까지 중에서 3의 배수만 출력해보세요.
// 문제) 0~50까지 중에서 3, 6, 9가 하나만 들어가면 "짝!" 두개들어가면
//						  3, 6, 9가 두개가 들어가면 "짝짝!!"을 출력해보세요. 

#include<stdio.h>

void main()
{
	int a, b;

	printf("문제) 숫자 2개를 입력받고, 몫과 나머지를 출력해보세요. \n");
	printf("type two numbers : ");
	scanf("%d %d", &a, &b);

	if(a == 0 || b == 0) printf("0으로 나눌 수 없습니다. \n");
	else printf("%d / %d = %d, %d %% %d = %d \n", a, b, a/b, a, b, a%b);

	printf("문제) 0~10까지 중에서 3의 배수만 출력해보세요. \n");
	for(a = 0; a < 10; a ++)
		if (a%3 == 0 && a != 0) printf("%d \n", a);

	printf("문제) 0~50으로 3, 6, 9게임을 만들어보세요. \n");
	for(a = 0; a <= 50; a++) {
		if(a >= 30 && a <= 39) {
			if(a % 3 == 0) printf("짝짝!! \n");
			else printf("짝 \n");
		}
		else if(a % 10 == 3) printf("짝 \n");
		else if(a % 10 == 6) printf("짝 \n");
		else if(a % 10 == 9) printf("짝 \n");
		else printf("%d \n", a);
	}

}