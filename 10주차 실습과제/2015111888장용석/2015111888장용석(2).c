//2015111888 식품생명공학과 장용석

#include <stdio.h>

void menu(void);
int latte(int x);
int ccapu(int x);
int ame(int x);


void menu(void) 
{
	printf("[1] 카페라떼 ");
	printf("[2] 카푸치노 ");
	printf("[3] 아메리카노 ");
	printf("[0] 그만시킬래요. ");
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
		printf("손님 주문하시겠습니까? ");
		printf("(카페라떼:2000, 카푸치노:3000, 아메리카노:1000)\n");

		menu();

		printf("> ");
		scanf("%d", &choice);
		printf("\n");
		if (choice == 0)
			break;
		result[choice - 1] += pf[choice-1](1);
	}

	printf("[주문 내역]\n");
	printf("메뉴         수량       가격\n");
	printf("----------------------------\n");
	if(result[0] != 0) printf("카페라떼  %7d%10d\n", result[0], result[0] * 2000);
	if (result[1] != 0) printf("카푸치노  %7d%10d\n", result[1], result[1] * 3000);
	if (result[2] != 0) printf("아메리카노%7d%10d\n", result[2], result[2] * 1000);
	printf("----------------------------\n");
	for (int i = 0; i < 3; i++) {
		sum += result[i] * price[i];
	}
	printf("총 가격 : %d\n\n", sum);
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