// ����) ������ 2���� ����غ�����.
// ����) ���� 6�� ���� 8�� ���� �����ϰ� ���
// ����) while���� for���� ����ؼ� ������ ��ü�� ����غ�����.

#include<stdio.h>

/*
	1. while -> Ű����
	2. (����) -> ������ ���̸� {���๮ ����}
	3. {���๮}

*/

// 1 -> ��, 0 -> ����
// ������� : break -> �ݺ����� ��� �����Ų��.
// ������� : continue -> �ݺ����� �������� �ٷ� �̵��Ѵ�. ��, continue �Ʒ��ִ� ���๮���� �����Ѵ�.

void main()
{
	int num1 = 0;
	int a, b;
	while(1) // ���ѹݺ�
	{
		printf("�ݺ� \n");
		num1 += 1; // num1++; // num1 = num1 + 1;
		if(num1 >= 10){
			break;
		}
	}

	printf("����) ������ 2���� ����غ�����. \n");
	a = 2; b = 1;
	while(1)
	{
		if(b>9) break;
		printf("%d * %d = %d \n", a, b, a*b);
		b++;
	}

	/*
	while(1)
	{
		b += 1;
		printf("%d * %d = %d \n", a, b, a*b);
		if(b >= 9) {break;}
	}
	*/

	printf("����) ���� 6�� ���� 8�� ���� �����ϰ� ��� \n");
	b = 1;

	while(1)
	{
		if(b>9) break;
		else if((a * b != 6) && (a * b != 8)) 
		{
			printf("%d * %d = %d \n", a, b, a*b);
		}
		b++;
	}
	
	/*
		while(1)
		{
			b += 1;
			if((a * b == 6) || (a * b == 6)) {continue;}
			printf("%d * %d = %d \n", a, b, a*b);
			if(b >= 9) {break;}
		}
	
	*/

	printf("����) while���� for���� ����ؼ� ������ ��ü�� ����غ�����. \n");
	a = 2; b = 1;

	while(1)
	{
		for(b = 1; b <10; b++)
		{
			printf("%d * %d = %d \n", a, b, a*b);
		}
		a++;
		if(a>9) break;
	}


} // end of main