#include <stdio.h>
/*	1. ���� 
	2. ������
	3. if
	4. for
	5. array
	6. function
	7. pointer
	8. array�� ������

*/

void c_num(int* p)
{
	*p = 200;


}

int c_num_r()
{
	return 200;

}
void main()
{
	int num = 100;
	c_num(&num);
	num = 100;
	num = c_num_r();


}// end of main



	/*
	int num = 10;
	int* p = 0;
	p = &num;
	*p = 200;
	*/
	/*
	int arr[5] = {0};
	int* pArr = 0;
	int i;
	pArr = &arr[0];
	pArr[0] = 100;
	pArr[1] = 200;
	pArr[2] = 300;
	pArr[3] = 400;
	pArr[4] = 500;
	for(i = 0; i < 5; i++) {printf("%d \n", pArr[i]);}
	*/