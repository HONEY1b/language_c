#include <stdio.h>
#include <stdlib.h> // rand() : ���� �߻� �Լ� (������)
#include <time.h>
void main()
{
	int a;
	int money = 400;
	int coin = 0;
	int mynum = 0;
	srand(time(0)); // ���� �ʱ�ȭ �Լ�
	a = rand();
	printf("%d\n" , a);  // ó���ѹ��� ������ ����ǰ� ��� �������� ���´�.
	a = rand() % 2; // 0~1 �� ����ȴ�.
	printf("%d\n" , a); 
	a = rand() % 9; // 0~8
	printf("%d\n" , a); 
	a = rand() % 8 + 1;
	printf("%d\n" , a);
	// ���� ) coin �� ������ ��(0) , ��(1) �� ����ϼ���
	// ���� ) �յڸ� ���缭 ���߸� money + 100 , ���� money -100 ����غ�����. 
	coin = rand()%2;
	if(coin == 1){printf("���� >>> ��\n");}
	if(coin == 0){printf("���� >>> ��\n");}
	printf("��(0), ��(1)�� ���纸���� >>> ");
	scanf("%d" , &mynum);
	if(mynum == coin){
		money = money + 100;}
	if(mynum != coin){
		money = money -100;}
	printf("money >>> %d\n" , money);
	// ���ʽ�����) 0~8 ==>  1~8 �̳������� �ٲ㺸����.
	// ������) �ݺ�...
}