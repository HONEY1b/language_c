#include <stdio.h>
#include <string.h>
struct Card{
	char shape[3];
	int num;
};
struct Player{
	char * name;
	char name[20];
	int money;	
	struct Card card1;
	struct Card card2;
};
void main(){
	struct Player * p1;
	struct Card deck[40];
	struct Card deck2[52];
	int i;
	deck[0].num = 1;
	strcpy(deck[0].shape , "♥");
	deck[1].num = 2;
	strcpy(deck[1].shape , "♠");
	deck[2].num = 3;
	strcpy(deck[2].shape , "◆");
	deck[3].num = 4;
	strcpy(deck[3].shape , "♣");
	for(i = 0; i < 40; i++){
		deck[i].num = i;
	}
	for(i = 0; i < 40; i++){
		printf("%d\t" , deck[i].num);
		if(i%10==9)
		{
			printf("\n");
		}
	}
	////문제 1) deck 에 카드를 다 저장해보자~출력
	//struct Player p1;
	//struct Player p2;
	//p1.card1 = deck[0];
	//p1.card2 = deck[1];
	//p2.card1 = deck[2];
	//p2.card2 = deck[3];
}