//문제1) 초를 입력받고 분 초로 출력하세요. (ex => 입력 :100 , 결과 : 1분 40초);
//문제2) 변수 abc 를 이용해서 a 와 b 의 값을 서로 교환해보세요. 결과 a = 20 , b = 10
#include <stdio.h>
void main()
{
	// 대입연산자 ->  =
	// 산술연산자 ->  + , - , * , / , % 
	//			(더하기, 빼기 , 곱하기 ,나누기(몫) ,나머지)
	int num1 = 3;  //나머지는 012
	int a = 10;
	int b = 20;
	int c = 0;
	int second;

	//printf("%d\n" , num1 + 10);
	//printf("%d\n" , num1 - 10);
	//printf("%d\n" , num1 * 10);
	//printf("%d\n" , num1 / 10);  // 나누기한 몫이 출력된다.
	//printf("나머지 : %d\n" , num1 % 0);  // 나누기는 0 으로 할수없다.
	printf("나머지 : %d\n" ,1% num1 );  // 나누기한 나머지가 출력된다.
	printf("나머지 : %d\n" ,2% num1 );  // 나누기한 나머지가 출력된다.
	printf("나머지 : %d\n" ,3% num1 );  // 나누기한 나머지가 출력된다.
	printf("나머지 : %d\n" ,4% num1 );  // 나누기한 나머지가 출력된다.
	printf("나머지 : %d\n" ,5% num1 );  // 나누기한 나머지가 출력된다.
	printf("나머지 : %d\n" ,6% num1 );  // 나누기한 나머지가 출력된다.
	printf("나머지 : %d\n" ,7% num1 );  // 나누기한 나머지가 출력된다.
	printf("나머지 : %d\n" ,1117% num1 );  // 나누기한 나머지가 출력된다.

	printf("문제1) 초를 입력받고 분 초로 출력하세요. (ex => 입력 :100 , 결과 : 1분 40초) \n");
	// 발생하는 실수들 : scanf("%d\n"
	//					 scanf("%d ,%d" , &a , &b);
	printf("초를 입력해주세요 : ");
	scanf("%d" , &second);
	printf("%d 초 -> %d 분 %d 초\n" , second , second/60, second%60);

	printf("문제2) 변수 abc 를 이용해서 a 와 b 의 값을 서로 교환해보세요. 결과 a = 20 , b = 10 \n");
	printf("a >>> %d ,b >>> %d\n" ,a,b);  
	c = a;
	a = b;
	b = c;
	printf("a >>> %d ,b >>> %d\n" ,a,b);  


}