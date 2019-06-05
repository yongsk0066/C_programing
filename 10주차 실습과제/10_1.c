#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int max_score(int a[], int size) {
	int max = a[0];
	for (int i = 1; i < size; i++) {
		if (a[i] > max) max = a[i];
	}
	return max;
}

int min_score(int a[], int size) {
	int min = a[0];
	for (int i = 1; i < size; i++) {
		if (a[i] < min) min = a[i];
	}
	return min;
}

double mean(int a[], int size) {
	double total = 0;
	for (int i = 0; i < size; i++) total += a[i];
	return total / size;
}

int main() {
	srand((unsigned)time(NULL));
	int score[10];
	for (int i = 0; i < 10; i++) score[i] = rand() % 100 + 1;
	printf("�л����� ���� : ");
	for (int i = 0; i < 10; i++) printf("%d ", score[i]);
	printf("\n");
	printf("�ְ��� : %d\n", max_score(score, 10));
	printf("������ : %d\n", min_score(score, 10));
	printf("��� : %lf\n", mean(score, 10));
	return 0;
}