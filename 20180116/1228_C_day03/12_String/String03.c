// 문제) 학생 수를 입력받고, 학생수만큼 이름 저장, 출력 \\\\\\\\\\\\\\\\\

#include<stdio.h>
#include<string.h> // strlen : 길이를 재는 함수
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
	printf("%d \n", length); // 길이는 2 출력됨
	printf("%d \n", sizeof(str_1)); // 사이즈는 3

	// 동적 할당 시 +1 해줘야함

	printf("이름을 입력하세요. : ");
	scanf("%s", &name_buffer[0]);
	//scanf("%s", name_buffer); // 이름 자체가 0번째 주소를 가리킨다.
	namelen = strlen(name_buffer);
	//namelen = strlen(name_buffer[0]);
	pname = (char*)malloc(namelen + 1);
	strcpy(pname, name_buffer);

	printf("이름 : %s \n", pname);

	printf("문제) 학생 수를 입력받고, 학생수만큼 이름 저장, 출력 \n");
	printf("학생 수를 입력하세요. : ");
	scanf("%d", &n);

	k = (char**)malloc(n);

	for(i = 0; i < n; i++){
		printf("이름을 입력하세요. : ");
		scanf("%s", &name_buffer[0]);
		namelen = strlen(name_buffer);
		k[i] = (char*)malloc(namelen + 1);
		strcpy(k[i], name_buffer);
	}

	printf("학생 명단 : \n");

	for(i = 0; i < n; i++){
		printf("%s \n", k[i]);
	}

}