// ����) �л� ���� �Է¹ް�, �л�����ŭ �̸� ����, ��� \\\\\\\\\\\\\\\\\

#include<stdio.h>
#include<string.h> // strlen : ���̸� ��� �Լ�
#include<stdlib.h>

void main()
{
	char str_1[] = "hi";
	char str_2[10] = {0};

	int length = 0;

	char name_buffer[100];
	char* pname;
	int namelen = 0;
	int n, i;
	char** k;

	length = strlen(str_1);
	printf("%d \n", length); // ���̴� 2 ��µ�
	printf("%d \n", sizeof(str_1)); // ������� 3

	// ���� �Ҵ� �� +1 �������

	printf("�̸��� �Է��ϼ���. : ");
	scanf("%s", &name_buffer[0]);
	//scanf("%s", name_buffer); // �̸� ��ü�� 0��° �ּҸ� ����Ų��.
	namelen = strlen(name_buffer);
	//namelen = strlen(name_buffer[0]);
	pname = (char*)malloc(namelen + 1);
	strcpy(pname, name_buffer);

	printf("�̸� : %s \n", pname);

	printf("����) �л� ���� �Է¹ް�, �л�����ŭ �̸� ����, ��� \n");
	printf("�л� ���� �Է��ϼ���. : ");
	scanf("%d", &n);

	k = (char**)malloc(n);

	for(i = 0; i < n; i++){
		printf("�̸��� �Է��ϼ���. : ");
		scanf("%s", &name_buffer[0]);
		namelen = strlen(name_buffer);
		k[i] = (char*)malloc(namelen + 1);
		strcpy(k[i], name_buffer);
	}

	printf("�л� ��� : \n");

	for(i = 0; i < n; i++){
		printf("%s \n", k[i]);
	}

}