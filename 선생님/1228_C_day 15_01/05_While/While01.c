#include <stdio.h>
// 1 . while ==>  Ű����
// 2 . (����)==>  ������ ���̸� {���๮ ����}
// 3 . {���๮}
// 1 ==> ��  , 0 ==> ���� 
// ������� : break ==> �ݺ����� ��� �����Ų��.
// ������� : continue ==> �ݺ����� �������� �ٷ� �̵��Ѵ�. ��, continue �Ʒ��ִ� ���๮���� �����Ѵ�.
void main(){
	int num1 = 0;
	int dan = 2;
	while(1){ // ���ѹݺ� 
		printf("�ݺ�\n");
		num1 += 1; // num++; // num1 = num1 + 1;
		if(num1 >= 10){
			break;}}
	num1 = 0;
	while(1){ 
		num1 += 1;
		printf("%d * %d = %d\n" , dan , num1 , dan * num1);
		if(num1 >= 9){break;}}
	// ���� 2)  // ���� 6 �϶��� 8�� ���� �����ϰ� ���~~
	num1 = 0;
	while(1){ 
		num1 += 1;
		if(dan * num1 == 6 || dan * num1 == 8) {continue;} // or ==> a||b : a�� ���̰ų� b�� ���̸� ��
		printf("%d * %d = %d\n" , dan , num1 , dan * num1);
		if(num1 >= 9){break;}
	}
	// ��ȭ���� ) for���� ����ؼ� 9�� ��ü�� ����غ�����. 2~9
	//���� 1) ������ 2 ���� ����غ����� (while�� ���)
	// 2 * 1 = 2
	// 2 * 2 = 4
	// 2 * 2 = 6
}