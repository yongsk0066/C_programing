#include <stdio.h>

void result(int num) {
	if (num != 0) {
		printf("%d", num % 10);
		result(num / 10);
	}
}

int main() {
	int num;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &num);
	result(num);
}