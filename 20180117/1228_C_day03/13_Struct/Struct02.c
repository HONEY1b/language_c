#include<stdio.h>
#include<string.h>

struct Person{
	char name[20];
	int kor;
	int eng;
	int math;
};

void main()
{
	struct Person p1;
	struct Person ps[3];
	int i;

	// Test11.c

	// ±èÃ¶¼ö	100, 20, 30
	// john		90, 30, 54
	// ±è¹Ù¿À·Î 10, 20, 30

	strcpy(ps[0].name, "±èÃ¶¼ö");
	strcpy(ps[1].name, "john");
	strcpy(ps[2].name, "±è¹Ù¿À·Î");

	ps[0].kor = 100;
	ps[1].kor = 90;
	ps[2].kor = 10;
	ps[0].eng = 20;
	ps[1].eng = 30;
	ps[2].eng = 20;
	ps[0].math = 30;
	ps[1].math = 54;
	ps[2].math = 30;

	for(i = 0; i < 3; i++){
		printf("ÀÌ¸§ : %s\t ±¹¾î : %d\t ¿µ¾î : %d\t ¼öÇÐ : %d \n", ps[i].name, ps[i].kor, ps[i].eng, ps[i].math);
	}
}