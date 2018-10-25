#include <stdio.h>
// 1 . while ==>  키워드
// 2 . (조건)==>  조건이 참이면 {실행문 실행}
// 3 . {실행문}
// 1 ==> 참  , 0 ==> 거짓 
// 보조제어문 : break ==> 반복문을 즉시 종료시킨다.
// 보조제어문 : continue ==> 반복문의 조건으로 바로 이동한다. 즉, continue 아래있는 실행문들을 무시한다.
void main(){
	int num1 = 0;
	int dan = 2;
	while(1){ // 무한반복 
		printf("반복\n");
		num1 += 1; // num++; // num1 = num1 + 1;
		if(num1 >= 10){
			break;}}
	num1 = 0;
	while(1){ 
		num1 += 1;
		printf("%d * %d = %d\n" , dan , num1 , dan * num1);
		if(num1 >= 9){break;}}
	// 문제 2)  // 값이 6 일때랑 8일 때를 제외하고 출력~~
	num1 = 0;
	while(1){ 
		num1 += 1;
		if(dan * num1 == 6 || dan * num1 == 8) {continue;} // or ==> a||b : a가 참이거나 b가 참이면 참
		printf("%d * %d = %d\n" , dan , num1 , dan * num1);
		if(num1 >= 9){break;}
	}
	// 심화문제 ) for문을 사용해서 9단 전체를 출력해보세요. 2~9
	//문제 1) 구구단 2 단을 출력해보세요 (while문 사용)
	// 2 * 1 = 2
	// 2 * 2 = 4
	// 2 * 2 = 6
}