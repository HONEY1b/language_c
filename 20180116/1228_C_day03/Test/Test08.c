//복습
// 문제) int score[10] = {10, 100, 90, 80, 49, 30, 64, 38, 0, 20};
//		 학생성적이 바뀌었다 -> 인덱스 2개를 입력받고, 서로 교환 후 출력
// 문제) 4명의 학생의 점수를 0~99까지 랜덤으로 저장
//		 3과목 총점과 평균을 학생별로 출력
//		 영어점수가 가장 높은 학생 출력
//		 3과목 평균이 가장 낮은 학생 출력
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// 문제) 좌우움직이기


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	int arr[5] = {0, 10, 20, 30, 40};
	int move, temp, index, i;
	int score[10] = {10, 100, 90, 80, 49, 30, 64, 38, 0, 20};
	int a, b;
	int kor[4], eng[4], mat[4];
	int total = 0, avr[4], maxeng = 0, minavr = 100, k;

	printf("문제) 좌우 움직이기 \n");
	// 0 이 플레이어 입니다. 좌우로 이동시켜 보세요.
	
	while(1){
		printf("좌(1), 우(2) 를 입력하세요 : ");
		scanf("%d", &move);

		for(i = 0; i < 5; i++)
			if (arr[i] == 0) index = i;

		if(index == 0 && move == 1) continue;
		else if(index == 4 && move == 2) continue;
		else{
			if (move == 1){
				temp = arr[index-1];
				arr[index-1] = 0;
				arr[index] = temp;
			}
			else if (move == 2){
				temp = arr[index];
				arr[index] = arr [index+1];
				arr[index+1] = temp;
			}
			else if (move == 0)
				break;
		}
		for(i = 0; i < 5; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}

	printf("문제) 전체 성적 중 50점 이상만 출력해보세요. \n");
	for(i = 0; i < 10; i++)
	{
		if(score[i] > 50){printf("%d ", score[i]);}
	}
	printf("\n");

	printf("문제) 학생성적이 바뀌었다 -> 인덱스 2개를 입력받고, 서로 교환 후 출력 \n");
	printf("바뀐 학생들의 인덱스를 입력하세요 : ");
	scanf("%d %d", &a, &b);

	printf("바뀌기 전 : ");
	for(i = 0; i < 10; i++) printf("%d ", score[i]);
	printf("\n");

	temp = score[a];
	score[a] = score[b];
	score[b] = temp;

	printf("바꾼 후 : ");
	for(i = 0; i < 10; i++) printf("%d ", score[i]);
	printf("\n");

	printf("문제) 4명의 학생의 점수를 0~99까지 랜덤으로 저장 \n");
	srand(time(0));

	for(i = 0; i < 4; i++)
	{
		kor[i] = rand() % 100;
		eng[i] = rand() % 100;
		mat[i] = rand() % 100;
	}
	for(i = 0; i < 4; i++){
	printf("학생 : %d -> 국어 : %d, 영어 : %d, 수학 : %d \n", i, kor[i], eng[i], mat[i]);
	}

	printf("문제) 3과목 총점과 평균을 학생별로 출력 \n");
	for(i = 0; i < 4; i++){
		total = kor[i] + eng[i] + mat[i];
		avr[i] = total / 3;
		printf("학생 : %d -> 총합 : %d, 평균 : %d \n", i, total, avr[i]);
	}

	printf("문제) 영어점수가 가장 높은 학생 출력 \n");
	for(i = 0; i < 4; i++){
		if(eng[i] > maxeng) {
			maxeng = eng[i];
			k = i;
		}
	}
	printf("영어점수가 가장 높은 학생 : %d, 점수 : %d \n", k, maxeng);

	printf("문제) 3과목 평균이 가장 낮은 학생 출력 \n");
	for(i = 0; i < 4; i++){
		if(avr[i] < minavr) {
			minavr = avr[i];
			k = i;
		}
	}
	printf("평균이 가장 낮은 학생 : %d, 점수 : %d \n", k, minavr);


} // end of main