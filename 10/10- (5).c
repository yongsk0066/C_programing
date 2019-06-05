//2015111888 식품생명공학과 장용석

#include <stdio.h>

int main(void)
{
	int list1[5], list2[5];

	printf("배열 1의 원소 5개를 입력하시오 : ");
	for (int i = 0; i < 5; i++)
		scanf("%d", &list1[i]);
	printf("배열 2의 원소 5개를 입력하시오 : ");
	for (int i = 0; i < 5; i++)
		scanf("%d", &list2[i]);

	cap(list1, list2);
}

int cap(int a[], int b[])
{
	printf("교집합 : ");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			if (a[i] == b[j])
				printf("%d ", a[i]);
	}
	printf("\n\n");
}