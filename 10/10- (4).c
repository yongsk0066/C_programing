//2015111888 ��ǰ������а� ��뼮

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int randNums[100];

	srand((unsigned)time(NULL));
	for (int i = 0; i < 100; i++) randNums[i] = (rand() % 10);
	for (int i = 0; i < 10; i++)
	{
		stat(randNums, i);
	}
	
}
int stat(int a[], int b)
{
	int count = 0;
	double av = 0;
	for (int i = 0; i < 100; i++)
	{	
		if (a[i] == b)
			count++;
	}
	av = count/100.0;
	printf("%d �� ���� ���� : %4d  ���� Ȯ�� : %.2f\n", b, count, av);
}