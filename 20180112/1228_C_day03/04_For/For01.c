// ����) coin �� ������ ��(0), ��(1)�� ����ϼ���.
// ���ʽ� ����) 0~8 -> 1~9 �� �������� �ٲ㺸����.

#include <stdio.h>
#include <stdlib.h> //rand() : ���� �߻� �Լ� (������)
#include <time.h>

void main()
{
	int a;
	int money = 400;
	int coin = 0;
	int mynum = 0;

	srand(time(0)); // ���� �ʱ�ȭ �Լ�
	a = rand();
	printf("%d \n", a); // ó���ѹ��� ������ ����ǰ�, ��� ���� ���� ���´�.

	a = rand() % 2; // ���� ���� �� �� �ִ�. �� ��� 0~1 �� ����ȴ�.
	printf("%d \n", a);

	a = rand() %10; // 0~9
	printf("%d \n", a);

	printf("���ʽ� ����) 0~9 -> 1~9 �� �������� �ٲ㺸����. \n");
	
	a = rand() %9 + 1; // 0~9
	printf("%d \n", a);

	printf("����) coin �� ������ ��(0), ��(1)�� ����ϼ���. \n");
	// ����) �յڸ� ���缭 ���߸� money +100, Ʋ���� money -100 �� ����غ�����.
	// ���� �߰��� �� : ���� 0�� �ɶ����� �ݺ� (while)
	while(money > 0){
		printf("guess 0 or 1 : ");
		scanf("%d", &mynum);
		coin = rand() %2;
		if (coin == 0) {printf("�� \n");}
		else if (coin == 1) {printf("�� \n");}

		if(mynum == coin) { 
			money = money + 100;
			printf("correct! \n current money : %d \n", money);
		}
		else { 
			money = money - 100;
			printf("incorrect! \n current money : %d \n", money);
		}
	}






} //end of main