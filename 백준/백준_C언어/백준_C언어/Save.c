/*
//1065
#include<stdio.h>

void main()
{
	int n, i;
	int in1, in2, in3;
	int count = 0;

	scanf("%d", &n);


	for(i = 1; i < n + 1; i++){ // 등차수열 판별
		// 범위 주의!! 입력한 숫자까지 확인해야함
		in1 = i / 100; //백의자리
		in2 = (i % 100) / 10;  //십의자리
		in3 = i % 10; //일의자리
		
		if(in1 == 0){
			count++;
		}

		else if((in1 - in2) == (in2 - in3)){
			count++;
		}
	}
	printf("%d", count);

}//end of main

//4344
#include<stdio.h>

void main()
{
	int n, i = 0, nn, k;
	int arr[1000], total = 0, avr = 0;
	int over = 0;
	double overr[1000] = {0};
	scanf("%d", &n);
	while (i < n){
		scanf("%d", &nn);
		total = 0; avr = 0; over = 0;
		
		for(k = 0; k < nn; k++){
			scanf("%d", &arr[k]);
		}
		for(k = 0; k < nn; k++){
			total = total + arr[k];
		}

		avr = total / nn;

		for(k = 0; k < nn; k++){
			if(arr[k] > avr){
				over++;
			}
		}

		overr[i] =(double)over / (double)nn;
		i++;
	}
	for(i = 0; i < n; i++)
		printf("%.3lf%%\n", overr[i] * 100);


}//end of main



//1546
#include<stdio.h>

void main()
{
	int n;
	int nn[1000];
	int i;
	double max = 0, sum = 0, nnn[1000];

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%d", &nn[i]);
	}

	for(i = 0; i < n; i++){
		if(nn[i] > max){
			max = nn[i];
		}
	}

	for(i = 0; i < n; i++){
		nnn[i] = (nn[i] / max) * 100;
	}
	
	for(i = 0; i < n; i++){
		sum = sum + nnn[i];
	}

	printf("%.2lf", sum / n);

}//end of main


//10430
#include<stdio.h>

void main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", (a + b) % c);
	printf("%d\n", (a % c + b % c) % c);
	printf("%d\n", (a * b) % c);
	printf("%d\n", (a % c * b % c) % c);
}//end of main

//10172
#include<stdio.h>

void main()
{
	
	printf("|\\_/|\n");
	printf("|q p|   /}\n");
	printf("( 0 )\"\"\"\\\n");
	printf("|\"^\"`    |\n");
	printf("||_/=\\\\__|\n");

}//end of main

//7287
#include<stdio.h>

void main()
{
	
	printf("17\n");
    printf("skgus822\n");
}//end of main

//10871
#include<stdio.h>

void main()
{
	int n,x;
	int nn[100];
	int i;

	scanf("%d %d",&n, &x);

	for(i = 0; i < n; i++) {
		scanf("%d", &nn[i]);
	}

	for(i = 0; i < n; i++)
		if(nn[i] < x) {printf("%d ", nn[i]);}

}//end of main

//10817
#include<stdio.h>

void main()
{
	int a, b, c;
	int first = 0, second = 0, third = 0;

	scanf("%d %d %d",&a, &b, &c);

	if (a <= b && b <= c) second = b;
	else if (c <= b && b <= a) second = b;
	else if (a <= c && c <= b) second = c;
	else if (b <= c && c <= c) second = c;
	else if (c <= a && a <= b) second = a;
	else if (b <= a && a <= c) second = a;

	printf("%d\n", second);

}//end of main

//9498
#include<stdio.h>

void main()
{
	int a;

	scanf("%d",&a);

	if (a >= 90 && a <= 100) printf("A\n");
	else if (a >= 80 && a <= 89) printf("B\n");
	else if (a >= 70 && a <= 79) printf("C\n");
	else if (a >= 60 && a <= 6) printf("D\n");
	else printf("F\n");

}//end of main

//8393
#include<stdio.h>

void main()
{
	int i, a, sum = 0;
	
	scanf("%d", &a);
	for(i = 1; i <= a; i++) sum = sum + i;
	printf("%d", sum);

} //end of main

//2741
#include<stdio.h>

void main()
{
	int i, N;
	scanf("%d", &N);
	for(i=1; i<= N; i++) printf("%d\n", i);
} //end of main

//2742
#include<stdio.h>

void main()
{
	int i, N;
	scanf("%d", &N);
	for(i=N; i>= 1; i--) printf("%d\n", i);
} //end of main

//2739
#include<stdio.h>

void main()
{
	int i, N, k, m;
	scanf("%d", &N);
	for(i=N; i > 0; i--) {
		for(m = i; m > 1; m--) printf(" ");
		for(k = 0; k < N-(i-1); k++) printf("*");
		printf("\n");
	}

} //end of main

//2738
#include<stdio.h>

void main()
{
	int i, N, k;
	scanf("%d", &N);
	for(i=0; i < N; i++) {
		for(k = 0; k <= i; k++) printf("*");
		printf("\n");
	}

} //end of main

//2440
#include<stdio.h>

void main()
{
	int i, N, k;
	scanf("%d", &N);
	for(i=N; i > 0; i--) {
		for(k = i; k > 0; k--) printf("*");
		printf("\n");
	}

} //end of main

//2441
#include<stdio.h>

void main()
{
	int i, N, k, m;
	scanf("%d", &N);
	for(i=N; i > 0; i--) {
		for(m = 1; m < N-(i-1); m++) printf(" ");
		for(k = i; k > 0; k--) printf("*");
		printf("\n");
	}

} //end of main

*/