//2015111888 ��ǰ������а� ��뼮

#include <stdio.h>
void swap1(int x, int y);
void swap2(int *px, int *py);
int main(void)
{
	int a = 100, b = 200;
	printf("main �Լ� : a=%d b=%d\n", a, b); //a = 100, b = 200 ���
	swap1(a, b); //swap1�Լ� x = 101 y = 201 ���
	printf("main �Լ� : a=%d b=%d\n", a, b); //a,b�� ������ ���� ���� �״�� a = 100, b = 200 ���
	swap2(&a, &b); //a, b�ּҿ��� ���� ������  x = 101 y = 201 ���
	printf("main �Լ� : a=%d b=%d\n", a, b); //a,b���� �ּҿ��� �����Ǿ������� a = 101 b = 201 �� ��µ�
	return 0;
}
void swap1(int x, int y)
{
	x++;
	y++;
	printf("swap1�Լ� : x=%d y=%d\n", x, y);
}
void swap2(int *px, int *py)
{
	(*px)++;
	(*py)++;
	printf("swap2�Լ� : x=%d y=%d\n", *px, *py);}