#include <stdio.h>

int isSame(int a[], int b[], int size) {
	int flag = 1;
	for (int i = 0; i < size; i++) {
		if (a[i] != b[i]) flag = 0;
	}
	return flag;
}

int main() {
	int a[5];
	int b[5];

	printf("�迭 1�� ���Ҹ� 5�� �Է��ϼ��� : ");
	for (int i = 0; i < 5; i++) scanf("%d", &a[i]);
	printf("�迭 2�� ���Ҹ� 5�� �Է��ϼ��� : ");
	for (int i = 0; i < 5; i++) scanf("%d", &b[i]);

	if (isSame(a, b, 5)) printf("���� �迭�Դϴ�. ");
	else printf("�ٸ� �迭�Դϴ�. ");

	return 0;
}