//11654
#include<stdio.h>
#include<string.h>

void main()
{
	int arr1[10], arr2[10];
	int n1, n2;

	for(int i = 0; n1 > 0; i++){
		arr1[i] = n1 % 10;
		n1 = n1 / 10;
	}

	for(int i = 0; n2 > 0; i++){
		arr2[i] = n2 % 10;
		n2 = n2 / 10;
	}

	for(int i = 0; i < ; i++){
		cout << arr1[i];
	}

}//end of main




/*
//11654
#include<stdio.h>

void main()
{
	char a;

	scanf("%c", &a);

	printf("%d", a);

}//end of main

//2920
#include<stdio.h>

void main()
{
	int arr[8], i, a = 0, k = 7, d = 0;
	int m = 1;

	for(i = 0; i < 8; i++){
		scanf("%d", &arr[i]);
	}

	for(i = 0; i < 8; i++){
		if(arr[i] == i+1){
			a += 1;
		}
		else if(arr[k] == i+1){
			d += 1;
			k--;
		}
		else {
			m = 0;
		}
	}

	if (a == 8){printf("ascending\n");}
	else if(d == 8){printf("descending\n");}
	else if(m == 0){printf("mixed\n");}

}//end of main

//2839
#include<stdio.h>

void main()
{
	int a, b, c, d, n;

	scanf("%d", &a);

	b = a % 5;
	c = a % 3;

	}

	
}//end of main

//11718, 11719
#include<stdio.h>

void main()
{
	// getchar 등을 사용해야함...일단은 스킵

}//end of main

*/