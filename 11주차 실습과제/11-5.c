#include <stdio.h>

int main() {
	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int *parray = array;

	//规过1
	for (int i = 0; i < 10; i++) {
		parray[i]++;
	}

	//规过2
	for (int i = 0; i < 10; i++) {
		*(parray + i) = *(parray + i) + 1;
	}

	for (int i = 0; i < 10; i++) printf("%d ", array[i]);

	return 0;
}