// 변수 활용 문제
#include <stdio.h>
// 블로그나 카페에 복습
void main()
{
	// 문제 1) 정수 2개를 입력받고 평균을 출력해보세요.
	// 문제 2) 월급을 입력하면 연봉을 출력해보세요.
	// 문제 3) 가로 세로를 입력받고, 사각형의 넓이를 구해보세요.
	// 문제 4) 위의 가로세로의 삼각형 넓이를 구해보세요
	int n1 = 0, n2 = 0;
	
	int salary_m = 0, salary_y = 0;

	int width = 0, height = 0, 
	double area = 0;

	// 문제 1) 정수 2개를 입력받고 평균을 출력해보세요.
	printf("정수 1 입력 : ");
	scanf("%d", &n1);

	printf("정수 2 입력 : ");
	scanf("%d", &n2);

	printf ("%d 와 %d 의 평균 : %d \n", n1, n2, (n1+n2)/2);

	// 문제 2) 월급을 입력하면 연봉을 출력해보세요.

	printf("월급 입력(단위 : 만원) : ");
	scanf("%d", &salary_m);

	salary_y = 12 * salary_m;

	printf("연봉 : %d 만원 \n", salary_y);

	// 문제 3) 가로 세로를 입력받고, 사각형의 넓이를 구해보세요.
	printf("가로 입력 : ");
	scanf("%d", &width);

	printf("세로 입력 : ");
	scanf("%d", &height);

	printf("가로 %d, 세로 %d인 사각형의 넓이 : %d \n", width, height, width*height);

	// 문제 4) 위의 가로세로의 삼각형 넓이를 구해보세요
	area = width*height;
	area = area/2;
	printf("가로 %d, 세로 %d인 삼각형의 넓이 : %d \n", width, height, area);
}


