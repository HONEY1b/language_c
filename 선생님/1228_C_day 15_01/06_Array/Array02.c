#include <stdio.h>
void main(){
	int arr[3];
	int arr2[3] = {10 ,20 ,30};
	int total;
	int i;
	// ��=10  ��=20  ��=30 
	printf("arr2[0] >>> %d\n" , arr2[0]);
	printf("arr2[1] >>> %d\n" , arr2[1]);
	printf("arr2[2] >>> %d\n" , arr2[2]);
	// �ε��� >>> �迭�� ��ȣ >>> �ε����� 0���� �����Ѵ�.
	// ���� 1) �迭 arr2 ���� ��簪�� ���ؼ� ��� !!
	total = arr2[0] + arr2[1] + arr2[2];  //
	printf("total >>> %d\n" , total);
	total = 0;
	for(i = 0; i < 3; i++) // i == 0 , i == 1 , i == 2 
	{
		total = total + arr[i]; // �����Ⱚ�� ���
		total = total + arr2[i];
	}
	printf("total >>> %d\n" , total);
}