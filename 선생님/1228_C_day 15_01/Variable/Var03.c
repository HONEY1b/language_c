#include < stdio.h>
void main(){	
	// 문제 1) 정수 2개를 입력받고 평균을 출력해보세요.
	// 문제 2) 월급을 입력받고 연봉을 출력해보세요.
	// 문제 3) 가로 세로를 입력받고 사격형의 넓이를 구해보세요.
	// 문제 4) 위의 가로세로의 삼격형넓이를  구해보세요
	int input_num1;
	int input_num2;
	int salary;
	int year_salary;
	printf("1번정수를 입력하세요 >>> ");
	scanf("%d" , &input_num1);
	printf("2번정수를 입력하세요 >>> ");
	scanf("%d" , &input_num2);
	printf("평균 >>> %d" , (input_num1 + input_num2) / 2 );
}
