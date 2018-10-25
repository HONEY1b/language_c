// ����) Ʈ���� ������ ����� ���� \\\\\\\\\\\\\\\\\\\

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
	struct Card deck[40]; // ī�� 40�� ����
	struct Card deck2[52];
	struct Player * pplayer; // �÷��̾�� �����Ҵ�
	struct Card temp; // ī�� ���� �� �ӽ�����ī��
	int win_player = 0, win_num;
	int rand_index = 0; // ���ý� ���� �ڸ� �ε���
	int i;
	int player_size; // �÷��̾� ����
	int card_size = 0; // �÷��̾� ���ڸ�ŭ ī������� ����
	
	srand(time(0));

	for(i = 0; i < 40; i++){ // ī�� ���� // 4�徿 ���� ���ڸ� ������ �ִ�. // 10�徿 ��������� ������ �ִ�.
		
		if(i / 10 == 0){
			strcpy(deck[i].shape, "��");
		}
		if(i / 10 == 1){
			strcpy(deck[i].shape, "��");
		}
	
		if(i / 10 == 2){
			strcpy(deck[i].shape, "��");
		}
	
		if(i / 10 == 3){
			strcpy(deck[i].shape, "��");
		}
		deck[i].num = i % 10 +1;
	}

	for(i = 0; i < 40; i++){ // ī�� ���
		printf("%s, %d \t", deck[i].shape, deck[i].num);
		if(i % 10 == 9){
			printf("\n");
		}
	}

	printf("\n");

	for(i = 0; i < 1000; i++){ // ī�� ����(1000��)
		rand_index = rand() % 40;
		temp = deck[0];
		deck[0] = deck[rand_index];
		deck[rand_index] = temp;
	}

	for(i = 0; i < 40; i++){ // ī�� ���
		printf("%s, %d \t", deck[i].shape, deck[i].num);
		if(i % 10 == 9){
			printf("\n");
		}
	}

	// ���� ����
	// ���� ���� ������ �¸�
	// ������ �Ұ��ΰ�
	// �̱�� money ����


	printf("\n");
	printf("�÷��̾� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &player_size);
	pplayer = (struct Player*)malloc(sizeof(struct Player) * player_size); // �÷��̾� ���� �����Ҵ� 
	
	for(i = 0; i < player_size; i++){
		pplayer[i].card1 = deck[card_size + i];
		pplayer[i].card2 = deck[card_size + i + 1];
		card_size += 1;
	}
	for(i = 0; i < player_size; i++){
		printf("%s%d \n", pplayer[i].card1.shape, pplayer[i].card1.num);
		printf("%s%d \n", pplayer[i].card2.shape, pplayer[i].card2.num);
	}

	for(i = 0; i <  player_size; i++){ // ���� ������ ���� �� ã��
		if(win_player < pplayer[i].card1.num + pplayer[i].card2.num){
			win_player = pplayer[i].card1.num + pplayer[i].card2.num;
			win_num = i;
		}
	}

	printf("win : %d, %d�� �÷��̾� �� \n", win_player, win_num + 1 );
}