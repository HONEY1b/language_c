//입력

#include <stdio.h>

void main()
{
	int input_num; // 변수 -> 저장할 공간 
	printf("정수를 하나 입력하세요 : ");
	scanf("%d" , &input_num);  // & -> shift + 7
	//scanf(1 , 2) 함수 : 입력받을때 사용한다. 
	// 1 : "%d" -> 저장할 서식 타입을 넣는다.
	// 2 : 저장할 변수의 주소를 넣는다.
	printf("입력받은 정수 : %d\n" , input_num);
}