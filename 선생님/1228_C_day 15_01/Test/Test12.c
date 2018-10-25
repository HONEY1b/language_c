#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
	int me;int ai;int total = 0;int nums[10] ={0};int i;
	srand(time(0));
	////조건) 한번고른숫자는 다시 고를수없다.(me , ai)둘다.
	for(i =0 ; i <10; i++){	
		ai = rand() % 10;
		printf("%d\n" , ai);
	}	
	//for(i =0; i< 10; i++){
	//	nums[i] = i + 1 ;
	//}
	////문제 1) 1 ~ 10 사이의 숫자를 me , ai 와 서로 숫자를 하나씩 번갈아가면서 선택한다.
	////조건) me 는 scanf , ai 는 랜덤사용
	////조건) 숫자를 계속 누적시켜서 50을 먼저넘기는 쪽이 승리	
	//while(1){
	//	printf("total : %d\n" , total);
	//	for(i = 0; i < 10; i++){			
	//		if(nums[i] == 99){
	//			printf(" \t"); }
	//		else{
	//			printf("%d\t" , nums[i]);
	//		}
	//	}
	//	printf("\n");
	//	printf("숫자를 입력하세요 >>> ");
	//	scanf("%d" , &me);
	//	total += me;
	//	nums[me-1] = 99;		
	//}
}