// 2015111888 ��ǰ������а� ��뼮
// ���� 3��

#include <stdio.h>
int fibonacci(int n);
int printfib(int n);

int main(void)
{
	int n;
	printf("�� ���� ���� ����� �� �Է��Ͻÿ� : ");
	scanf("%d", &n);

	printfib(n);

}
int printfib(int n)
{
	for (int i = 1; i <= n; i++)
		printf("%d ", fibonacci(i));
}

int fibonacci(int n)
{
	long sum;
	if (n == 1 || n == 2)
	{	
		return 1;
	}
	else
		sum = fibonacci(n - 1) + fibonacci(n-2);
		return sum;
}
