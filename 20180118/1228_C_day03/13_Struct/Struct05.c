// 문제) 트럼프 게임을 만들어 보자 \\\\\\\\\\\\\\\\\\\

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

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
	struct Card deck[40]; // 카드 40장 저장
	struct Card deck2[52];
	struct Player * pplayer; // 플레이어는 동적할당
	struct Card temp; // 카드 셔플 시 임시저장카드
	int win_player = 0, win_num;
	int rand_index = 0; // 셔플시 임의 자리 인덱스
	int i;
	int player_size; // 플레이어 숫자
	int card_size = 0; // 플레이어 숫자만큼 카드사이즈 증가
	
	srand(time(0));

	for(i = 0; i < 40; i++){ // 카드 저장 // 4장씩 같은 숫자를 가지고 있다. // 10장씩 같은모양을 가지고 있다.
		
		if(i / 10 == 0){
			strcpy(deck[i].shape, "♥");
		}
		if(i / 10 == 1){
			strcpy(deck[i].shape, "◆");
		}
	
		if(i / 10 == 2){
			strcpy(deck[i].shape, "♠");
		}
	
		if(i / 10 == 3){
			strcpy(deck[i].shape, "♣");
		}
		deck[i].num = i % 10 +1;
	}

	for(i = 0; i < 40; i++){ // 카드 출력
		printf("%s, %d \t", deck[i].shape, deck[i].num);
		if(i % 10 == 9){
			printf("\n");
		}
	}

	printf("\n");

	for(i = 0; i < 1000; i++){ // 카드 셔플(1000번)
		rand_index = rand() % 40;
		temp = deck[0];
		deck[0] = deck[rand_index];
		deck[rand_index] = temp;
	}

	for(i = 0; i < 40; i++){ // 카드 출력
		printf("%s, %d \t", deck[i].shape, deck[i].num);
		if(i % 10 == 9){
			printf("\n");
		}
	}

	// 게임 시작
	// 숫자 합이 높으면 승리
	// 베팅을 할것인가
	// 이기면 money 증가


	printf("\n");
	printf("플레이어 숫자를 입력하세요 : ");
	scanf("%d", &player_size);
	pplayer = (struct Player*)malloc(sizeof(struct Player) * player_size); // 플레이어 숫자 동적할당 
	
	for(i = 0; i < player_size; i++){
		pplayer[i].card1 = deck[card_size + i];
		pplayer[i].card2 = deck[card_size + i + 1];
		card_size += 1;
	}
	for(i = 0; i < player_size; i++){
		printf("%s%d \n", pplayer[i].card1.shape, pplayer[i].card1.num);
		printf("%s%d \n", pplayer[i].card2.shape, pplayer[i].card2.num);
	}

	for(i = 0; i <  player_size; i++){ // 가장 점수가 높은 쪽 찾기
		if(win_player < pplayer[i].card1.num + pplayer[i].card2.num){
			win_player = pplayer[i].card1.num + pplayer[i].card2.num;
			win_num = i;
		}
	}

	printf("win : %d, %d번 플레이어 승 \n", win_player, win_num + 1 );
}