#include <stdio.h>

int isOdd(int num) {
	if (num % 2 == 0) return 0;
	else return 1;
}

int main() {
	int num[20];
	int new_num[2][10];
	int oddIndex = 0, evenIndex = 0;

	for (int i = 0; i < 20; i++) num[i] = i + 1;
	printf("�迭 : ");
	for (int i = 0; i < 20; i++) printf("%d ", num[i]);
	printf("\n");

	for (int i = 0; i < 20; i++) {
		if (isOdd(num[i])) new_num[0][oddIndex++] = num[i];
		else new_num[1][evenIndex++] = num[i];
	}
	printf("���ο� �迭�� 1�� : ");
	for (int i = 0; i < 10; i++) printf("%d ", new_num[0][i]);
	printf("\n");

	printf("���ο� �迭�� 2�� : ");
	for (int i = 0; i < 10; i++) printf("%d ", new_num[1][i]);
	printf("\n");
	return 0;
}