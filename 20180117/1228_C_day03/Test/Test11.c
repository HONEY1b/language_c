// ���ο��� �����
// �Լ����� ����� \\\\\\\\\\\\\\\\\\

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char**nameMalloc(int n){
	char ** names;
	names = (char**)malloc(sizeof(char) * n);
	return names;
}

int*korScoreM(int n){
	int *korScore;
	korScore = (int*)malloc(sizeof(int) * n);
	return korScore;
}
int*engScoreM(int n){
	int *engScore;
	engScore = (int*)malloc(sizeof(int) * n);
	return engScore;
}
int*mathScoreM(int n){
	int *mathScore;
	mathScore = (int*)malloc(sizeof(int) * n);
	return mathScore;
}
void main()
{
	// �������� ���α׷� ����� -> ����, ���

	char ** names;
	int * korScore;
	int * engScore;
	int * mathScore;
	char namebuffer[100];
	int namelen, i;
	int size = 3;
	// int ** allScore;

	// ��ö��	100, 20, 30
	// john		90, 30, 54
	// ��ٿ��� 10, 20, 30

	printf("����) ���ο��� ����� \n");

	names = (char**)malloc(sizeof(char) * size);
	korScore = (int*)malloc(sizeof(int) * size);
	engScore = (int*)malloc(sizeof(int) * size);
	mathScore = (int*)malloc(sizeof(int) * size);

	for(i = 0; i < 3; i++){
		printf("�̸��� ������ ������� �Է��ϼ���. : ");
		scanf("%s %d %d %d", &namebuffer, &korScore[i], &engScore[i], &mathScore[i]);
		namelen = strlen(namebuffer);
		names[i] = (char*)malloc(namelen+1);
		strcpy(names[i], namebuffer);
	}
	for(i = 0; i < 3; i++){
		printf("%s\t ���� : %d��, ���� : %d��, ���� : %d�� \n", names[i], korScore[i], engScore[i], mathScore[i]);
	}

	free(korScore);free(engScore);free(mathScore);
	free(names[0]);free(names[1]);free(names[2]);
	free(names);
	names = 0;

	/*
	korScore = (int*)malloc(sizeof(int) * size);
	korScore[0] = 100;
	korScore[1] = 90;
	korScore[2] = 10;
	names = (char**)malloc(sizeof(char*) * size);
	strcpy(buffer, "��ö��");
	namelen = strlen(buffer);
	names[0] = (char*)malloc(namelen+1);
	strcpy(names[0], buffer);
	printf("%s : %d \n", names[0], korScore[0]);
	free(korScore);
	free(names[0]);free(names[1]);free(names[2]);
	free(names);
	names = 0;
	*/

	printf("����) �Լ��� ����� \n");

	names = nameMalloc(3);
	korScore = korScoreM(3);
	engScore = engScoreM(3);
	mathScore = mathScoreM(3);
} //end of main