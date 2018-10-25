#include <stdio.h>
#include <string.h> //strcpy() 문자열 복사 함수
void main(){
	char str_1[] = "hi";
	char str_2[] = "1234567890";
	char str_3[14] = {0};
	int a = 10;
	int b = 0;
	b = a;
	// str_3 = str_1; //문자열은 배열이기때문에 단순연산대입이 안된다.
	strcpy(str_3 , str_1);  // 함수를 사용해야된다.
	printf("%s\n" , str_3);	
	strcpy(str_3 , "헬로우c언어");
	printf("%s\n" , str_3);
}