#include <stdio.h>

int fib(int num) {
	if (num == 0 || num == 1) return 1;
	else {
		return fib(num - 2) + fib(num - 1);
	}
}

int main() {
	int size;
	printf("�� �� ���� ����� �� �Է��ϼ��� : ");
	scanf("%d", &size);
	for (int i = 0; i < size; i++)
		printf("%d ", fib(i));
	return 0;
}