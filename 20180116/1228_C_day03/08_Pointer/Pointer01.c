#include<stdio.h>

void test(){
	int a;
}
void test2(int a){}

int test_ret()
{
	int a = 10;
	return a;
}

void main()
{
	// 변수의 생명주기
	// int a; -> 중복 안됨. 재정의
	int a = 10;
	printf("값 : %d \n", a);
	printf("주소 : %d \n", &a);
	{
		int a;
		a = 20;
		printf("값 : %d \n", a);
		printf("주소 : %d \n", &a);
	} // 중괄호가 닫히면 a 소멸
	printf("값 : %d \n", a);
	printf("주소 : %d \n", &a);
	test(); // a가 생김 -> 소멸
	test2(10); // a가 생기면서 10이 들어감 -> 소멸
	test_ret(); // return 만나면 사라지면서 10으로 바뀜
	a = test_ret(); // return 만나면 사라지면서 10으로 바뀜 -> a에 저장
} // end of main