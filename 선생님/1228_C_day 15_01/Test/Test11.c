#include <stdio.h>
#include <stdlib.h>  // malloc 
#include <string.h>
char** nameMalloc(){
	char ** names;
	char buffer[100];
	int nameLen;	
	names = (char**)malloc(sizeof(char*) * size);
	strcpy(buffer , "��ö��");
	nameLen = strlen(buffer);
	names[0] = (char*)malloc(nameLen +1);
	strcpy(names[0] , buffer);
	return names;
}
void nameMalloc2(char *** ppp){
}
void main(){
	//�������� ���α׷� �����  , ���� ��� 
	char ** names;	
	names = nameMalloc();
	nameMalloc2(&names);
	printf("%s : %d \n" , names[0] , korScore[0]);
}

