// 2015111888 식품생명공학과 장용석
// 문제 5번

#include <stdio.h>
int result(int num);

int main(void)
{
	int num;
	printf("정수를 입력하시오 : ");
	scanf("%d", &num);

	result(num);
}

int result(int num)
{
	int rest;
	if (num > 0)
	{
		printf("%d", num % 10);
		rest = num / 10;
		result(rest);
	}

}