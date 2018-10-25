#include <stdio.h> // printf() , scanf()
#include <stdlib.h> // rand()
#include <time.h> // srand(time(0))
// 업다운게임
void main(){
	int comnum = 0;
	int mynum = 0;
	srand(time(0));
	comnum = rand() % 100; // 0~99 
	while(1){
		printf("치트 ==> %d\n" , comnum);
		printf("0~99사이의 숫자를 입력하세요 >>> ");
		//mynum = rand() % 100;
		scanf("%d" , &mynum);
		if (comnum < mynum){
			printf("comnum 이 작다\n");
		}
		else if(comnum > mynum){
			printf("comnum 이 크다\n");
		}
		else{
			printf("맞췄다\n");
			break;
		}}
	// 심화 )) mynum 을 ai 로 바꿔보세요. 
	// ex ) com == 50 ,  1회차 ) mynum == 30  2회차 (mynum > 30)  mynum ==> 70 , 3회차(mynum > 30 && my <70)
}