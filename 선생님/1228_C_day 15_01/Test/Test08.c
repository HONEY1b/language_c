#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
	////심화문제
	//int arr[5] = {0,10,20,30,40};
	//int move;
	//// 0이 플레이어이고 좌우로 이동시켜보세요.
	//printf("좌(1), 우(2) 를 입력하세요 >>> ");
	//scanf("%d" , &move);
	//ex) 입력 2  , 결과 ==> 10 ,0 , 20 ,30 ,40
	//ex) 입력 2  , 결과 ==> 10 , 20 , 0 , 30 ,40
	//**************************** 복습 **********************************
	int korScore[4];int mathScore[4];int engScore[4];
	//4-1) 3과목 총점 평균 학생별로출력
	int i = 0; 
	int maxEng; // 영어 최고점수
	int maxEngIndex; // 영어최고점수 학생
	int minAvr; // 평균 최하점수
	int minAvrIndex; // 평균최하점수 학생
	int avrScore[4]; // 평균 4개
	srand(time(0));
	for(i = 0; i < 4; i++){
		korScore[i] = rand()%100;
		mathScore[i] = rand()%100;
		engScore[i] = rand() %100;
		avrScore[i] = (korScore[i] + mathScore[i] + engScore[i]) / 3; // 평균값 저장
	}
	for(i = 0; i < 4; i++){
		printf("%d 번  총점 >> %d , 평균 >> %d \n" ,i , // 학생번호
			korScore[i] + mathScore[i] + engScore[i], // 총합
			(korScore[i] + mathScore[i] + engScore[i]) / 3); // 평균
	}	
	//4-2) 영어점수가 가장 높은 학생출력 (인덱스)
	maxEng = engScore[0];
	for(i = 0; i < 4; i++){
		if(maxEng < engScore[i]){  // 10 , 100 , 70 , 20
			maxEng = engScore[i]; 
			maxEngIndex = i;
		}
	}
	printf("%d >>> 영어점수 탑 >> %d \n" , maxEngIndex , maxEng);
	//4-3) 3과목 평균이 가장 낮은학생 출력
	minAvr = avrScore[0];
	for(i = 0; i < 4; i++){
		if(minAvr > avrScore[i]){
			minAvr = avrScore[i];
			minAvrIndex = i;
		}
	}
	printf("%d >>> 평균점수 다운 >> %d \n" , minAvrIndex, minAvr);
}