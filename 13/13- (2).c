//2015111888��ǰ������а� ��뼮

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	enum cards { J, Q, K, R } card_num;
	char *card_name[] = { "J", "Q", "K", "R" };

	enum shapes {SPADE, DIA, HEART, CLOVER} shape;
	char *shape_name[] = { "SPADE", "DIA", "HEART", "CLOVER" };

	int player;
	struct trump
	{
		union n
		{
			int number;
			char card;
		} num;
		char s;
	} t;
	int check[4] = { 0, 0, 0, 0 },order[4], tmp,i, j;



	printf("���ӿ� ������ �ο��� �Է��ϼ��� : ");
	scanf("%d", &player);

	srand((unsigned)time(NULL));

	for (i = 0; i < player;)
	{
		tmp = rand() % player;
		if (check[tmp] == 0)
		{
			check[tmp] = 1;
			order[i] = tmp + 1;
			//printf("%d - %d/",check[tmp], order[i]);
			i++;
		}
	};
	printf("�������� �÷��� ������ �������ϴ�.(������� ���� ������ ī�尡 �����˴ϴ�.)\n");
	for (i = 0; i < player; i++) printf("%d ", order[i]);
	printf("\n");
	printf("��� �÷��̾�� �ڽ��� ī���߿� ������ �������� �̾��ּ���\n");
	


	for (int i = 0; i < player; i++) {
		shape = i;
		j = (rand() % 13) + 2;

		if (j > 10) {
			card_num = j-11;
			t.num.card = card_name[card_num];
		}
		else t.num.number = j;
		printf("�÷��̾�%d : %s ", order[i], shape_name[shape]);

		if (j > 10) { printf("%s", card_name[card_num]); }
		else printf("%d", t.num.number);
		printf("\n");
	};
}