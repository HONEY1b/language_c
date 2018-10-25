#include<stdio.h>
void main()
{
	printf("Hello world\n");
	// \n : 이스케이프 문자 (new line)

	printf("%d세\n", 7+8);
	printf("홍길동\n");
	printf("callfather@naver.com\n");
	printf("010-0123-4567\n");

	// LNK1169: 여러 번 정의된 기호가 있습니다. (main 함수가 여러개) -> 주석 처리 하거나, 속성에서 빌드에서 제외시킨다.(아니오-> 예 변경)

	printf ("%d + %d = %d \n", 10, 2, 10+2);
	printf ("%d - %d = %d \n", 10, 2, 10-2);
	printf ("%d * %d = %d \n", 10, 2, 10*2);
	printf ("%d / %d = %d \n", 10, 2, 10/2);
}

/*
 2017.12.28
 각 기호의설명
 printf()
 이스케이프 문자 \n
 초기 발생 가능한 오류
 빌드에서 제외시키는 방법 (속성 변경, 주석처리)

*/

/*
과제 1) +, -, *, / 를 사용하여 출력
10 + 2, 10 - 2, 10 * 2, 10 / 2
*/