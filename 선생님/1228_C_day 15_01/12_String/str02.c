#include <stdio.h>
#include <string.h> //strcpy() ���ڿ� ���� �Լ�
void main(){
	char str_1[] = "hi";
	char str_2[] = "1234567890";
	char str_3[14] = {0};
	int a = 10;
	int b = 0;
	b = a;
	// str_3 = str_1; //���ڿ��� �迭�̱⶧���� �ܼ���������� �ȵȴ�.
	strcpy(str_3 , str_1);  // �Լ��� ����ؾߵȴ�.
	printf("%s\n" , str_3);	
	strcpy(str_3 , "��ο�c���");
	printf("%s\n" , str_3);
}