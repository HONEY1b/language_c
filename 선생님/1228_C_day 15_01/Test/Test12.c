#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
	int me;int ai;int total = 0;int nums[10] ={0};int i;
	srand(time(0));
	////����) �ѹ������ڴ� �ٽ� ��������.(me , ai)�Ѵ�.
	for(i =0 ; i <10; i++){	
		ai = rand() % 10;
		printf("%d\n" , ai);
	}	
	//for(i =0; i< 10; i++){
	//	nums[i] = i + 1 ;
	//}
	////���� 1) 1 ~ 10 ������ ���ڸ� me , ai �� ���� ���ڸ� �ϳ��� �����ư��鼭 �����Ѵ�.
	////����) me �� scanf , ai �� �������
	////����) ���ڸ� ��� �������Ѽ� 50�� �����ѱ�� ���� �¸�	
	//while(1){
	//	printf("total : %d\n" , total);
	//	for(i = 0; i < 10; i++){			
	//		if(nums[i] == 99){
	//			printf(" \t"); }
	//		else{
	//			printf("%d\t" , nums[i]);
	//		}
	//	}
	//	printf("\n");
	//	printf("���ڸ� �Է��ϼ��� >>> ");
	//	scanf("%d" , &me);
	//	total += me;
	//	nums[me-1] = 99;		
	//}
}