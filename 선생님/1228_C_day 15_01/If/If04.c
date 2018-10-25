#include <stdio.h>
void main(){
	int temperature;
	printf("온도를 입력하세요 >>> ");
	scanf("%d" , &temperature);
	if(temperature >100){
		printf("기체\n");
	}
	else if(temperature <= 100 && temperature > 50) // 추가조건
	{
		printf("따뜻한물\n");
	}
	else if(temperature <=50 && temperature > 0)  // 추가 조건
	{
		printf("미지근한물\n");
	}
	else {  // 위의 조건이 전부 거짓일때 
		printf("얼음\n");
	}
	//문제 1) 정수한개를 입력받고 짝수홀수양수음수 출력
	//문제 2) 정수 2개를 입력받고 ??가 ?? 보다 크다 작다를 출력 
	//문제 3) 정수 2개를 입력받고 나눈 "몫" 과 "나머지" 를 출력 
	//        만약에 둘중 하나라도 0 이면 "0으로 나눌수없다" 출력
	//문제 심화) 지하철요금이 얼마인지 계산보자.
	//[규칙] 기본 : 1~5정거장 ==> 600원
	//		 기본 : 6~10정거장==> 700원
	//       추가요금 : 10정거장이후 2정거장 추가할때마다 50원 추가 
	// ex) 13 ==> 800원 ,  8 ==> 700원

}