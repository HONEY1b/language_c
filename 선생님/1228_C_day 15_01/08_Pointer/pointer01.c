#include <stdio.h>
void test(){int a;}
void test2(int a){}
int test_return (){
	int a = 10000;
	return a; 
}
void main(){
	// ������ �����ֱ� 
	int a;
	a = 10;
	printf("�� >>> %d\n" , a);
	printf("�ּ� >>> %d\n" , &a);
	{
		int a;
		a = 20;
		printf("�� >>> %d\n" ,a);
		printf("�ּ� >>> %d\n" , &a);
	}
	printf("�� >>> %d\n" ,a);
	printf("�ּ� >>> %d\n" , &a);
	test();
	test2(10);
	test_return();
	a = test_return();
}