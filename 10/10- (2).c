//2015111888 ��ǰ������а� ��뼮


#include <stdio.h>
void isSame(int a[], int b[]);


int main(void)
{
	int list1[5], list2[5];

	printf("�迭 1�� ���� 5���� �Է��Ͻÿ� : ");
	for (int i = 0; i < 5; i++)
		scanf("%d", &list1[i]);
	printf("�迭 2�� ���� 5���� �Է��Ͻÿ� : ");
	for (int i = 0; i < 5; i++)
		scanf("%d", &list2[i]);

	isSame(list1, list2);
	return 0;
}

void isSame(int list1[5], int list2[5])
{	
	int flag = 1;
	for (int i = 0; i < 5; i++)
	{
		if (list1[i] != list2[i])
			flag = 0;
	}
	flag ? printf("���� �迭�Դϴ�.") : printf("�ٸ��迭�Դϴ�");
	printf("\n\n");
}