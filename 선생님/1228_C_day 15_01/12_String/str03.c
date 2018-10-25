#include <stdio.h>
#include <string.h> // strlen (길이를 재는 함수)
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
	printf("이름을 입력하세요 >>> ");
	scanf("%s", &name_buffer[0]);  // 김철수
	//scanf("%s", name_buffer);
	namelen = strlen(name_buffer);
	//namelen = strlen(&name_buffer[0]);
	pname = (char*)malloc(namelen + 1);
	strcpy(pname , name_buffer);
	printf("이름 : %s\n" , pname); 
	//문제 1) 학생수를 입력받고 학생수만큼 이름 저장 출력
}