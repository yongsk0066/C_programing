// 2015111888 ��ǰ������а� ��뼮
// ���� 4��

#include <stdio.h>
int print(int n);

int main(void)
{
	int n;
	printf("�ݺ��ϴ� Ƚ���� �Է��Ͻÿ� : ");
	scanf("%d", &n);
	print(n);
}
int print(int n)
{
	static int i;
	for (i = 1; i <= n; i++)
	{
		printf("Hello World\n");
		printf("%d\n", i);
	}
}