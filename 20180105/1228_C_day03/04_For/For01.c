// 문제) coin 을 던져서 앞(0), 뒤(1)를 출력하세요.
// 보너스 문제) 0~8 -> 1~9 가 나오도록 바꿔보세요.

#include <stdio.h>
#include <stdlib.h> //rand() : 난수 발생 함수 (랜덤값)
#include <time.h>

void main()
{
	int a;
	int money = 400;
	int coin = 0;
	int mynum = 0;

	srand(time(0)); // 랜덤 초기화 함수
	a = rand();
	printf("%d \n", a); // 처음한번만 랜덤이 적용되고, 계속 같은 수가 나온다.

	a = rand() % 2; // 값을 제한 할 수 있다. 이 경우 0~1 이 저장된다.
	printf("%d \n", a);

	a = rand() %10; // 0~9
	printf("%d \n", a);

	printf("보너스 문제) 0~9 -> 1~9 가 나오도록 바꿔보세요. \n");
	
	a = rand() %9 + 1; // 0~9
	printf("%d \n", a);

	printf("문제) coin 을 던져서 앞(0), 뒤(1)를 출력하세요. \n");
	// 조건) 앞뒤를 맞춰서 맞추면 money +100, 틀리면 money -100 을 출력해보세요.
	// 내가 추가한 것 : 돈이 0이 될때까지 반복 (while)
	while(money > 0){
		printf("guess 0 or 1 : ");
		scanf("%d", &mynum);
		coin = rand() %2;
		if (coin == 0) {printf("앞 \n");}
		else if (coin == 1) {printf("뒤 \n");}

		if(mynum == coin) { 
			money = money + 100;
			printf("correct! \n current money : %d \n", money);
		}
		else { 
			money = money - 100;
			printf("incorrect! \n current money : %d \n", money);
		}
	}






} //end of main