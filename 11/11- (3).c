//2015111888 ��ǰ������а� ��뼮


#include <stdio.h>

void screen(char T[][3]);
int whoWin(char T[3][3], int count);

int main(void)
{
	int row, col, flag=0, count=1, win=1;
	char TicTacToe[3][3] = {{'*','*','*'}, {'*','*','*'},{'*','*','*'} };  //�ʱ�ȭ
	
	screen(TicTacToe); //�ʱ�ȭ�� ���
	while (win) //win=0�� �Ǹ� ���� ����
	{
		if (flag == 0) printf("< O"); 
		else printf("< X"); //flag�� ���� ����

		printf("�� ����! >\n");
		printf("��� �Է��Ͻðڽ��ϱ�? : \n");
		while (1)
		{
			scanf("%d %d", &row, &col);
			if (TicTacToe[row][col] != '*') {
				printf("���� �� ���� �ڸ� �Դϴ�. �ٽ� �Է����ּ���. : "); //�̹� ������ �ڸ� �Ұ�
				continue;
			}
			if ((row > 2 || row < 0)||(col>2 || col<0)) {
				printf("������ �ʰ��߽��ϴ�. �ٽ� �Է����ּ���. : "); //0~2���� �̿��� �� �Է½� �ٽ� �Է�;
				continue;
			}
			else break;
		}

		if(flag == 0)TicTacToe[row][col] = 'O';
		else TicTacToe[row][col] = 'X';
		
		screen(TicTacToe);
		printf("\n");
		switch (whoWin(TicTacToe, count))
		{
		case 0: printf("���º�\n"); win = 0; break;
		case 1: printf("O�� �¸�\n"); win = 0; break;
		case 2: printf("X�� �¸�\n"); win = 0; break;
		case 4: break;
		}
		count++;
		if (flag) flag = 0;
		else flag = 1;
	}
}




void screen(char T[][3])
{
	int i, j;
	printf("����������������\n");
	
	for (i = 0; i < 3; i++)
	{
		printf("��");
		for (j = 0; j < 3; j++) printf("%2c", T[i][j]);
		printf("��\n");
	}
	printf("����������������\n");
}
int whoWin(char T[3][3], int count){	int i, j;

	for (i = 0; i < 3; i++)
	{
		if (T[i][0] != '*')
			if ((T[i][0] == T[i][1]) && (T[i][1] == T[i][2]))
			{
				if (T[i][0] == 'O') return 1;
				if (T[i][0] == 'X') return 2;
			}
		if (T[0][i] != '*')
			if ((T[0][i] == T[1][i]) && (T[1][i] == T[2][i]))
			{
				if (T[0][i] == 'O') return 1;
				if (T[0][i] == 'X') return 2;
			}

	}	if (T[1][1] != '*')		if ((T[0][0] == T[1][1]) && (T[0][0] == T[2][2]))
		{
			if (T[1][1] == 'O') return 1;
			if (T[1][1] == 'X') return 2;		}		if ((T[0][2] == T[1][1]) && (T[1][1] == T[2][0]))
		{
			if (T[1][1] == 'O') return 1;
			if (T[1][1] == 'X') return 2;		}	if (count == 9)
		return 0;	else return 4;}
