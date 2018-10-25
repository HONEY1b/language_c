#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//구조체 (struct ) : 사용저 정의 자료형
// 1. struct  : 키워드
// 2. Person  : 사용자정의 자료형 이름
// 3. {}      : 자료형 내용
// 4. ;		  : 정의 종료
// 선언하는법 : struct + 사용자정의자료형이름 + 변수명 + ;
// 사용하는법 : (.)으로 접근한다. ==> 이름.내부변수
struct Person{
	char name[20];
	int age;
	char address[100];
};
void main()
{
	int				a;		// 4
	double			b;   // 8
	char			c;		// 1
	struct Person	p1;
	strcpy(p1.name , "김철수");
	p1.age = 20;
	strcpy(p1.address , "서울신촌");
	printf("이름: %s\n나이: %d\n주소: %s\n" ,p1.name ,p1.age ,p1.address);
	//printf("이름: %s\n나이: %d\n주소: %s\n" ,&p1.name[0] ,p1.age ,&p1.address[0]);
}