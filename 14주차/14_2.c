#include <stdio.h>

void menu(void);

int latte(int x);
int ccapu(int x);
int ame(int x);

void menu(void)
{
	printf("�մ� �ֹ��Ͻðڽ��ϱ�? (ī���:2000, īǪġ��:3000, �Ƹ޸�ī��:1000)\n");
	printf("[1] ī��� [2] īǪġ�� [3] �Ƹ޸�ī�� [0] �׸���ų����.\n> ");
}

int main(void)
{
	int order, result;
	int value = 0, num[3] = { 0, 0, 0 };

	int(*pf[4])(int) = { latte, ccapu, ame };

	while (1)
	{
		while (1)
		{
			menu();

			scanf("%d", &order);

			if (!order)   break;
			else if (order < 0 || order > 3)   printf("�ٽ� �Է����ּ���.\n");
		}

		pf[order](*num + (order - 1));

		if (num[0] || num[1] || num[2])
		{
			printf("[�ֹ� ����]\n");
			printf("�޴�\t\t����\t����\n");
			printf("----------------------------\n");

			if (num[0])   printf("ī���\t%d\t%d\n", num[0], num[0] * 2000);
			if (num[1])   printf("īǪġ��\t%d\t%d\n", num[1], num[1] * 3000);
			if (num[2])   printf("�Ƹ޸�ī��\t%d\t%d\n", num[2], num[2] * 1000);

			printf("----------------------------\n");
			printf("�� ����: %d��\n\n", num[0] * 2000 + num[1] * 3000 + num[2] * 1000);
		}
	}

	return 0;
}

int latte(int x)
{
	return x++;
}

int ccapu(int x)
{
	return x++;
}

int ame(int x)
{
	return x++;
}