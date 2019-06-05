#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int number[100] = { 0, };
	int count[10] = { 0, };
	srand(time(NULL));

	for (int i = 0; i < 100; i++) {
		number[i] = rand() % 10;
		count[number[i]]++;
	}
	for (int i = 0; i < 10; i++) {
		printf("%dÀÌ ³ª¿Â °¹¼ö : %3d   ", i, count[i]);
		printf("³ª¿Ã È®·ü : %.2f \n", (float)count[i] / (float)100);
	}
	return 0;
}