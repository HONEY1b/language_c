#include <stdio.h>
#include <string.h> // strlen (���̸� ��� �Լ�)
#include <stdlib.h> // malloc
void main(){
	char str_1[] ="hi";
	char str_2[10] = {0};
	int length = 0;
	char name_buffer[100];
	char* pname;
	int namelen = 0;
	length = strlen(str_1);
	printf("len : %d\n" , length);
	printf("size: %d\n" , sizeof(str_1));
	printf("�̸��� �Է��ϼ��� >>> ");
	scanf("%s", &name_buffer[0]);  // ��ö��
	//scanf("%s", name_buffer);
	namelen = strlen(name_buffer);
	//namelen = strlen(&name_buffer[0]);
	pname = (char*)malloc(namelen + 1);
	strcpy(pname , name_buffer);
	printf("�̸� : %s\n" , pname); 
	//���� 1) �л����� �Է¹ް� �л�����ŭ �̸� ���� ���
}