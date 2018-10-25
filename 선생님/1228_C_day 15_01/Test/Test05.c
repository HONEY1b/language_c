#include <stdio.h>
//심화문제)  화폐매수를 구해보세요 
// ex) 입력 >>> 65700 ,  5만원 >>1 , 1만원 >>1 ,
//						 5천원 >>1 , 1천원 >>0 , 5백원 >>1 , 1백원 >>2
void main(){
	// 문제 1)  성적(0~99) 3개를 입력받고 평균이 90~99 면 "A" 출력 80~89 ==> "B"
	//        이하 ==> "재시험" 출력해보세요.
	int score1 ,score2 ,score3; int total; int avr;
	score1 = 100;
	score2 = 90;
	score3 = 80;
	total = score1 + score2 + score3;
	avr = total/3;
	if(avr >= 90 && avr <=99){printf("A\n");}	
	if(avr >= 80 && avr < 90){printf("B\n");}
	else {printf("재시험\n");}
	if(avr >= 90 && avr <=99){printf("A\n");}	
	else if(avr >= 80 && avr < 90){printf("B\n");}
	else {printf("재시험\n");}

	// else if () {}  ==> 단독으로 쓰일수가 없다. (if 가 필요하다)
	// else			  ==> 단독으로 쓰일수가 없다. (if 가 필요하다)
	// if(){}else if(){} else {} // 한개의 식 ==>3개의 조건중 1개 조건의 실행문만 실행된다 

	// 문제 2)  96~99 사이면 A+ , 93~90 사이면 A- 를 출력해보세요.
	// 복습문제 1) 0~10까지 출력해보세요(for문 사용)
	//         2) 0~10사이중 짝수만 출력 and 홀수만 다 더한값 출력	
	// 복습문제 3) 일 을 입력받고 개월 일로 출력 (단 무조건 30일이 1개월)
	// ex ) 입력 : 100 ==>  3개월 10일 

}