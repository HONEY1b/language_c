#include<stdio.h>
#include<string.h>

// ����ü(struct)	: ����� ���� �ڷ���
// 1. struct		: Ű����
// 2. Person		: ��������� �ڷ��� �̸�
// 3. {}			: �ڷ��� ����
// 4. ;				: ���� ����
// �����ϴ� �� : struct + ����������ڷ����̸� + ������ + ;
// ����ϴ¹� : (.) ���� �����Ѵ�. -> �̸�.���κ���

struct Person{
	char name[20];
	int age;
	char address[100];
};

void main()
{
	int				a;	// 4
	double			b;	// 8
	char			c;	// 1
	struct Person	p1;	// 124

	strcpy(p1.name, "��ö��");
	p1.age = 20;
	strcpy(p1.address, "�������");

	printf("�̸� : %s, ���� : %d, �ּ� : %s \n", p1.name, p1.age, p1.address);
	//printf("�̸� : %s, ���� : %d, �ּ� : %s \n", &p1.name[0], p1.age, &p1.address[0]);
} // end of main