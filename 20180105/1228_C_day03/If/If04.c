// ����) ���� �Ѱ��� �Է¹ް�, ¦��,Ȧ��/���,���� ���
// ����) ���� �ΰ��� �Է¹ް�, ��Һ񱳸� ���
// ����) ���� �ΰ��� �Է¹ް�, ���� ��� �������� ��� ���࿡ �����ϳ��� 0�̶�� "0���� ���� �� ����" ���
// ����) ����ö����� ������ ����غ���.
/* [��Ģ]
	�⺻ : 1~5 ������ -> 600��
	�⺻ : 6~10 ������ -> 700��
	�߰���� : 10���������� 2������ �߰��Ҷ����� 50�� �߰�
	ex) 13 -> 800��, 8 -> 700��



*/

#include<stdio.h>

void main()
{
	int temperature;
	int a, b;
	int a_line = 600, b_line = 700, ad, ad2, ad3, cost;

	printf("�µ��� �Է��ϼ��� : ");
	scanf("%d", &temperature);

	if(temperature > 100) printf("��ü \n");
	else if (temperature <= 100 && temperature > 50) printf("������ �� \n"); //�߰�����
	else if (temperature <= 50 && temperature > 0) printf("�������� �� \n"); //�߰�����
	else printf("����"); // ���� ������ ���� ������ ��

	printf("����) ���� �Ѱ��� �Է¹ް�, ¦��,Ȧ��/���,���� ��� \n");
	printf("type a number :");
	scanf("%d", &a);

	if(a > 0)
	{
		if(a % 2 == 0) printf ("���/¦�� \n");
		else printf("���/Ȧ�� \n");
	}
	else
	{
		if(a % 2 == 0) printf ("����/¦�� \n");
		else printf("����/Ȧ�� \n");
	}
	
	printf("����) ���� �ΰ��� �Է¹ް�, ��Һ񱳸� ��� \n");
	printf("type two numbers : ");
	scanf("%d %d", &a, &b);

	if (a == b) printf("%d �� %d �� ����. \n", a, b);
	else if (a < b) printf("%d �� %d ���� �۴�. \n", a, b);
	else if (a > b) printf("%d �� %d ���� ũ��. \n", a, b);

	printf("����) ���� �ΰ��� �Է¹ް�, ���� ��� �������� ��� ���࿡ �����ϳ��� 0�̶�� \"0���� ���� �� ����\" ��� \n");

	if((a == 0) || (b == 0)) printf("0���� ���� �� ����. \n");
	else 
	{
		if (a < b)
			printf("%d �� %d �� ���� �� : %d, ������ : %d", b, a, b/a, b%a);
		else
			printf("%d �� %d �� ���� �� : %d, ������ : %d", a, b, a/b, a%b);
	}

	printf("����) ����ö����� ������ ����غ���. \n");
	printf("�� ������ �������� �Է��Ͻÿ� : ");
	scanf("%d", &a);

	if ((a >= 1) && (a <= 5))
		printf("%d��", a_line);
	else if ((a >= 6) && (a <= 10))
		printf("%d��", b_line);
	else
	{
		ad = a - 10;
		ad2 = ad / 2;
		ad3 = ad % 2;
		cost = ad2 * 50;

		if(ad3 == 0)
			printf("��� : %d \n", cost+b_line);
		else
			printf("��� : %d \n", cost+b_line+50);
	}
}// end of main