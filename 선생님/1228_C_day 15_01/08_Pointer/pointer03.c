#include <stdio.h>
// �Ϲݺ��� ǥ�� ==> int a;   a ==>�� , &a ==>�ּ�
// �����ͺ��� ǥ�� ==>int* p; p ==>�� , *p ==> ����Ű�°��� �� , &p ==>�ּ�
void test(int *p  , int *p2){
	int temp;
	temp = *p;
	*p = *p2;
	*p2 = temp;
}
void main(){
	int     num1 = 100;
	int*    p1 = 0; 
	int		num2 = 200;
	int*	p2 = 0;
	int temp;
	p1 = &num1;
	p2 = &num2;
	temp = num1;
	num1 = num2;
	num2 = temp;
	//���� 1) p1 , p2 �� �ذ��غ�����.
	printf("num1 >>> %d\n" ,num1);  // 100
	printf("num2 >>> %d\n" ,num2);  // 200
	//��ȭ ���� 2) �Լ��� num1 num2 ���� ��ȯ�غ�����.
	test(&num1 , &num2);
}