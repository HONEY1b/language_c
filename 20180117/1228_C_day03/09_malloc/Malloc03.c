// 문제 :배열의 사이즈 -> 사이즈만큼만 배열을 만들고 싶음

#include<stdio.h>
#include<stdlib.h> // malloc()

/*
	1. malloc() 함수는 이름이 없다.				-> 포인터변수에 주소를 알려줘야한다.
	2. malloc() 함수는 size를 계산해줘야한다.
	3. malloc() 함수는 형변환을 해줘야된다.
	4. malloc() 함수라서 include <stdlib.h> 를 해줘야 한다.
	// 삭제가 안된다.
*/

void main()
{
	int aud_size[500]; // 정적할당 != 동적할당
	int*	p;
	double* p1;
	char*	p2;
	// int customer_size[size];
	malloc(5); // 그냥 다섯칸이 생김 (5byte)
	malloc(5 * 4); // 4byte씩 할당해줘야함.
	malloc(5 * sizeof(int)); 
	//p = malloc(5 * sizeof(int)); // 처음부터 주소를 반환하는 함수 -> 몇칸을 읽어야하는지 모름
	
	// 메모리는 항상 그대로 있는데 경계선을 치는것임
	// 이 공간을 더이상 쓰지말라고 알리는 것

	p = (int*)malloc(5 * sizeof(int)); // 그것도 지정해줘야함.
	p[0]; //a1
	p[1]; //a5

	p1 = (double*)malloc(5 * sizeof(double));
	p1[0]; //a1
	p1[1]; //a9

	p2 = (char*)malloc(5 * sizeof(char));
	p2[0]; //a1
	p2[1]; //a2

	free(p); free(p1); free(p2);//해제
	p[0]; // 그래도 사용은 가능 -> 몰래사용,,,?

	p = 0; p1 = 0; p2 = 0; // -> 접근 못하도록 주소를 지움
}