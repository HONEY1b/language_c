#include <stdio.h> // printf() , scanf()
#include <stdlib.h> // rand()
#include <time.h> // srand(time(0))
// ���ٿ����
void main(){
	int comnum = 0;
	int mynum = 0;
	srand(time(0));
	comnum = rand() % 100; // 0~99 
	while(1){
		printf("ġƮ ==> %d\n" , comnum);
		printf("0~99������ ���ڸ� �Է��ϼ��� >>> ");
		//mynum = rand() % 100;
		scanf("%d" , &mynum);
		if (comnum < mynum){
			printf("comnum �� �۴�\n");
		}
		else if(comnum > mynum){
			printf("comnum �� ũ��\n");
		}
		else{
			printf("�����\n");
			break;
		}}
	// ��ȭ )) mynum �� ai �� �ٲ㺸����. 
	// ex ) com == 50 ,  1ȸ�� ) mynum == 30  2ȸ�� (mynum > 30)  mynum ==> 70 , 3ȸ��(mynum > 30 && my <70)
}