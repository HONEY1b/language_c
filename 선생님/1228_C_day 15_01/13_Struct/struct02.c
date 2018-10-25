#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Person{
	char name[20];
	int kor;
	int eng;
	int math;
};
void main(){
	struct Person   p1;
	struct Person  ps[3];
	strcpy(ps[0].name , "±èÃ¶¼ö");
	ps[0].kor = 100;
	ps[0].math = 20;
	ps[0].eng = 30;
	printf("ÀÌ¸§ : %s\n±¹¾î : %d\n¼öÇÐ : %d\n¿µ¾î : %d\n" ,
		ps[0].name,ps[0].kor,ps[0].eng , ps[0].math);
	// ±èÃ¶¼ö	100 , 20 ,  30
	// john		90  , 30 ,  54
	// ±è¹Ù¿À·Î  10  , 20 ,  30
}