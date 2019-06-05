//2015111888 식품생명공학과 장용석


#include <stdio.h>
int main(void)
{
	int num[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	int evenOdd[2][10];
	int i, countEven=0, countOdd=0;

	printf("배열 : ");
	for (i = 0; i < 20; i++)
	{
		printf("%d ", num[i]);
		if (num[i] % 2 == 1)
		{
			evenOdd[0][countOdd] = num[i];
			countOdd++;
		}
		else {
			evenOdd[1][countEven] = num[i];
			countEven++;
		}
	}
	printf("\n");
	printf("새로운 배열의 1행 : ");
	for (i = 0; i < 10; i++) printf("%d ", evenOdd[0][i]);
	printf("\n");
	printf("새로운 배열의 2행 : ");
	for (i = 0; i < 10; i++) printf("%d ", evenOdd[1][i]);
	printf("\n");
}