//2015111888 ��ǰ������а� ��뼮


#include <stdio.h>
void add(int a[], int size) {
	for (int i = 0; i < size; i++) a[i]++;
	for (int i = 0; i < size; i++) printf("%d ", a[i]);
}
int add2(int a) {
	a++;
	printf("%d\n", a);
	return a;
}
int main() {
	int a[10];
	for (int i = 0; i < 10; i++) a[i] = i;
	for (int i = 0; i < 10; i++) printf("%d ", a[i]); // a[10] = {0, 1, 2, 3 ,4, 5, 6, 7, 8 ,9} �� ��µ�
	printf("\n");
	add(a, 10);  //�Լ� add�� ����Ǿ� 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 �� ��µ�
	printf("\n");
	for (int i = 0; i < 10; i++) printf("%d ", a[i]); // �迭�� �����̵����� �ٲ� �� �״��  1, 2, 3, 4, 5, 6, 7, 8, 9, 10 �� ��µ�
	printf("\n");
	int b = 10; //�߰��� �����ص� �ǳ���?
	printf("%d\n", b); // b = 10, 10�� ��µ�
	int c = add2(b); //add2���� 10++���� 11�� ��µ� �׸��� c�� 11�� �ʱ�ȭ��
	printf("%d\n", b); //b�� �״�� 10�� ��µ�
	printf("%d\n", c); //c=11�̹Ƿ� 11�� ��µ�
	return 0;
}