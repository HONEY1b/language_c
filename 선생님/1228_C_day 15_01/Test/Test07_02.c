#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	// ���ٿ���� 2���� ����
	//int com_num;
	//int my_num;
	//srand(time(0));
	//com_num = rand()%100;
	//while(1){
	//	printf("ġƮ >>> %d \n" , com_num); 
	//	printf("(0~99) ���� �ϳ��� �Է����ּ��� >>> ");
	//	scanf("%d" ,&my_num);
	//	if(my_num < 0 || my_num >99 ) continue;
	//	if(my_num == com_num) printf("���ڸ� ������ϴ�\n");
	//	if(my_num > com_num) printf("��\n");
	//	if(my_num < com_num) printf("�ٿ�\n");
	//}
/////////////////////////////////////////////////////////////////////
	int com_num = -1;
	int my_num  = -1;
	int high;
	int low;
	srand(time(0));
	com_num = rand()%100;
	high = 100;
	low = -1;
	printf("ġƮ >>> %d \n" , com_num); 
	while(1){		
		my_num = rand() %100;
		if( my_num < high && my_num > low && my_num > com_num){
			high = my_num;
			printf("high >>> %d\n" , high);
		}
		else if( my_num < high && my_num >low && my_num < com_num){
			low = my_num;
			printf("low >>> %d\n" , low);
		}
		else if(my_num == com_num){
			printf("my_num >>> %d\n" , my_num);
			printf("����\n");
			break;
		}
	}
}