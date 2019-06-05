// 2015111888 식품생명공학과 장용석
// 문제 4번

#include <stdio.h>
int print(int n);

int main(void)
{
	int n;
	printf("반복하는 횟수를 입력하시오 : ");
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