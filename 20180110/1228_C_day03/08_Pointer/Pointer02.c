#include<stdio.h>
// �Ϲ� ���� ǥ�� -> int a;		a-> ��, &a -> �ּ� //*a; -> �Ϲ� ������ �Ұ���
// ������ ���� ǥ�� -> int* p;	p-> ��, *p -> ����Ű�� ���� ��, &p -> �ּ�

void main()
{
	int		a = 100;
	int*	p = 0; // ȭ��ǥ�� ����
	int b = 200;

	b = a;
	p = &a;
	
	printf("%d \n",p);
	printf("%d \n",&a);
	printf("%d \n",a);
	printf("%d \n",*p);

	*p = 200; // p�� ����Ű�� ��(a)�� ���� 200���� �ٲ�

	printf("%d \n",p);
	printf("%d \n",&a);
	printf("%d \n",a);
	printf("%d \n",*p);

}