// 2015111888 ��ǰ������а� ��뼮
// ���� 5��

#include <stdio.h>
int result(int num);

int main(void)
{
	int num;
	printf("������ �Է��Ͻÿ� : ");
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