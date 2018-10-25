//문제) + , - , * , / 를 사용하고 출력해보자 (%d를 숫자에 다사용해보자)
//문제) 초를 입력받고 분 초로 출력하세요. (ex => 입력 :100 , 결과 : 1분 40초);
//문제) 변수 abc 를 이용해서 a 와 b 의 값을 서로 교환해보세요. 결과 a = 20 , b = 10
//문제) 숫자 3개를 입력받고 총합과 평균을 출력해보세요.

#include <stdio.h>

void main(){	
	int second;
	int a,b,c;
	int num1,num2,num3;
	int total , avr;
	printf("문제) + , - , * , / 를 사용하고 출력해보자 (%d를 숫자에 다사용해보자) \n");
	//예) 20 + 2 = 22 
	printf("%d + %d = %d\n" , 10,20,10+20); 
	printf("%d - %d = %d\n" , 10 ,20 ,10-20);
	printf("홍길동의 나이는  %d 살이고 키는 %d cm 입니다 \n" , 20, 170);	
	
	printf("문제) 초를 입력받고 분 초로 출력하세요. (ex => 입력 :100 , 결과 : 1분 40초) \n");
	// scanf("%d\n"
	// scanf("%d ,%d" , &a , &b);
	printf("초를 입력해주세요 >>> ");
	scanf("%d" , &second);
	printf("%d 초 -> %d 분 %d 초\n" , second , second/60, second%60);

	printf("문제) 변수 abc 를 이용해서 a 와 b 의 값을 서로 교환해보세요. 결과 a = 20 , b = 10 \n");
	// 힌트 ) 파란색컵에 커피 랑 노란색컵에 우유를 교환해보세요. 빈컵
	a = 10; // 커피
	b = 20; // 우유
	c = 0;  // 빈컵
	printf("a : %d ,b : %d\n" ,a,b);  
	c = a;
	a = b;
	b = c;
	printf("a : %d ,b : %d\n" ,a,b);  
	
	printf("문제) 숫자 3개를 입력받고 총합과 평균을 출력해보세요. \n");
	printf("숫자 3개 를 입력해주세요 : ");
	scanf("%d %d %d",&num1 ,&num2, &num3); 
	total = num1 + num2 + num3;
	avr = total/3;
	printf("numbers : %d ,%d, %d , total : %d , avrage : %d\n",num1,num2,num3,total,avr);	
}
