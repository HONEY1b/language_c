// ����) ���� ī�带 �� �����غ���. wwwwwwwwwwwwwwww

#include<stdio.h>
#include<string.h>

struct Card{
	char shape[3];
	int num;
};

struct Player{
	int money;
	char * name;
	struct Card card1;
	struct Card card2;
};

void main()
{
	struct Card deck[40];
	struct Card deck2[52];
	int i, k;
	k = 1;
	for(i = 0; i < 40; i++){
		
		if(i % 4 == 0){
			deck[i].num = k;
			strcpy(deck[i].shape, "��");
			k++;
		}
	}
	k = 1;
	for(i = 0; i < 40; i++){
		if(i % 4 == 1){
			deck[i].num = k;
			strcpy(deck[i].shape, "��");
			k++;
		}
	}
	k = 1;
	for(i = 0; i < 40; i++){
		if(i % 4 == 2){
			deck[i].num = k;
			strcpy(deck[i].shape, "��");
			k++;
		}
	}
	k = 1;
	for(i = 0; i < 40; i++){
		if(i % 4 == 3){
			deck[i].num = k;
			strcpy(deck[i].shape, "��");
			k++;
		}
	}

	for(i = 0; i < 40; i++){
			if(i % 4 == 0){
				printf("%s, %d \t", deck[i].shape, deck[i].num);
			}
	}
	printf("\n");
	for(i = 0; i < 40; i++){
			if(i % 4 == 1){
				printf("%s, %d \t", deck[i].shape, deck[i].num);
			}
	}
	printf("\n");
	for(i = 0; i < 40; i++){
			if(i % 4 == 2){
				printf("%s, %d \t", deck[i].shape, deck[i].num);
			}
	}
	printf("\n");
	for(i = 0; i < 40; i++){
			if(i % 4 == 3){
				printf("%s, %d \t", deck[i].shape, deck[i].num);
			}
	}
	printf("\n");


}