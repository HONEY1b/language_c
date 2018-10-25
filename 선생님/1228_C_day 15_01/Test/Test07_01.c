#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
	// 가위바위보 해설 
	int my_num;
	int com_num;
	int result;
	srand(time(0));
	while(1){
		printf("가위(1) , 바위(2) , 보(3) >>>");
		scanf("%d" , &my_num);
		com_num = rand()%3 + 1;
		if(com_num == 1){printf("com >> 가위\n");}
		if(com_num == 2)printf("com >> 바위\n"); // 한줄은 if , for 문에서 {중괄호}생략가능
		if(com_num == 3)printf("com >> 보\n");
		if(my_num == 1){printf("my >> 가위\n");}
		if(my_num == 2)printf("my >> 바위\n"); // 한줄은 if , for 문에서 {중괄호}생략가능
		if(my_num == 3)printf("my >> 보\n");
		result = my_num - com_num;
		if(result == 1 || result == -2)printf("승리\n");
		else if( result ==0 ) printf("비김\n");
		else printf("패배\n");
	}
}