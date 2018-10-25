// 문제 1) 정수 2개를 입력받고 평균을 출력해보세요.
// 문제 2) 월급을 입력받고 연봉을 출력해보세요.
// 문제 3) 가로 세로를 입력받고 사격형의 넓이를 구해보세요.
// 문제 4) 위의 가로세로의 삼격형넓이를  구해보세요

#include < stdio.h>
void main(){	
	
	int num1;
	int num2;
	int sal_m;
	int sal_y;
	int height, width;
	
	printf("문제 1) 정수 2개를 입력받고 평균을 출력해보세요. \n");
	printf("type two numbers : ");
	scanf("%d %d", &num1, &num2);

	printf("avrage : %d \n", (num1 + num2)/2);

	printf("문제 2) 월급을 입력받고 연봉을 출력해보세요. \n");
	printf("type your salary : ");
	scanf("%d", &sal_m);

	sal_y = 12 * sal_m;
	printf("연봉 :  %d \n", sal_y);

	printf("문제 3) 가로 세로를 입력받고, 넓이를 구해보세요. \n");
	printf("type height and width : ");
	scanf("%d %d", &height, &width);

	printf("area if it is square : %d \n", height * width);

	// 문제 4) 위의 가로세로의 삼격형넓이를  구해보세요
	printf("area if it is triangle : %d \n", (height * width)/2);
}
