#include <stdio.h>

void main()
{
	// char name2[10] = "김철수";  // 3byte 
	char name[6] =  "abcde";
	char str_name[] = "김철수"; // 한글은 2byte
	char str_name2[] = "abc";  //  영어는 1byte
	char str_name3[] = "1234567890";  //  영어는 1byte
	printf("사이즈 : %d\n" , sizeof(name)); 
	printf("사이즈 : %d\n" , sizeof(str_name)); // 6 ==> 7
	printf("사이즈 : %d\n" , sizeof(str_name2)); // 3  ==> 4
	printf("사이즈 : %d\n" , sizeof(str_name3)); // 10  ==> 11

	//문자열은 + \0 이 추가된다. 종료를 알리기위해 \0 추가 
}