#include <stdio.h>
void hanoi(int n, char from, char by, char to);

int main() {
	int num;
	printf("������ ���� : ");
	scanf("%d", &num); //3 ������ ���� 3��
	hanoi(num, 'A', 'B', 'C');
	return 0;
}

void hanoi(int n, char from, char by, char to) {
	if (n == 1)
		printf("%c���� ���� %d��(��) %c�� �ű�\n", from, n, to);
	else {
		hanoi(n - 1, from, to, by);
		printf("%c���� ���� %d��(��) %c�� �ű�\n", from, n, to);
		hanoi(n - 1, by, from, to);
	}
}
