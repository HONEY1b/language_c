#include<stdio.h>

void main()
{
	int arr[5] = {10, 20, 30}; //���� �κ��� �ڵ����� 0�� ����ȴ�.
	int arr2[5] = {10, 20};
	int arr3[2];
	int total, i;

	//int arr4[2] = {10, 20, 30}; //�ʰ��ؼ� ���� -> ����

	printf("arr[0] -> %d \n", arr[0]);
	printf("arr[1] -> %d \n", arr[1]);
	printf("arr[2] -> %d \n", arr[2]);
	printf("arr[3] -> %d \n", arr[3]);
	printf("arr[4] -> %d \n", arr[4]);
	printf("----------------------------- \n");
	printf("arr2[0] -> %d \n", arr2[0]);
	printf("arr2[1] -> %d \n", arr2[1]);
	printf("arr2[2] -> %d \n", arr2[2]);
	printf("arr2[3] -> %d \n", arr2[3]);
	printf("arr2[4] -> %d \n", arr2[4]);

	total = total + arr3[0]; //��������
	total = total + arr3[a]; // ������ �Ѵ�.
	for(i = 0; i < 1; i++) {total = total + arr2[i];} //������ �Ѵ�.
	printf("arr3[0] -> %d \n", total); // �ʱ�ȭ �����߻�

}//end of main