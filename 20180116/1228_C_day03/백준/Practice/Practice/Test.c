//10871
//정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이 때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.
#include<stdio.h>

void main()
{
	int n, a[1000], i, max = 0;
	double avr = 0;

	scanf("%d", &n);

	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for(i = 0; i < n; i++) {
		if (a[i] > max) max = a[i];
	}

	for(i = 0; i < n; i++) {
		a[i] = a[i] / max * 100;
	}

	for(i = 0; i < n; i++) {
		avr = avr + a[i];
	}

	avr = avr / n;

	printf("%.2f", avr);


}//end of main

/*
//10871
//정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이 때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.
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
//세 정수 A, B, C가 주어진다. 이 때, 두 번째로 큰 정수를 출력하는 프로그램을 작성하시오. 
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


*/