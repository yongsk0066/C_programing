#include <stdio.h>

void print() {
	static int count = 0;
	count++;
	printf("Hello World\n%d\n", count);
}

int main() {
	int n;
	printf("�ݺ� Ƚ���� �Է��ϼ��� : ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) print();

	return 0;
}