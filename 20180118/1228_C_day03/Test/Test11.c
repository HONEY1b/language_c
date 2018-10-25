// 메인에서 만들기
// 함수에서 만들기 \\\\\\\\\\\\\\\\\\

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char**nameMalloc(){
	char ** names;
	char buffer[100];
	int namelen;
	int size = 3;

	names = (char**)malloc(sizeof(char) * size);
	strcpy(buffer, "김철수");
	namelen = strlen(buffer);
	names[0] = (char*)malloc(namelen+1);
	strcpy(names[0], buffer);
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
	// 성적관리 프로그램 만들기 -> 저장, 출력

	char ** names;
	int * korScore;
	int * engScore;
	int * mathScore;
	char namebuffer[100];
	int namelen, i;
	int size = 3;
	// int ** allScore;

	// 김철수	100, 20, 30
	// john		90, 30, 54
	// 김바오로 10, 20, 30

	printf("문제) 메인에서 만들기 \n");

	names = (char**)malloc(sizeof(char) * size);
	korScore = (int*)malloc(sizeof(int) * size);
	engScore = (int*)malloc(sizeof(int) * size);
	mathScore = (int*)malloc(sizeof(int) * size);

	for(i = 0; i < 3; i++){
		printf("이름과 성적을 순서대로 입력하세요. : ");
		scanf("%s %d %d %d", &namebuffer, &korScore[i], &engScore[i], &mathScore[i]);
		namelen = strlen(namebuffer);
		names[i] = (char*)malloc(namelen+1);
		strcpy(names[i], namebuffer);
	}
	for(i = 0; i < 3; i++){
		printf("%s\t 국어 : %d점, 영어 : %d점, 수학 : %d점 \n", names[i], korScore[i], engScore[i], mathScore[i]);
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
	strcpy(buffer, "김철수");
	namelen = strlen(buffer);
	names[0] = (char*)malloc(namelen+1);
	strcpy(names[0], buffer);
	printf("%s : %d \n", names[0], korScore[0]);
	free(korScore);
	free(names[0]);free(names[1]);free(names[2]);
	free(names);
	names = 0;
	*/

	printf("문제) 함수로 만들기 \n");

	names = nameMalloc();
	korScore = korScoreM();
	engScore = engScoreM();
	mathScore = mathScoreM();
} //end of main