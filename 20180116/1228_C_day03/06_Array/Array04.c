// 문제) 인덱스가 2인 학생의 성적을 출력해보세요.
// 문제) 성적이 100점인 학생의 인덱스를 출력해보세요.
// 문제) 전체 성적을 출력해보세요
// 문제) 전체 성적 중 50점 이상만 출력해보세요.
// 문제) 전체 성적 중 인덱스 4이상만 출력해보세요.
// 문제) 평균을 출력해보세요.
// 문제) 점수가 가장 낮은 학생을 출력해보세요.
// 문제) 4명의 학생의 점수를 0~99까지 랜덤으로 저장 
//		 3과목 총점과 평균을 학생별로 출력
//		 영어점수가 가장 높은 학생 출력
//		 3과목 평균이 가장 낮은 학생 출력

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	int score[10] = {10, 100, 90, 80, 49, 30, 64, 38, 0, 20};
	int i, total, avr, temp, tempI = 0;
	int korScore[4];
	int mathScore[4];
	int engScore[4];
	int total2[4] = {0}, avr2[4] = {0};
	// 이름이 겹치지않도록 확인할 것

	printf("문제) 인덱스가 2인 학생의 성적을 출력해보세요. \n"); //인덱스는 0~9까지 있음
	printf("인덱스 : %d -> 성적 : %d \n", 2, score[2]);

	printf("문제) 성적이 100점인 학생의 인덱스를 출력해보세요. \n");
	for(i = 0; i < 10; i++)
		if(score[i] == 100) 
			printf("인덱스 : %d -> 성적 : %d \n", i, score[i]);
			//printf("번호 : %d -> 성적 : %d \n", i+1 , score[i]);

	printf("문제) 전체 성적을 출력해보세요 \n");
	for(i = 0; i < 10; i++)
		//printf("인덱스 : %d -> 성적 : %d \n", i, score[i]);
		printf("번호 : %d -> 성적 : %d \n", i+1 , score[i]);

	printf("문제) 전체 성적중 50점 이상만 출력해보세요. \n");
	for(i = 0; i < 10; i++)
		if(score[i] >=50 ) 
			//printf("인덱스 : %d -> 성적 : %d \n", i, score[i]);
			printf("번호 : %d -> 성적 : %d \n", i+1 , score[i]);

	printf("문제) 전체 성적 중 인덱스 4이상(번호 5이상)만 출력해보세요. \n");
	for(i = 0; i < 10; i++)
		if(i >=4 ) 
			//printf("인덱스 : %d -> 성적 : %d \n", i, score[i]);
			printf("번호 : %d -> 성적 : %d \n", i+1 , score[i]);

	printf("문제) 평균을 출력해보세요. \n");
	total = 0;
	for(i = 0; i < 10; i++)
		total = total + score[i];
	avr = total / 10;
	printf("평균 : %d \n", avr);

	printf("문제) 평균 이하의 점수만 출력해보세요. \n");
	for(i = 0; i < 10; i++)
		if(score[i] <= avr ) 
			//printf("인덱스 : %d -> 성적 : %d \n", i, score[i]);
			printf("번호 : %d -> 성적 : %d \n", i+1 , score[i]);

	printf("문제) 점수가 가장 낮은 학생을 출력해보세요. \n");
	temp = score[0];
	for(i = 0; i < 10; i++) {
		if(temp > score[i]) {
			temp = score[i];
			tempI = i;
		}
	}
	//printf("인덱스 : %d -> 성적 : %d \n", i, score[i]);
	printf("번호 : %d -> 성적 : %d \n", tempI+1 , score[tempI]);

	printf("문제) 4명의 학생의 점수를 0~99까지 랜덤으로 저장 \n");
	srand(time(0));
	for(i = 0; i < 4; i++) {
		korScore[i] = rand() % 100;
		mathScore[i] = rand() % 100;
		engScore[i] = rand() % 100;
	}

	printf("문제) 4명의 학생의 총점과 평균을 차례로 출력 \n");
	for(i = 0; i < 4; i++) {
		total2[i] = korScore[i] + mathScore[i] + engScore[i];
		avr2[i] = total2[i] / 3;
		printf("총점 : %d, 평균 : %d \n", total2[i], avr2[i]);
	}

	printf("문제) 영어점수가 가장 높은 학생 출력 \n");
	temp = engScore[0];
	for(i = 0; i < 4; i++) {
		if(temp < engScore[i]) {
			temp = engScore[i];
			tempI = i;
		}
	}
	//printf("인덱스 : %d -> 성적 : %d \n", i, score[i]);
	printf("번호 : %d -> 영어성적 : %d \n", tempI+1 , engScore[tempI]);

	printf("문제) 3과목 평균이 가장 낮은 학생 출력 \n");
	temp = avr2[0];
	for(i = 0; i < 4; i++) {
		if(temp > avr2[i]) {
			temp = avr2[i];
			tempI = i;
		}
	}
	//printf("인덱스 : %d -> 성적 : %d \n", i, score[i]);
	printf("번호 : %d -> 평균 : %d \n", tempI+1 , avr2[tempI]);



}//end of main