#include <stdio.h>
void main(){
	int money = 10000;
	int number = 0;
	int i=0;
	for(i = 0; i < 20; i++){
		printf("***ȫ�����***\n 1. ¥��� 6000�� \n 2. «��   8000�� \n 3. ������ 12000��\n");
		printf("�ֹ���ȣ�� ����ּ��� >>> ");
		scanf("%d" , &number);
		if(number == 1){
			if(money > 6000){
				money = money - 6000;
			}else{
				printf("%d ��ŭ �ݾ��� �����մϴ�" , 6000- money);
			}
		}
		else if(number == 2){
			if(money > 8000){
				money = money - 8000;
			}
		}
		else if(number ==3){
		}
	}
	printf("����\n");
	// �ݾ��� �����մϴ�. �Ž����� ���Դϴ� . ¥��� 1���� �ֹ��߽��ϴ�.
	// ��ȭ���� )) break �������� �ܾ��� �����ϸ� for���� ������Ѻ�����.
	// ��ȭ���� )) money == �ʸ� , ¥����� 3�׸��� ���ȸ��� ������Ѻ�����.

}