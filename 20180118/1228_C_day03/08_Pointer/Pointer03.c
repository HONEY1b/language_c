// 庚薦) p1, p2稽 嘘発聖 背衣背 左室推.
// 庚薦) 敗呪稽 num1, num2 葵聖 嘘発背 左室推.
// &&&&&&&&&&&&&&&差柔馬切たたたたたた&&&&&&&&&&&&&
#include<stdio.h>

void swap_r(int *num1, int *num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;

}
void main()
{
	int		num1 = 100;
	int*	p1 = 0; // 鉢詞妊虞 持唖
	int		num2 = 200;
	int*	p2 = 0;

	int temp;
	p1 = &num1;
	p2 = &num2;

	temp = num1;
	num1 = num2;
	num2 = temp;

	printf("num1 : %d \n", num1);
	printf("num2 : %d \n", num2);

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	printf("num1 : %d \n", num1);
	printf("num2 : %d \n", num2);

	swap_r(p1, p2);
	printf("num1 : %d \n", num1);
	printf("num2 : %d \n", num2);

}