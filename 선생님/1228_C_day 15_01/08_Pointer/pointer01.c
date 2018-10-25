#include <stdio.h>
void test(){int a;}
void test2(int a){}
int test_return (){
	int a = 10000;
	return a; 
}
void main(){
	// 函荐狼 积疙林扁 
	int a;
	a = 10;
	printf("蔼 >>> %d\n" , a);
	printf("林家 >>> %d\n" , &a);
	{
		int a;
		a = 20;
		printf("蔼 >>> %d\n" ,a);
		printf("林家 >>> %d\n" , &a);
	}
	printf("蔼 >>> %d\n" ,a);
	printf("林家 >>> %d\n" , &a);
	test();
	test2(10);
	test_return();
	a = test_return();
}