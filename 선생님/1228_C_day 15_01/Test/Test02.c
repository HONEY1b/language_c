#include <stdio.h>

void main(){	
	int second;
	int a,b,c;
	int num1,num2,num3;
	int total , avr;
	//����) + , - , * , / �� ����ϰ� ����غ��� (%d�� ���ڿ� �ٻ���غ���)
	//��) 20 + 2 = 22 
	printf("%d + %d = %d\n" , 10,20,10+20); 
	printf("%d - %d = %d\n" , 10 ,20 ,10-20);
	printf("ȫ�浿�� ���̴�  %d ���̰� Ű�� %d cm �Դϴ� \n" , 20, 170);	
	//����) �ʸ� �Է¹ް� �� �ʷ� ����ϼ���. (ex => �Է� :100 , ��� : 1�� 40��);
	// scanf("%d\n"
	// scanf("%d ,%d" , &a , &b);
	printf("�ʸ� �Է����ּ��� >>> ");
	scanf("%d" , &second);
	printf("%d �� ==> %d �� %d ��\n" , second , second/60, second%60);
	//����) ���� abc �� �̿��ؼ� a �� b �� ���� ���� ��ȯ�غ�����. ��� a = 20 , b = 10
	// ��Ʈ ) �Ķ����ſ� Ŀ�� �� ������ſ� ������ ��ȯ�غ�����. ����
	a = 10; // Ŀ��
	b = 20; // ����
	c = 0;  // ����
	printf("a >>> %d ,b >>> %d\n" ,a,b);  
	c = a;
	a = b;
	b = c;
	printf("a >>> %d ,b >>> %d\n" ,a,b);  
	//����) ���� 3���� �Է¹ް� ���հ� ����� ����غ�����.
	printf("���� 3�� �� �Է����ּ��� >>> ");
	scanf("%d %d %d",&num1 ,&num2, &num3); 
	total = num1 + num2 + num3;
	avr = total/3;
	printf("�Է¹������� >>> %d ,%d, %d , ��Ż >>> %d , ��� >>> %d\n",num1,num2,num3,total,avr);	
}
