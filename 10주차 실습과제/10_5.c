#include <stdio.h>

#define SIZE 5

int main() {
	int a[SIZE], b[SIZE];
	printf("�迭1�� ���Ҹ� 5�� �Է��ϼ��� : ");
	for (int i = 0; i < SIZE; i++) scanf("%d", &a[i]);
	printf("�迭2�� ���Ҹ� 5�� �Է��ϼ��� : ");
	for (int i = 0; i < SIZE; i++) scanf("%d", &b[i]);

	printf("������ : ");
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (a[i] == b[j]) printf("%d ", a[i]);
		}
	}
}