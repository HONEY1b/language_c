//�Է�

#include <stdio.h>

void main()
{
	int input_num; // ���� -> ������ ���� 
	printf("������ �ϳ� �Է��ϼ��� : ");
	scanf("%d" , &input_num);  // & -> shift + 7
	//scanf(1 , 2) �Լ� : �Է¹����� ����Ѵ�. 
	// 1 : "%d" -> ������ ���� Ÿ���� �ִ´�.
	// 2 : ������ ������ �ּҸ� �ִ´�.
	printf("�Է¹��� ���� : %d\n" , input_num);
}