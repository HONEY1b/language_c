// ����) ���� 3���� �Է¹ް�, ���հ� ����� ����غ�����.
// ����) ���� �ϳ��� �Է¹ް�, "���", "����"�� ����غ�����.
// ����) ���� �ϳ��� �Է¹ް�, "Ȧ��", "¦��"�� ����غ�����.
// ����) ���� 0~99 ���� 3���� �Է¹ް� ���հ� ����� ���Ѵ��� ����� 60 ������ �հ� �̸��̸� ���հ�
// ����) (����) �Ѱ����̶� 60�̸��̸� ���հ� (70 70 59)==> ���հ�
// ����) ���������� ����

#include<stdio.h>

void main()
{
	
	int num1;
	int a, b, c, total; 
	double avr;
	int com_num, my_num;

	printf("����) ���� 3���� �Է¹ް�, ���հ� ����� ����غ�����. \n");
	printf("type three numbers : ");
	scanf("%d %d %d", &a,&b,&c);

	total = a + b + c;
	avr = total/3;

	printf("total : %d, avrage : %.1lf \n", total, avr);

	printf("����) ���� �ϳ��� �Է¹ް�, ���, ������ ����غ�����. \n");
	printf("type the number : ");
	scanf("%d", &num1);

	if (num1 > 0){printf("��� \n");}
	else {printf("���� \n");}

	printf("����) ���� �ϳ��� �Է¹ް�, Ȧ��, ¦���� ����غ�����. \n");
	if (num1%2 == 0) {printf("¦�� \n");}
	else {printf("Ȧ�� \n");}

	printf("���� 0~99 ���� 3���� �Է¹ް� ���հ� ����� ���Ѵ��� ����� 60 ������ �հ� �̸��̸� ���հ� \n");
	printf("type your three scores : ");
	scanf("%d %d %d", &a,&b,&c);

	total = a + b + c;
	avr = total/3;

	if((a >= 60)&&(b >= 60)&&(c >= 60))
	{
		if(avr >= 60) {printf("�հ� \n");}
		else {printf("���հ� \n");}
	}//1�� if
	else {printf("���հ� \n");}
	
	printf("����) �������������� \n");
	// ����1) com_num�� �׻� ����(1) �Դϴ�.
	// com_num �� my_num�� ���ؼ� ���и� ������ּ���.

	com_num = 1;

	printf("����(0), ����(1), ��(2) �߿��� �ϳ��� ����ּ���. : ");
	scanf("%d", &my_num);

	if(my_num > com_num) {printf("win \n");}
	else if(my_num = com_num) {printf("draw \n");}
	else if(my_num < com_num) {printf("lose \n");}
}