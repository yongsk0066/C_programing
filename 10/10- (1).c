//2015111888 ��ǰ������а� ��뼮


#include <stdio.h>

int calculator(int a[]);


int main(void)
{
	int score[10] = { 23,1,5,55,30,75,35,78,4,99 };
	int i = 0;

	printf("�л����� ���� : ");
	while (i < 10)
	{
		printf("%d ", score[i]);
		i++;
	}
	printf("\n");

	calculator(score);
	return 0;
}

int calculator(int score[])
{
	int i = 1, sum = 0;
	int max = score[0], min = score[0];
	while (i < 10)
	{
		if (score[i] > max)
			max = score[i];
		if (score[i] < min)
			min = score[i];
		sum += score[i];
		i++;
	}
	sum += score[0];

	printf("�ְ��� : %d\n", max);
	printf("������ : %d\n", min);
	printf("��� : %d\n\n", sum / 10);
	return 0;
}