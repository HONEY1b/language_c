// 문제) 인덱스 3번과 8번의 값들을 교환해보세요.
// 문제) arr안의 값들을 섞어보세요.
// 문제) 숫자 야구 게임 \\\\\\\\\\\\\\\\(함수로 할수없나)

/*
	comnum[3] = {0~9 중에 3개 랜덤 입력}	ex 2, 1, 7 -> 섞은 배열에서 3개 입력받기
	mynum[3] 입력 받기						ex 0, 1, 2
	숫자와 자리가 같으면 -> 스트라이크		ex 1스트라이크, 1볼
	숫자만 맞으면 -> 볼

*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *p1, int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}//end of swap

void main()
{
	// int size = 10;
	// int arr1[size]; : 할당받을때 변수를 사용할 수 없다.(오직 상수만 가능)
	int arr[10] = {0};
	int a, b, rand_index;
	int i;
	int mynum[3];
	int s = 0;
	srand(time(0));
	printf("arr 갯수 : %d \n", sizeof(arr)/sizeof(int));
	for(i = 0; i < sizeof(arr)/sizeof(int); i++) {arr[i] = i;}
	for(i = 0; i < sizeof(arr)/sizeof(int); i++) {printf("arr[%d] = %d \n", i, arr[i]);}

	printf("문제) 인덱스 3번과 8번의 값들을 교환해보세요. \n");
	swap(&arr[3], &arr[8]);
	for(i = 0; i < sizeof(arr)/sizeof(int); i++) {printf("arr[%d] = %d \n", i, arr[i]);}

	printf("문제) arr안의 값들을 섞어보세요. \n");
	for(i = 0; i < 100; i++){
		a = rand() % 10;
		b = rand() % 10;
		swap(&arr[a], &arr[b]);
	/*
	rand_index = rand() % 10;
	swap(&arr[3], &arr[rand_index]);
	*/
	}
	for(i = 0; i < sizeof(arr)/sizeof(int); i++) {printf("arr[%d] = %d \n", i, arr[i]);}

	printf("숫자 야구 \n");
	printf("치트 : %d %d %d \n", arr[0], arr[1], arr[2]);
	
	while(1){
	printf("guess the numbers : ");
	scanf("%d %d %d", &mynum[0], &mynum[1], &mynum[2]);

	s = 0;

	for(i = 0; i < 3; i++){
		if(arr[i] == mynum[i]){
			s++;
		}
	}
	printf("%d stike \n", s);

	b = 0;

	if(arr[0] == mynum[1]) {b++;}
	if(arr[0] == mynum[2]) {b++;}
	if(arr[1] == mynum[0]) {b++;}
	if(arr[1] == mynum[2]) {b++;}
	if(arr[2] == mynum[0]) {b++;}
	if(arr[2] == mynum[1]) {b++;}

	printf("%d ball \n", b);

	if(s == 3) {
		printf("맞았습니다. \n");
		break;
	}
	}


}//end of main