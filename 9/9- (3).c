// 2015111888 식품생명공학과 장용석
// 문제 3번

#include <stdio.h>
int fibonacci(int n);
int printfib(int n);

int main(void)
{
	int n;
	printf("몇 개의 항을 출력할 지 입력하시오 : ");
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
