// 문제) 배열 arr2 안의 모든 값을 더해서 출력


#include<stdio.h>

void main()
{
	int arr[3]; // 초기화가 안되면 쓰레기값이 저장됨
	int arr2[3] = {10, 20, 30};
	int total, i;
	// ㅁ = 10 ㅁ = 20 ㅁ = 30


	printf("arr2[0] -> %d \n", arr2[0]);
	printf("arr2[1] -> %d \n", arr2[1]);
	printf("arr2[2] -> %d \n", arr2[2]);
	//인덱스 -> 배열의 번호 : 인덱스는 0부터 시작한다.
	
	printf("문제) 배열 arr2 안의 모든 값을 더해서 출력 \n");
	total = arr2[0]+arr2[1]+arr2[2];
	printf("%d \n", total);

	total = 0;
	for(i = 0; i < 3; i++)
	{
		total = total + arr2[i];
	}
	printf("%d \n", total);
	

}//end of main