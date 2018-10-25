// 1차원 배열 연습
// 문제) 인덱스를 입력받고, 해당 요소의 값을 1000으로 변경
// 문제) 값을 입력받고, 해당 인덱스 출력
// 문제) 인덱스 2개를 입력받고, 서로 교환
// 문제) 가장 큰 수와 작은 수 출력


// 2차원 배열 연습
// 문제) 각층별 관리비 합계, 평균 출력
// 문제) 전체 관리비 합계, 평균 출력 
// 문제) 우리집 관리비 : 202호
// 문제) 전체관리비 평균과 우리집 관리비 차액
// 문제) 우리집 관리비가 잘못나왔다. 201호랑 변경 후 출력
// 문제) 관리비 가장 많이 나온집 호수, 적게나온집 호수 출력
// 문제) 알고 싶은 호수 입력 시 관리비 출력
// 문제) 관리비 적게나온 집 순서대로 동호수 출력 \\\\\\\\\\\\\\\\\

#include<stdio.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void main()
{
	//int arr[5] = {10, 200, -10, 20, 70};
	int apt[3][4] = {
		{101, 102, 103, 104}, 
		{201, 202, 203, 204}, 
		{301, 302, 303, 304}
	};
	int pay[3][4] = {
		{5500, 500, 7000, 15000}, 
		{11000, 2500, 1700, 8000}, 
		{3400, 6000, 8100, 4500}
	};
	int i, j; 
	int sum[3] = {0}, avr[3] = {0};
	int avr2, sum2 = 0;
	int temp;
	int max = 0, maxi, maxj;
	int min = 100000, mini, minj;
	int a, ai, aj;
	int arr[12] = {0};
	int k = 0, n = 0;

	printf("문제) 각층별 관리비 합계, 평균 출력 \n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			sum[i] = sum[i] + pay[i][j];
		}
		avr[i] = sum[i] / 4;
	}
	for(i = 0; i < 3; i++){
	printf("%d 층의 관리비 합계 : %d, 평균 : %d \n", i+1, sum[i], avr[i]);
	}
	printf("\n");

	printf("문제) 전체 관리비 합계, 평균 출력 \n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			sum2 = sum2 + pay[i][j];
		}
	}
	avr2 = sum2 / 12;
	printf("아파트의 관리비 합계 : %d, 평균 : %d \n \n", sum2, avr2);

	printf("문제) 우리집 관리비 : 202호 \n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			if(202 == apt[i][j])
				printf("%d \n", pay[i][j]);
		}
	}
	printf("\n");

	printf("문제) 전체관리비 평균과 우리집 관리비 차액 \n");
	printf("%d \n", avr2 - pay[1][1]);
	printf("\n");

	printf("문제) 우리집 관리비가 잘못나왔다. 201호랑 변경 후 출력 \n");
	printf("바뀌기 전 -> %d호의 관리비 : %d \n", apt[1][1], pay[1][1]);
	printf("바뀌기 전 -> %d호의 관리비 : %d \n", apt[1][0], pay[1][0]);
	swap(&pay[1][1], &pay[1][0]);
	printf("바뀐 후 -> %d호의 관리비 : %d \n", apt[1][1], pay[1][1]);
	printf("바뀐 후 -> %d호의 관리비 : %d \n", apt[1][0], pay[1][0]);
	printf("\n");

	printf("문제) 관리비 가장 많이 나온집 호수, 적게나온집 호수 출력 \n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			if(max < pay[i][j]) {
				max = pay[i][j];
				maxi = i; maxj = j;
			}
		}
	}
	printf("관리비가 가장 많이 나온 집 : %d 호, %d 원 \n", apt[maxi][maxj], pay[maxi][maxj]);
	printf("\n");

	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			if(min > pay[i][j]) {
				min = pay[i][j];
				mini = i; minj = j;
			}
		}
	}
	printf("관리비가 가장 적게 나온 집 : %d 호, %d 원 \n", apt[mini][minj], pay[mini][minj]);
	printf("\n");

	printf("문제) 알고 싶은 호수 입력 시 관리비 출력 \n");
	printf("알고 싶은 동호수 입력 : ");
	scanf("%d", &a);

	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			if(a == apt[i][j]){
				ai = i; aj = j;
			}
		}
	}
	printf("%d호의 관리비 : %d \n", apt[ai][aj], pay[ai][aj]);
	printf("\n");

	printf("문제) 관리비 적게나온 집 순서대로 동호수 출력 \n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			arr[k] = pay[i][j];
			k++;
		}
	} 

	while(n < 12){
		for(i = 0; i < 11; i++){
			if(arr[i] > arr[i+1]){
				swap(&arr[i], &arr[i+1]);
			}
		}
		n++;
	}

	for(k = 0; k < 12; k++){
		for(i = 0; i < 3; i++){
			for(j = 0; j < 4; j++){
				if(arr[k] == pay[i][j]) {
					printf("%d 호 \n", apt[i][j]);
					k++;
				}
			}
		} 
	}
}