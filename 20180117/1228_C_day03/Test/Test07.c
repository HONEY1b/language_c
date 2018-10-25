//복습
// 문제) 초를 입력받고, 분 초로 출력하세요.
// 문제) 숫자 3개를 입력받고, 총합과 평균을 출력해보세요.
// 문제) 숫자 하나를 입력받고 "짝수""홀수"를 출력해보세요.
// 문제) 0~99사이의 점수를 하나 입력받고 60점이상이면 \"합격\"60점 미만이면 \"불합격\" 을출력해보세요.
// 문제) 0~9 사이의 홀수를 다 더한 수를 출력
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// 문제) int score[10] = {10, 100, 90, 80, 49, 30, 64, 38, 0, 20};
//		 인덱스가 2인 학생의 성적을 출력해보세요.
//		 전체 성적 중 50점 이상만 출력해보세요.
//		 성적이 100점인 학생의 인덱스를 출력해보세요.
//		 학생성적이 바뀌었다 -> 인덱스 2개를 입력받고, 서로 교환 후 출력
// 문제) 빙고게임
//		 인덱스(0~4)를 입력받고, 해당값을 3으로 바꾼다.(반복)
//		 3이 연속 3줄이면 빙고를 출력
//		 ex) {0,3,3,3,0} -> 빙고

#include<stdio.h>

void main()
{
	int score[10] = {10, 100, 90, 80, 49, 30, 64, 38, 0, 20};
	int k, m, n, temp;
	int bingo[5] = {0, 0, 0, 0, 0};
	int i, a;
	int second;
	int l, total;
	int num;
	int odd = 0;

	printf("문제) 인덱스가 2인 학생의 성적을 출력해보세요. \n");
	printf("인덱스 : %d -> 성적 : %d \n", 2, score[2]);

	printf("문제) 전체 성적 중 50점 이상만 출력해보세요. \n");
	for(k = 0; k < 10; k++)
		if(score[k] >= 50)
			printf("인덱스 : %d -> 성적 : %d \n", k, score[k]);

	printf("문제) 성적이 100점인 학생의 인덱스를 출력해보세요. \n");
	for(k = 0; k < 10; k++)
		if(score[k] == 50)
			printf("인덱스 : %d -> 성적 : %d \n", k, score[k]);

	printf("문제) 학생성적이 바뀌었다 -> 인덱스 2개를 입력받고, 서로 교환 후 출력 \n");
	printf("바뀐 학생들의 인덱스를 입력하세요.\n");
	scanf("%d %d", &m, &n);

	printf("바뀌기 전 성적 : \n");
	for(k = 0; k < 10; k++) printf("인덱스 : %d -> 성적 : %d \n", k, score[k]);

	temp = score[m];
	score[m] = score[n];
	score[n] = temp;

	printf("바뀐 후 성적 : \n");
	for(k = 0; k < 10; k++) printf("인덱스 : %d -> 성적 : %d \n", k, score[k]);
	

	printf("문제) 빙고게임 \n");
	
	while(1){
	printf("0~4사이의 인덱스를 입력하세요. \n");
	scanf("%d", &a);
	bingo[a] = 3;
	printf("현재 : {%d, %d, %d, %d, %d} \n", bingo[0], bingo[1], bingo[2], bingo[3], bingo[4]);
	for(i = 0; i < 2; i++){
		if(bingo[i] == 3 && bingo[i+1] == 3 && bingo[i+2] == 3){
			printf("bingo! \n");
			a = 6;
		}
	}
	if (a == 6) break;
	}

	printf("문제) 초를 입력받고, 분 초로 출력하세요. \n");
	printf("type seconds : ");
	scanf("%d", &second);

	printf("%d 초 -> %d 분 %d 초 \n", second, second / 60, second % 60);

	printf("문제) 숫자 3개를 입력받고, 총합과 평균을 출력해보세요. \n");
	printf("type your scores : ");
	scanf("%d %d %d", &k, &l, &m);
	total = k + l + m;

	printf("총합 : %d, 평균 : %d \n", total, total / 3);

	printf("문제) 숫자 하나를 입력받고 \"짝수\"\"홀수\"를 출력해보세요. \n");
	printf("type a number : ");
	scanf("%d", &num);

	if(num % 2 == 0) {printf("짝수 \n");}
	else if(num % 2 == 1) {printf("홀수 \n");}

	printf("문제) 0~99사이의 점수를 하나 입력받고 60점이상이면 \"합격\"60점 미만이면 \"불합격\" 을출력해보세요. \n");
	
	printf("type a score : ");
	scanf("%d", &num);

	if(num >= 60) {printf("합격 \n");}
	else {printf("불합격 \n");}

	printf("문제) 0~9 사이의 홀수를 다 더한 수를 출력 \n");
	for(i = 0; i < 10; i++)
	{
		if(i % 2 == 1) {odd = odd + i;}}
	printf("10이하 홀수들의 합 : %d \n", odd);


} //end of main