#include <stdio.h>

void add(int a[], int size) {
	for (int i = 0; i < size; i++) a[i]++; //�� ��� ���� 1�� �����ش�.
	for (int i = 0; i < size; i++) printf("%d ", a[i]); //��� 12345678910
}

int add2(int a) {
	a++; //b�� ���� 1�� �����ش�
	printf("%d\n", a); //��� 11
	return a; //�Լ� ��ȯ��->b�� ���� 1�� ���� ��
}

int main() {
	int a[10];
	for (int i = 0; i < 10; i++) a[i] = i; //ũ�Ⱑ 10�� �迭�� 0���� 9������ ���� �־���
	for (int i = 0; i < 10; i++) printf("%d ", a[i]);//�迭 a ��� 0123456789
	printf("\n");
	add(a, 10); //�迭 ũ��� �Բ� ��� a�� �ּҰ��� ����
	printf("\n");
	for (int i = 0; i < 10; i++) printf("%d ", a[i]); //�迭 a ��� 12345678910
	//�Լ��� ���ڷ� �迭 �̸�(�ּҰ�)�� �־��� ������ ������ ���� ���� ���� �� �� �ִ�.
	printf("\n");

	int b = 10;
	printf("%d\n", b); //b��� 10
	int c = add2(b); //add2(b)�� ��ȯ���� c�� �����Ѵ�.
	printf("%d\n", b); //add2�� ���ڿ� b�� ���� �����߱� ������ b�� ���� ���� ������ �ʴ� ���� �� �� �ִ�.
	printf("%d\n", c); //��ȯ�� a�� �������� c�� ���� 11�� ���� �� �� �ִ�.

	return 0;
}