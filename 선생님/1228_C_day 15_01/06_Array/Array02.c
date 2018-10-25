#include <stdio.h>
void main(){
	int arr[3];
	int arr2[3] = {10 ,20 ,30};
	int total;
	int i;
	// ㅁ=10  ㅁ=20  ㅁ=30 
	printf("arr2[0] >>> %d\n" , arr2[0]);
	printf("arr2[1] >>> %d\n" , arr2[1]);
	printf("arr2[2] >>> %d\n" , arr2[2]);
	// 인덱스 >>> 배열의 번호 >>> 인덱스는 0부터 시작한다.
	// 문제 1) 배열 arr2 안의 모든값을 더해서 출력 !!
	total = arr2[0] + arr2[1] + arr2[2];  //
	printf("total >>> %d\n" , total);
	total = 0;
	for(i = 0; i < 3; i++) // i == 0 , i == 1 , i == 2 
	{
		total = total + arr[i]; // 쓰래기값이 출력
		total = total + arr2[i];
	}
	printf("total >>> %d\n" , total);
}