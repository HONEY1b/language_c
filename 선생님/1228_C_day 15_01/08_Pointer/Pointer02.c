#include <stdio.h>
// �Ϲݺ��� ǥ�� ==> int a;   a ==>�� , &a ==>�ּ�
// �����ͺ��� ǥ�� ==>int* p; p ==>�� , *p ==> ����Ű�°��� �� , &p ==>�ּ�
void main(){
	int     a = 100;
	int*    p = 0;  // ->
	int		b;
	b = a;
	p = &a;

	printf("%d\n" , p);
	printf("%d\n" , &a);
	printf("%d\n" , a);
	printf("%d\n" , *p);

	*p = 200;

	printf("%d\n" , p);
	printf("%d\n" , &a);
	printf("%d\n" , a);
	printf("%d\n" , *p);

}