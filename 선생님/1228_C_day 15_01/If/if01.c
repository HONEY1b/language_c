#include <stdio.h>
void main(){
	// ���Կ�����( a = b ) >>> b �ǰ��� a �� ���������Ѵ�.
	// ���������( + - * / %)
	// �񱳿�����( ���̸� 1 , �����̸� 0)
	// 1.  a == b  >>> a �� b �� ����
	// 2.  a != b  >>> a �� b �� �ٸ���.
	// 3.  a <  b  >>> a �� b ���� �۴�.
	// 4.  a >  b  >>> a �� b ���� ũ��.
	// 5.  a >= b  >>> a �� b ���� ũ�ų� ����.
	// 6.  a <= b  >>> a �� b ���� �۰ų� ����.
	// ����) ���� 1�̳������� a�� b ���� �ٲ㺸����.
	int a;
	int b;
	int result;
	a = 10;
	b = 10;
	result = (a == b);
	printf("%d\n" , result);
	a = 10;
	b = 20;
	result = (a != b);
	printf("%d\n" , result);
	a = 10;
	b = 20;
	result = (a < b);
	printf("%d\n" , result);
	a = 100;
	b = 20;
	result = (a > b);
	printf("%d\n" , result);
}