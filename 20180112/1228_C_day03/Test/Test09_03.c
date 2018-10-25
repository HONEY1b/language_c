#include <stdio.h>
void input(int*   p) // 3
{
	*p = 2000; //4
}//5
void input_test() // 3
{
	int * p;
}
void  main()
{
	int money = 1000;  //1

	printf("%d\n" , money); 
	
	input(&money);  //2 

	printf("%d\n" , money);

}