// ����) �迭 arr2 ���� ��� ���� ���ؼ� ���


#include<stdio.h>

void main()
{
	int arr[3]; // �ʱ�ȭ�� �ȵǸ� �����Ⱚ�� �����
	int arr2[3] = {10, 20, 30};
	int total, i;
	// �� = 10 �� = 20 �� = 30


	printf("arr2[0] -> %d \n", arr2[0]);
	printf("arr2[1] -> %d \n", arr2[1]);
	printf("arr2[2] -> %d \n", arr2[2]);
	//�ε��� -> �迭�� ��ȣ : �ε����� 0���� �����Ѵ�.
	
	printf("����) �迭 arr2 ���� ��� ���� ���ؼ� ��� \n");
	total = arr2[0]+arr2[1]+arr2[2];
	printf("%d \n", total);

	total = 0;
	for(i = 0; i < 3; i++)
	{
		total = total + arr2[i];
	}
	printf("%d \n", total);
	

}//end of main