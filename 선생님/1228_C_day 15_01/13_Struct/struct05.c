#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
struct Card{
	char shape[3];
	int num;
};
struct Player{
	char * name;
	int money;	
	struct Card card1;
	struct Card card2;
};
void main(){
	struct Card deck[40];  // 카드 40장 저장
	struct Player * pplayer; // 플레이어는 동적할당 
	int i; 
	struct Card temp; // 카드 셔플시 임시저장카드
	int rand_index =0; // 셔플시 임의 자리 인덱스 
	int player_size; // 플레이어 숫자. 
	int card_size =0;  // 플레이어 숫자 만큼 카드 사이즈 증가 
	int win_player = 0;
	int win_playernum = 0;
	srand(time(0));
	for(i = 0; i < 40; i++){  //카드 저장 4장씩 같은숫자를 가지고있다. 10장씩 같은모양을 가지고있다.
		if(i/10 ==0){
			strcpy(deck[i].shape , "♠");
		}
		if(i/10 ==1){
			strcpy(deck[i].shape , "♥");
		}
		if(i/10 ==2){
			strcpy(deck[i].shape , "◆");
		}
		if(i/10 ==3){
			strcpy(deck[i].shape , "♣");
		}
		deck[i].num = i % 10 + 1 ;

	}
	for(i = 0; i < 40; i++){	// 출력
		printf("%s%d\t" , deck[i].shape , deck[i].num);
		if(i%10==9){
			printf("\n");
		}
	}
	printf("\n");
	for(i = 0; i < 1000; i++){  // 셔플(1000번)
		rand_index  = rand() % 40;
		temp = deck[0];
		deck[0] = deck[rand_index];
		deck[rand_index] = temp;
	}
	for(i = 0; i < 40; i++){	// 출력
		printf("%s%d\t" , deck[i].shape , deck[i].num);
		if(i%10==9){
			printf("\n");
		}
	}
	// 게임시작 
	printf("\n");
	printf("플레이어 숫자를 입력하세요 >>> ");
	scanf("%d" , &player_size);
	pplayer = (struct Player*) malloc(sizeof(struct Player) * player_size); // 플레이어 숫자 동적할당.
	for(i = 0; i < player_size; i++ ){ // 카드나눠주기
		pplayer[i].card1 = deck[card_size + i];
		pplayer[i].card2 = deck[card_size + i + 1];
		card_size += 1;
	}
	for(i = 0; i < player_size; i++){  // 플레이어 출력 
		printf("%s%d \n" , pplayer[i].card1.shape , pplayer[i].card1.num);
		printf("%s%d \n" , pplayer[i].card2.shape , pplayer[i].card2.num);
	}
	for(i = 0; i < player_size; i++){ // 가장 점수가 높은쪽 찾기 
		if(win_player < pplayer[i].card1.num + pplayer[i].card2.num ){
			win_player = pplayer[i].card1.num + pplayer[i].card2.num;
			win_playernum = i;
		}
	}
	printf("win >> %d\n%d번플레이어 승리\n" , win_player , win_playernum + 1);
}