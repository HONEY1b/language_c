// 문제) 1~10 사이의 숫자를 me, ai 와 서로 숫자를 하나씩 번갈아가면서 선택한다.

/*
	me는 scanf, ai는 랜덤사용
	숫자를 누적시켜 50을 먼저 넘기는 쪽이 승리
	한번고른 숫자는 다시 고를 수 없다. (me, ai) 둘 다


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
			printf("%d 제외 ", me2[i]);
		}

		printf("숫자를 입력하세요. : ");
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
				printf("겹치는 숫자는 안됩니다. \n");
				cc = 3;
			}
		}

		if(cc != 3){
			printf("내 숫자 : %d \n", me);
			printf("ai숫자 : %d \n", ai);

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