//2015111888 ��ǰ������а� ��뼮

#include <stdio.h>

void menu(void);
int latte(int x);
int ccapu(int x);
int ame(int x);


void menu(void) 
{
	printf("[1] ī��� ");
	printf("[2] īǪġ�� ");
	printf("[3] �Ƹ޸�ī�� ");
	printf("[0] �׸���ų����. ");
	printf("\n");
}

int main(void)
{
	int choice, sum=0;
	int(*pf[3])(int) = { latte, ccapu, ame };
	int result[3] = { 0, 0, 0 };
	int price[3] = { 2000, 3000, 1000 };
	while (1)
	{
		printf("�մ� �ֹ��Ͻðڽ��ϱ�? ");
		printf("(ī���:2000, īǪġ��:3000, �Ƹ޸�ī��:1000)\n");

		menu();

		printf("> ");
		scanf("%d", &choice);
		printf("\n");
		if (choice == 0)
			break;
		result[choice - 1] += pf[choice-1](1);
	}

	printf("[�ֹ� ����]\n");
	printf("�޴�         ����       ����\n");
	printf("----------------------------\n");
	if(result[0] != 0) printf("ī���  %7d%10d\n", result[0], result[0] * 2000);
	if (result[1] != 0) printf("īǪġ��  %7d%10d\n", result[1], result[1] * 3000);
	if (result[2] != 0) printf("�Ƹ޸�ī��%7d%10d\n", result[2], result[2] * 1000);
	printf("----------------------------\n");
	for (int i = 0; i < 3; i++) {
		sum += result[i] * price[i];
	}
	printf("�� ���� : %d\n\n", sum);
	return 0;
}
int latte(int x) 
{
	return 1;
}
int ccapu(int x) {
	return 1;
}
int ame(int x) {
	return 1;
}