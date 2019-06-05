#include <stdio.h>
void hanoi(int n, char from, char by, char to);

int main() {
	int num;
	printf("원반의 갯수 : ");
	scanf("%d", &num); //3 넣으면 원반 3개
	hanoi(num, 'A', 'B', 'C');
	return 0;
}

void hanoi(int n, char from, char by, char to) {
	if (n == 1)
		printf("%c에서 원반 %d를(을) %c로 옮김\n", from, n, to);
	else {
		hanoi(n - 1, from, to, by);
		printf("%c에서 원반 %d를(을) %c로 옮김\n", from, n, to);
		hanoi(n - 1, by, from, to);
	}
}
