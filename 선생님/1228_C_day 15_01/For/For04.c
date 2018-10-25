#include <stdio.h>

//보조 제어문 >>> break >> 반복문을 즉시 종료시킨다.
void main(){
	int i;
	for (i = 0; i < 10; i++){
		if(i == 5)
		{
		//	printf("%d\n" , i);
		}
		//printf("반복문\n");
	}
	// 문제 1) i 가 5일때만 출력해보세요.
	for (i = 0; i < 1000; i++){
		if(i == 5){
			printf("%d\n" , i);
			break;
		}
		printf("반복문\n");
	}
	// 문제 심화) 업다운게임 comnum 은 0~99 사이의 값을 랜덤으로 가진다.
	// mynum 에 0~99 사이의 값을 입력받으면 comnum 보다 크다 작다 같다 를 출력 (같다가 나올때까지반복)
}