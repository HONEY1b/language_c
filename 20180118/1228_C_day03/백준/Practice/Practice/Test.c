//1152

#include<stdio.h>
#include<string.h>
void main()
{
	char arr[1000000];
	int i = 0;
	int len;
	while(!EOF){
	scanf("%s", &arr[i]);
	i++;
	}

	len = strlen(arr[0]);

	printf();


}//end of main

/*
#include<stdio.h>

void main()
{
	int n1, n2;
	int newn, newnn = 0;
	int count = 1, a;
	
	scanf("%d", &a);
	newn = a;

	while(1){
		if(newn < 10){
			n1 = newn; // ���� �ڸ�
			n2 = 0; // ���� �ڸ�
		}
		else{
			n1 = newn % 10; // ���� �ڸ�
			n2 = newn / 10; // ���� �ڸ�
		}

		if((n1 + n2) < 10){
			newnn = n1 * 10 + (n1 + n2);
		}
		else{
			newnn = n1 * 10 + (n1 + n2) % 10;
		}

		if (newnn == a){
			printf("%d", count);
			break;
		}
		else{
			newn = newnn;
			count++;
		}
	}
}//end of main

//10871
//���� N���� �̷���� ���� A�� ���� X�� �־�����. �� ��, A���� X���� ���� ���� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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
//�� ���� A, B, C�� �־�����. �� ��, �� ��°�� ū ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
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