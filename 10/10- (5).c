//2015111888 ��ǰ������а� ��뼮

#include <stdio.h>

int main(void)
{
	int list1[5], list2[5];

	printf("�迭 1�� ���� 5���� �Է��Ͻÿ� : ");
	for (int i = 0; i < 5; i++)
		scanf("%d", &list1[i]);
	printf("�迭 2�� ���� 5���� �Է��Ͻÿ� : ");
	for (int i = 0; i < 5; i++)
		scanf("%d", &list2[i]);

	cap(list1, list2);
}

int cap(int a[], int b[])
{
	printf("������ : ");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			if (a[i] == b[j])
				printf("%d ", a[i]);
	}
	printf("\n\n");
}