#include<stdio.h>

void main()
{
	char name[10] = "��ö��";
	char str_name[] = "��ö��"; // �ѱ��� 2byte
	char str_name2[] = "abc"; // ����� 1byte
	char str_name3[] = "1234567890";
	printf("������ : %d \n", sizeof(name));
	printf("������ : %d \n", sizeof(str_name)); // 6 -> 7
	printf("������ : %d \n", sizeof(str_name2)); // 3 -> 4
	printf("������ : %d \n", sizeof(str_name3)); // 10 -> 11

	// ���ڿ��� + \0 �� �߰��ȴ�. ���ڿ��� ������ �˸��� ���� \0 �߰�


}