#include <stdio.h>
void main(){
	int a;  // ���� -> �Ҽ����� ���¼� (int , long)
	int num2 , num1;
	double b; // �Ǽ� -> �Ҽ����� �ִ¼�(float , double)
	double total;
	double avr;
	// ���� �� �Ǽ��� ������ ������
	// ���� �ٸ� �ڷ��������� ������ �Ҽ�������.
	// �׷��� �ڷ����� ��ȯ�ؾߵǴµ� ����ȯ�̶�� �Ѵ�.
	// 1) �ڵ�����ȯ : ������ �ٲ��. (�Ǽ��� ������ �����ϸ� ������ �ڵ����� �Ǽ��� ��ȯ�ȴ�)
	// 2) ��������ȯ : (�ٲٰ�����ڷ���)����
	num1 = 20;
	num2 = 17;
	total = num1 + num2;  // �ڵ�����ȯ  //��ȯ���� =
	printf("total : %lf \n" , total);
	total = num1 + (double)num2; // ��������ȯ  // ��ȯ���� + 
	avr = total/2;
	printf("avr = %.10lf \n" , avr); //�Ҽ����� �� ���� �������� ���� �� ����
	printf("avr = %.3lf \n" , avr);
	printf("avr = %lf \n" , avr);
}