//2015111888 식품생명공학과 장용석


#include <stdio.h>

void screen(char T[][3]);
int whoWin(char T[3][3], int count);

int main(void)
{
	int row, col, flag=0, count=1, win=1;
	char TicTacToe[3][3] = {{'*','*','*'}, {'*','*','*'},{'*','*','*'} };  //초기화
	
	screen(TicTacToe); //초기화면 출력
	while (win) //win=0이 되면 게임 종료
	{
		if (flag == 0) printf("< O"); 
		else printf("< X"); //flag로 차례 설정

		printf("의 차례! >\n");
		printf("어디에 입력하시겠습니까? : \n");
		while (1)
		{
			scanf("%d %d", &row, &col);
			if (TicTacToe[row][col] != '*') {
				printf("놓을 수 없는 자리 입니다. 다시 입력해주세요. : "); //이미 놓여진 자리 불가
				continue;
			}
			if ((row > 2 || row < 0)||(col>2 || col<0)) {
				printf("범위를 초과했습니다. 다시 입력해주세요. : "); //0~2범위 이외의 값 입력시 다시 입력;
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
		case 0: printf("무승부\n"); win = 0; break;
		case 1: printf("O의 승리\n"); win = 0; break;
		case 2: printf("X의 승리\n"); win = 0; break;
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
	printf("┏━━━━━━┓\n");
	
	for (i = 0; i < 3; i++)
	{
		printf("┃");
		for (j = 0; j < 3; j++) printf("%2c", T[i][j]);
		printf("┃\n");
	}
	printf("┗━━━━━━┛\n");
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
