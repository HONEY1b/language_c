#include <stdio.h>
// ***�ڸ��� ATM***
// 1. �Ա�  
// 2. ���  ==> ��й�ȣ == 1234 ;
// 3. ��ȸ  ==> ��й�ȣ == 1234 ;
// 4. ����
// �ܾ� >>> 10000
void main(){
	int num = 0;int pw = 1234;int money = 10000;
	int deposit;
	while(1){
		printf("*** �ڸ��� atm ***\n");
		printf("1.�Ա�\n");
		printf("2.���\n");
		printf("3.��ȸ\n");
		printf("4.����\n");
		printf("��ȣ�� �Է��ϼ��� >>> ");
		scanf("%d" , &num);
		if (num ==1) {
			printf("�Ա��� �ݾ��� �Է��ϼ��� >>> ");
			scanf("%d" , &deposit);
			money = money + deposit;
		} 
		if (num ==2) {}
	}
}