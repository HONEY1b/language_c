#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
	// ���������� �ؼ� 
	int my_num;
	int com_num;
	int result;
	srand(time(0));
	while(1){
		printf("����(1) , ����(2) , ��(3) >>>");
		scanf("%d" , &my_num);
		com_num = rand()%3 + 1;
		if(com_num == 1){printf("com >> ����\n");}
		if(com_num == 2)printf("com >> ����\n"); // ������ if , for ������ {�߰�ȣ}��������
		if(com_num == 3)printf("com >> ��\n");
		if(my_num == 1){printf("my >> ����\n");}
		if(my_num == 2)printf("my >> ����\n"); // ������ if , for ������ {�߰�ȣ}��������
		if(my_num == 3)printf("my >> ��\n");
		result = my_num - com_num;
		if(result == 1 || result == -2)printf("�¸�\n");
		else if( result ==0 ) printf("���\n");
		else printf("�й�\n");
	}
}