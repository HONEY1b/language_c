#include < stdio.h>


void main()
{
	int arr[5] = {10,20,30,40,50}; 
	int arr2[5] = {10,20}; // �����κ��� �ڵ����� 0 ������ȴ�.
	int arr3[2];
	int total = 0;
	int a;
	a = 0;
	// int arr4[2] = {10,20,30}; // �ʰ��ؼ� ���� ==> ����
	printf("arr[0] >>> %d\n" , arr[0]);
	printf("arr[1] >>> %d\n" , arr[1]);
	printf("arr[2] >>> %d\n" , arr[2]);
	printf("arr[3] >>> %d\n" , arr[3]);
	printf("arr[4] >>> %d\n" , arr[4]);
	printf("=====================================\n");
	printf("arr2[0] >>> %d\n" , arr2[0]);
	printf("arr2[1] >>> %d\n" , arr2[1]);
	printf("arr2[2] >>> %d\n" , arr2[2]);
	printf("arr2[3] >>> %d\n" , arr2[3]);
	printf("arr2[4] >>> %d\n" , arr2[4]);
	total = total + arr3[0]; // ����
	total = total + arr3[a]; // �������Ѵ�.
	printf("arr3[0] >>> %d\n" , total);  

}