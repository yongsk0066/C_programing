//2015111888 ��ǰ������а� ��뼮

#include <stdio.h>
int lineUp(int a[]);


int main(void)
{
	int score[10], i;
	printf("�л����� ���� : ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &score[i]);
	}
	lineUp(score);
	printf("�ְ��� : %d\n", score[9]);
	printf("������ : %d\n", score[0]);
}

int lineUp(int a[])
{
	int i,j, now, temp;
	for (i = 0; i < 9; i++)
	{	
		now = i;
		for (j = i+1; j<10; j++)
			if (a[j] < a[now])now = j;
		temp = a[i];
		a[i] = a[now];
		a[now] = temp;	
	}
}

