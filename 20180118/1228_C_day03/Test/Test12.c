// ����) 1~10 ������ ���ڸ� me, ai �� ���� ���ڸ� �ϳ��� �����ư��鼭 �����Ѵ�.

/*
	me�� scanf, ai�� �������
	���ڸ� �������� 50�� ���� �ѱ�� ���� �¸�
	�ѹ��� ���ڴ� �ٽ� �� �� ����. (me, ai) �� ��


*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void main()
{
	int me;
	int ai;
	int total1 = 0, total2 = 0;
	int me2[10] = {0}, ai2[10] = {0};
	int i, k = 0, a, cc = 0, cc1 = 0;
	srand(time(0));

	while(1)
	{
		
		for(i = 0; i < k; i++){
			printf("%d ���� ", me2[i]);
		}

		printf("���ڸ� �Է��ϼ���. : ");
		scanf("%d", &me);

		while(cc1 == 0){
			ai = rand() % 11;
			for(i = 0; i < k + 1; i++){
				if(ai == ai2[i]){
					ai = rand() % 11;
				}
				else
					cc1 = 1;
			}
		}
		
		for(i = 0; i < k + 1; i++){
			if(me == me2[i]){
				printf("��ġ�� ���ڴ� �ȵ˴ϴ�. \n");
				cc = 3;
			}
		}

		if(cc != 3){
			printf("�� ���� : %d \n", me);
			printf("ai���� : %d \n", ai);

			me2[k] = me;
			ai2[k] = ai;

			total1 = 0;
			total2 = 0;

			for(i = 0; i < k + 1; i++){
				total1 = total1 + me2[i];
				total2 = total2 + ai2[i];
			}
			if(total1 >= 45){
				printf("You win! \n");
				break;
			}
			else if(total2 >= 40){
				printf("Ai win! \n");
				break;
			}
			else{
				k++;
				printf("my total : %d \n", total1);
				printf("com total : %d \n", total2);
			}
		}

		cc = 0;
		cc1 = 0;
	}





}// end of main