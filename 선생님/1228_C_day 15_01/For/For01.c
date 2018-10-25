#include <stdio.h>
#include <stdlib.h> // rand() : 난수 발생 함수 (랜덤값)
#include <time.h>
void main()
{
	int a;
	int money = 400;
	int coin = 0;
	int mynum = 0;
	srand(time(0)); // 랜덤 초기화 함수
	a = rand();
	printf("%d\n" , a);  // 처음한번만 랜덤이 적용되고 계속 같은수가 나온다.
	a = rand() % 2; // 0~1 이 저장된다.
	printf("%d\n" , a); 
	a = rand() % 9; // 0~8
	printf("%d\n" , a); 
	a = rand() % 8 + 1;
	printf("%d\n" , a);
	// 문제 ) coin 을 던져서 앞(0) , 뒤(1) 를 출력하세요
	// 조건 ) 앞뒤를 맞춰서 맞추면 money + 100 , 지면 money -100 출력해보세요. 
	coin = rand()%2;
	if(coin == 1){printf("코인 >>> 앞\n");}
	if(coin == 0){printf("코인 >>> 뒤\n");}
	printf("앞(0), 뒤(1)를 맞춰보세요 >>> ");
	scanf("%d" , &mynum);
	if(mynum == coin){
		money = money + 100;}
	if(mynum != coin){
		money = money -100;}
	printf("money >>> %d\n" , money);
	// 보너스문제) 0~8 ==>  1~8 이나오도록 바꿔보세요.
	// 문제점) 반복...
}